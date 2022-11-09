/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouassa <aaouassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 11:23:18 by aaouassa          #+#    #+#             */
/*   Updated: 2022/10/30 20:26:12 by aaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*copy;
	char	*s_s;
	int		i;

	s_s = (char *)s1;
	i = 0;
	while (s1[i] != '\0')
		i++;
	copy = (char *)malloc(sizeof(char) * (i + 1));
	if (!(copy))
		return (NULL);
	i = 0;
	while (s_s[i])
	{
		copy[i] = s_s[i];
		i++;
	}
	copy[i] = '\0';
	return (copy);
}
