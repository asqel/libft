/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlleres <axlleres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:41:02 by axlleres          #+#    #+#             */
/*   Updated: 2024/11/05 11:18:19 by axlleres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const char	*s;
	char		*d;
	size_t		p;

	s = (const char *)src;
	d = (char *)dest;
	p = 0;
	while (p < n)
	{
		d[p] = s[p];
		p++;
	}
	return (dest);
}
