/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: borabi <bilal.orabi@learner.42.tech>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/12 21:46:05 by borabi            #+#    #+#             */
/*   Updated: 2025/12/12 21:46:09 by borabi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

static void	parse_prefix(const char *s, int *i, int *sign)
{
	while (s[*i] == ' ' || (s[*i] >= 9 && s[*i] <= 13))
		(*i)++;
	if (s[*i] == '+' || s[*i] == '-')
	{
		if (s[*i] == '-')
			*sign = -1;
		(*i)++;
	}
}

int	ft_atoi(const char *nptr)
{
	int			i;
	int			sign;
	long		value;

	i = 0;
	sign = 1;
	value = 0;
	parse_prefix(nptr, &i, &sign);
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		value = value * 10 + (nptr[i] - '0');
		if (sign == 1 && value > INT_MAX)
			return (INT_MAX);
		if (sign == -1 && - value < INT_MIN)
			return (INT_MIN);
		i++;
	}
	return ((int)(value * sign));
}
