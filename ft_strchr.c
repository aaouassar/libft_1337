/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouassa <aaouassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 09:45:55 by aaouassa          #+#    #+#             */
/*   Updated: 2022/10/17 20:25:28 by aaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char    *ft_strchr(const char    *s, int    c)
{
    int i;
	char c1;

	c1 = (unsigned char)c;
    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c1)
            return ((char *)s + i);
        i++;
    }
    if (c1 == '\0')
        return ((char *)s + i);    
    return (NULL);
}
