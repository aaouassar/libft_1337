/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouassa <aaouassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 04:56:21 by aaouassa          #+#    #+#             */
/*   Updated: 2022/10/25 14:11:36 by aaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	get_len(int n)
{
	size_t	len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
		len++;
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

void	ft_cnvrt(char *s, long long int n, size_t len)
{
	size_t	i;

	if (n < 0)
	{
		n *= -1;
		s[0] = '-';
		i = 1;
	}
	else
		i = 0;
	while (len-- > i)
	{
		if (n < 0)
		{
			s[len] = '0' + n % 10;
			n = n / 10;
		}
		else
		{
			s[len] = '0' + n % 10;
			n = n / 10;
		}
	}
}

char	*ft_itoa(int n)
{
	size_t			len;
	char			*rslt;

	len = get_len(n);
	rslt = (char *)malloc(len + 1);
	if (!rslt)
		return (NULL);
	rslt[len] = '\0';
	ft_cnvrt(rslt, n, len);
	return (rslt);
}
