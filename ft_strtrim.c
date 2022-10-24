/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouassa <aaouassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 23:03:55 by aaouassa          #+#    #+#             */
/*   Updated: 2022/10/24 01:01:09 by aaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;

	if (!(*s1) || (!(*s1) && !(*set)))
		return (ft_calloc(1, 1));
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	if (!*s1)
		return (ft_calloc(1, 1));
	len = ft_strlen((char *)s1);
	while (ft_strchr(set, s1[len]) && len > 0)
		len--;
	return (ft_substr(s1, 0, len + 1));
}
