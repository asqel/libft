/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlleres <axlleres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:54:04 by axlleres          #+#    #+#             */
/*   Updated: 2024/11/05 11:20:38 by axlleres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char	*s;
	char		*d;
	size_t		p;

	s = (const char *)src;
	d = (char *)dest;
	p = 0;
	if (src < dest)
	{
		while (p < n)
		{
			d[n - p - 1] = s[n - p - 1];
			p--;
		}
	}
	else
	{
		while (p < n)
		{
			d[p] = s[p];
			p--;
		}
	}
	return (dest);
}
