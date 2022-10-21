/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouassa <aaouassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 09:56:31 by aaouassa          #+#    #+#             */
/*   Updated: 2022/10/19 13:48:44 by aaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char    *ft_strrchr(const char *s, int c)
{
    size_t i;
	char c1;

	c1 = (char)c;
    i = 0;
    while (s[i] != '\0')
        i++;
    
    while (i > 0)
    {
        if (s[i] == c1)
            return ((char *)s + i);
        i--;
    }
	if (c1 == s[i])
		return((char *)s);
    return (NULL);
}



