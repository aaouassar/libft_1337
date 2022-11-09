/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouassa <aaouassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 14:52:10 by aaouassa          #+#    #+#             */
/*   Updated: 2022/11/09 20:35:01 by aaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include "libft.h"

int	ft_atoi(const char *str)
{
	int				i;
	int				neg;
	long long int	rst;

	i = 0;
	neg = 1;
	rst = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (i[str] == '-')
			neg = neg * (-1);
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{	
		rst = (rst * 10) + (str[i] - '0');
		i++;
	}
	if (LLONG_MAX < rst && neg == 1)
		return (-1);
	else if (LLONG_MAX < rst && neg == -1)
		return (0);
	return (neg * rst);
}
