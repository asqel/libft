/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlleres <axlleres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:36:31 by axlleres          #+#    #+#             */
/*   Updated: 2024/11/08 00:35:23 by axlleres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_it_here(const char *big, const char *little,
	size_t idx, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		if (big[i + idx] != little[i])
			return (0);
		i++;
	}
	return (1);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	little_len;
	size_t	i;

	little_len = 0;
	while (little[little_len] != '\0')
		little_len++;
	if (little_len == 0)
		return ((char *)big);
	i = 0;
	while (i < len && big[i] != '\0')
		i++;
	len = i;
	i = 0;
	while (i < len - little_len + 1)
	{
		if (is_it_here(big, little, i, little_len))
			return ((char *)&(big[i]));
		i++;
	}
	return (NULL);
}
