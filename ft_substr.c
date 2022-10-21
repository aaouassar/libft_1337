/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouassa <aaouassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:35:24 by aaouassa          #+#    #+#             */
/*   Updated: 2022/10/21 15:10:13 by aaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char* ft_substr(char const* s, unsigned int start, size_t len)
// {
// 	size_t	i;
// 	size_t	j;
// 	char *sub;

// 	i = 0;
// 	j = 0;
// 	if (!s)
// 		return (NULL);
// 	sub = (char*)malloc(sizeof(char) * (len + 1));
//     if (!sub)
// 		return (NULL);
// 	while (s[i])
// 	{
// 		if (i >= start && j < len)
// 		{
// 			sub[j] = s[i];
// 			j++;
// 		}
//         if (j > len)
//             break;
// 		i++;
// 	}
// 	sub[j] = '\0';
//     return (sub);
// }


/*char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *s1;
    size_t i;
    size_t j;

    j = 0;
    
    i = 0;
    while(j <= len && s[start + j])
        j++;
    s1 = malloc(sizeof(char) * (j + 1));
    if (!(s1))
        return (NULL);
    while (i + start < len )
    {
        s1[i] = s[start + i];
        i++;
    }
    s1[i] = '\0';
    return (s1);
}*/

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *dup;
    size_t        i;

    i = 0;
    if (s[i] == '\0')
        return (0);
    if (start > ft_strlen(s))
        return (ft_strdup(""));
    if (len + start > ft_strlen(s))
        len = ft_strlen(s) - start; 
    dup = (char *)malloc(sizeof(char) * (len + 1));
    if (!dup)
        return (0);
    while (s[start] && len-- > 0)
    {
        dup[i] = s[start];
        i++;
        start++;
    }
    dup[i] = '\0';
    return (dup);
}

