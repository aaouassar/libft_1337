/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouassa <aaouassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:41:06 by aaouassa          #+#    #+#             */
/*   Updated: 2022/10/20 13:11:38 by aaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char    *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *dup;
    size_t        i;
    size_t        j;
    j = 0;
    i = 0;
    if (s[i] == '\0')
        return (0);
    if (start > ft_strlen(s))
        return (ft_strdup(""));
    while(j < len && s[start + j])
        j++;
    dup = (char *)malloc(sizeof(char) * (j + 1));
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
// 		i++;
// 	}
// 	sub[j] = '\0';
//     return (sub);
// }


// char *ft_substr(char const *s, unsigned int start, size_t len)
// {
//     char *s1;
//     size_t i;
// 	size_t j;
	
// 	j = 0;
// 	while(j < len && s[start + j])
//         j++;
//     s1 = (char *)malloc(sizeof(char) * (j + 1));
//     if (!(s1))
//         return (NULL);
//     i = 0;
//     while (i < len && s[start])
//     {
//         s1[i] = s[start];
//         i++;
//         start++;
//     }
//     s1[i] = '\0';
//     return (s1);
// }

// char *ft_substr(char const *s, unsigned int start, size_t len)
// {
//     char    *s1;
//     size_t  i;
//     size_t  xlen;

//     xlen = ft_strlen(s);
//     if (s == NULL)
//         return (NULL);
//     if (len >= xlen)
//         len = xlen;
//     s1 = (char *)malloc(sizeof(char) * (len + 1));
//     if (s1 == NULL)
//         return (NULL);
//     i = 0;
//     while (i < ft_strlen(s) && start < len && s[start])
//     {
//         s1[i] = s[start];
//         i++;
//         start++;
//     }
//     s1[i] = '\0';
//     return (s1);
// }

