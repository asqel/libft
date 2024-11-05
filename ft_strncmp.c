/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlleres <axlleres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 10:55:46 by axlleres          #+#    #+#             */
/*   Updated: 2024/11/05 11:22:46 by axlleres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	p;

	p = 0;
	while (p < n && s1[p] != '\0' && s2[p] != '\0')
	{
		if (s1[p] != s2[p])
			return ((unsigned char)s1[p] - (unsigned char)s2[p]);
		p++;
	}
	if (p == n)
		return 0;
	return ((unsigned char)s1[p] - (unsigned char)s2[p]);
}