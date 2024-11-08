/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlleres <axlleres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 22:20:36 by axlleres          #+#    #+#             */
/*   Updated: 2024/11/08 22:55:05 by axlleres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_splited(char const *s, char c)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if ((i == 0 && s[0] != c) || (i > 0 && s[i] != c && s[i - 1] == c))
			count++;
		i++;
	}
	return (count);
}

static void	*split_free_all(char **strs)
{
	int	i;

	i = 0;
	while (strs[i] != NULL)
		free(strs[i++]);
	free(strs);
	return (NULL);
}

static char	*dup_the_word(char const *s, char c, int idx)
{
	int		end;
	char	*res;

	end = idx;
	while (s[end] != '\0' && s[end] != c)
		end++;
	res = malloc(sizeof(char) * (end - idx + 1));
	if (res == NULL)
		return (NULL);
	res[0] = '\0';
	ft_strlcat(res, &(s[idx]), end - idx + 1);
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	int		len;
	int		i;
	int		k;

	len = count_splited(s, c);
	res = ft_calloc(len + 1, sizeof(char *));
	if (res == NULL)
		return (NULL);
	i = 0;
	k = 0;
	while (k < len)
	{
		if ((i == 0 && s[0] != c) || (i > 0 && s[i] != c && s[i - 1] == c))
		{
			res[k] = dup_the_word(s, c, i);
			if (res[k] == NULL)
				return ((char **)split_free_all(res));
			k++;
		}
		i++;
	}
	return (res);
}
