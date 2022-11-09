/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouassa <aaouassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:41:06 by aaouassa          #+#    #+#             */
/*   Updated: 2022/10/30 23:04:18 by aaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dup;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	j = 0;
	i = 0;
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	if (len + start >= ft_strlen(s))
		len = ft_strlen(s) - start;
	dup = (char *)malloc(sizeof(char) * (len + 1));
	if (!dup)
		return (0);
	while (s[start] && i < len)
	{
		dup[i] = s[start];
		i++;
		start++;
	}
	dup[i] = '\0';
	return (dup);
}
