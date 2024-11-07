/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlleres <axlleres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 00:37:31 by axlleres          #+#    #+#             */
/*   Updated: 2024/11/08 00:45:08 by axlleres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	int		s_len;
	int		i;
	char	*res;

	s_len = 0;
	while (s[s_len] != '\0')
		s_len++;
	if (start >= s_len)
		return (NULL);
	i = 0;
	while (s[i + start] != '\0' && i < len)
		i++;
	len = i;
	res = malloc(sizeof(char) * (1 + len));
	if (res == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		res[i] = s[start + i];
		i++;
	}
	res[i] = '\0';
	return (res);
}