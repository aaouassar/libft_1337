/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouassa <aaouassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 14:41:06 by aaouassa          #+#    #+#             */
/*   Updated: 2022/10/24 01:03:58 by aaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dup;
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	if (s[i] == '\0')
		return (0);
	if (start > ft_strlen(s))
		return (ft_strdup(""));
	while (j < len && s[start + j])
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
