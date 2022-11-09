/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouassa <aaouassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 07:30:47 by aaouassa          #+#    #+#             */
/*   Updated: 2022/10/31 20:36:34 by aaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memset(void *b, int c,	size_t len)
{
	unsigned char	*a;
	size_t			i;

	i = 0;
	a = (unsigned char *)b;
	while (len > i)
		a[i++] = (unsigned char)c;
		len--;
	b = (void *)a;
	return (b);
}
