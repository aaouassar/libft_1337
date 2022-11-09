/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouassa <aaouassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 04:56:21 by aaouassa          #+#    #+#             */
/*   Updated: 2022/10/31 15:03:37 by aaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	get_len(int n)
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

static void	ft_cnvrt(char *s, long long int n, size_t len)
{
	size_t	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		s[0] = '-';
		i = 1;
	}
	while (len-- > i)
	{
		s[len] = n % 10 + 48;
		n = n / 10;
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
