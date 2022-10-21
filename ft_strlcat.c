/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouassa <aaouassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:35:55 by aaouassa          #+#    #+#             */
/*   Updated: 2022/10/17 20:22:32 by aaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
size_t ft_strlcat(char *dst, const char *src, size_t dstsize)
 {
 	size_t i;
 	size_t j;
 	size_t len;
 	size_t l;
    size_t s;

 	i = 0;
 	j = 0;
 	l = 0;
    if (dst == 0 && dstsize == 0)
        return(l);
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
 		dst[j] = src[i];
 		i++;
        j++;
 	}
 	dst[j] = '\0';
 	return (len);
 }

