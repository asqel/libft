/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlleres <axlleres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 00:01:41 by axlleres          #+#    #+#             */
/*   Updated: 2024/11/08 00:36:14 by axlleres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	is_it_a_espace(char c)
{
	if (c == ' ' || c == '\f' || c == '\n')
		return (1);
	if (c == '\r' || c == '\t' || c == '\t')
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	res;
	int	i;
	int	sign;

	res = 0;
	i = 0;
	sign = 0;
	while (is_it_a_espace(nptr[i]))
		i++;
	if (nptr[i] == '+')
		i++;
	else if (nptr[i] == '-')
	{
		i++;
		sign = 1;
	}
	while ('0' <= nptr[i] && nptr[i] <= '9')
	{
		res *= 10;
		if (sign)
			res -= (nptr[i] - '0');
		else
			res += (nptr[i] - '0');
	}
	return (res);
}
