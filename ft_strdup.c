/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlleres <axlleres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 00:31:03 by axlleres          #+#    #+#             */
/*   Updated: 2024/11/08 00:35:30 by axlleres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*res;
	int		len;

	len = 0;
	while (s[len] != '\0')
		len++;
	res = malloc(sizeof(char) * (len + 1));
	if (res == NULL)
		return (res);
	len = 0;
	while (s[len] != '\0')
	{
		res[len] = s[len];
		len++;
	}
	res[len] = '\0';
	return (res);
}
