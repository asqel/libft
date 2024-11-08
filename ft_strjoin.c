/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlleres <axlleres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 22:00:52 by axlleres          #+#    #+#             */
/*   Updated: 2024/11/08 22:09:17 by axlleres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len;
	char	*res;

	len = ft_strlen(s1) + ft_strlen(s2);
	res = malloc(sizeof(char) * (1 + len));
	if (res == NULL)
		return (NULL);
	res[0] = '\0';
	ft_strlcat(res, s1, len + 1);
	ft_strlcat(res, s2, len + 1);
	return (res);
}
