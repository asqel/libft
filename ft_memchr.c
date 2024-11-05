/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlleres <axlleres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 11:11:12 by axlleres          #+#    #+#             */
/*   Updated: 2024/11/05 11:17:24 by axlleres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *s, int c, size_t n)
{
	size_t				p;
	const unsigned char	*data;

	data = (const unsigned char *)s;
	p = 0;
	while (p < n)
	{
		if (data[p] == (unsigned char)c)
			return (void *)&(data[p]);
		p++;
	}
	return (NULL);	
}