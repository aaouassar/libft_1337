/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouassa <aaouassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:28:18 by aaouassa          #+#    #+#             */
/*   Updated: 2022/10/29 17:01:09 by aaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*a;
	unsigned const char	*b;
	size_t				i;
	int					j;

	i = 0;
	j = 0;
	a = (unsigned char *)dst;
	b = (unsigned char *)src;
	if (a == NULL && b == NULL)
		return (NULL);
	if (a >= b)
	{
		i = len;
		while (i-- > 0)
			a[i] = b[i];
	}
	while (i < len)
	{
		a[i] = b[j];
		i++;
		j++;
	}
	return (dst);
}
