/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlleres <axlleres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 00:10:43 by axlleres          #+#    #+#             */
/*   Updated: 2024/11/08 00:35:46 by axlleres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			i;
	size_t			total_size;
	unsigned char	*mem;

	total_size = nmemb * size;
	if (total_size == 0)
		return (NULL);
	mem = (unsigned char *)malloc(total_size);
	if (mem == NULL)
		return (NULL);
	i = 0;
	while (i < total_size)
		mem[i++] = 0;
	return (mem);
}
