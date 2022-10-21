/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouassa <aaouassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 14:55:55 by aaouassa          #+#    #+#             */
/*   Updated: 2022/10/18 15:07:09 by aaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long long int	j;

	j = n;
	if (j < 0)
	{
		ft_putchar_fd('-', fd);
		j = -j;
	}
	if (j > 9)
	{
		ft_putnbr_fd(j / 10, fd);
		ft_putnbr_fd(j % 10, fd);
	}
	else
	{
		ft_putchar_fd(j + '0', fd);
	}
}
