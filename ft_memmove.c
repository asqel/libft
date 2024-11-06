/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlleres <axlleres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:54:04 by axlleres          #+#    #+#             */
/*   Updated: 2024/11/05 12:18:06 by axlleres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t		p;

	if (dest == NULL && src == NULL)
		return (NULL);
	p = 0;
	if (src < dest)
	{
		while (p < n)
		{
			((char *)dest)[n - p - 1] = ((const char *)src)[n - p - 1];
			p++;
		}
	}
	else
	{
		while (p < n)
		{
			((char *)dest)[p] = ((const char *)src)[p];
			p++;
		}
	}
	return (dest);
}
