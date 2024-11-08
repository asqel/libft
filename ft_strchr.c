/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlleres <axlleres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:27:56 by axlleres          #+#    #+#             */
/*   Updated: 2024/11/05 12:15:21 by axlleres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	int	p;

	p = 0;
	while (s[p] != '\0')
	{
		if (s[p] == c)
			return ((char *)&(s[p]));
		p++;
	}
	if (c == '\0')
		return ((char *)&(s[p]));
	return (NULL);
}
