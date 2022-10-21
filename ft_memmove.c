/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouassa <aaouassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 14:28:18 by aaouassa          #+#    #+#             */
/*   Updated: 2022/10/17 21:30:09 by aaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char *a;
	unsigned const char *b;
	size_t i;
	int j;
	
	i = 0;
	j = 0;
	a = dst;
	b = src;
	if (!dst && !src)
		return (NULL);
	while(i < len)
	{
		a[i] = b[j];
		i++;
		j++;
	}
	return (dst);
}