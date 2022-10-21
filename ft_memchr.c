/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouassa <aaouassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 09:05:06 by aaouassa          #+#    #+#             */
/*   Updated: 2022/10/19 09:29:39 by aaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s1;
	unsigned char	c1;
	int				i;

	s1 = (unsigned char *)s;
	c1 = (unsigned char)c;
	i = 0;
	while (n > 0)
	{
		if (s1[i] == c1)
			return ((void *)s + i);
		i++;
		n--;
	}
	return (0);
}
