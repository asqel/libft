/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlleres <axlleres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:42:27 by axlleres          #+#    #+#             */
/*   Updated: 2024/11/05 12:14:38 by axlleres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strrchr(const char *s, int c)
{
	int	p;

	p = 0;
	while (s[p] != '\0')
		p++;
	if (c == '\0')
		return ((char *)&(s[p]));
	p--;
	while (p >= 0)
	{
		if (s[p] == c)
			return ((char *)&(s[p]));
		p--;
	}
	return (NULL);
}
