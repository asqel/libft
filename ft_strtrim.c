/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlleres <axlleres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 22:09:53 by axlleres          #+#    #+#             */
/*   Updated: 2024/11/08 22:24:01 by axlleres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_the_set(char c, const char *set)
{
	while (*set != '\0')
	{
		if (*set == c)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*res;
	int		i;

	start = 0;
	end = ft_strlen(s1);
	while (end - 1 >= 0 && is_in_the_set(s1[end - 1], set))
		end--;
	while (is_in_the_set(s1[start], set))
		start++;
	if (end <= start)
		return (ft_strdup(""));
	res = malloc(sizeof(char) * (end - start + 1));
	if (res == NULL)
		return (NULL);
	res[end - start] = '\0';
	i = start;
	while (i < end)
	{
		res[i - start] = s1[i];
		i++;
	}
	return (res);
}
