/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axlleres <axlleres@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 00:01:41 by axlleres          #+#    #+#             */
/*   Updated: 2024/11/08 22:08:52 by axlleres         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	is_it_a_espace(char c)
{
	if (c == ' ' || c == '\f' || c == '\n')
		return (1);
	if (c == '\r' || c == '\v' || c == '\t')
		return (1);
	return (0);
}

static void	check_sign(int *sign, const char *s, int *idx)
{
	*sign = 0;
	if (s[*idx] == '+')
		(*idx)++;
	else if (s[*idx] == '-')
	{
		(*idx)++;
		*sign = 1;
	}
}

int	ft_atoi(const char *nptr)
{
	int	res;
	int	i;
	int	sign;

	res = 0;
	i = 0;
	while (is_it_a_espace(nptr[i]))
		i++;
	check_sign(&sign, nptr, &i);
	while ('0' <= nptr[i] && nptr[i] <= '9')
	{
		res *= 10;
		if (sign)
			res -= (nptr[i] - '0');
		else
			res += (nptr[i] - '0');
		i++;
	}
	return (res);
}
