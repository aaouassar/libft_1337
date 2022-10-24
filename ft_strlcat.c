/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouassa <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 00:54:41 by aaouassa          #+#    #+#             */
/*   Updated: 2022/10/24 00:59:07 by aaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	len;
	size_t	l;
	size_t	s;

	i = 0;
	j = 0;
	l = 0;
	if (dst == 0 && dstsize == 0)
		return (l);
	while (src[l])
		l++;
	while (dst[j])
		j++;
	len = j + l;
	s = dstsize - j - 1;
	if (j >= dstsize)
		return (l + dstsize);
	while (src[i] != '\0' && i < s)
	{
		dst[j++] = src[i++];
	}
	dst[j] = '\0';
	return (len);
}
