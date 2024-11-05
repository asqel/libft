/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlleres <axlleres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:13:18 by axlleres          #+#    #+#             */
/*   Updated: 2024/11/05 11:21:17 by axlleres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	char	*data;
	size_t	p;

	data = (char *)s;
	p = 0;
	while (p < n)
	{
		data[p] = c;
		p++;
	}
	return (s);
}
