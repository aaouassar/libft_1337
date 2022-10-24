/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouassa <aaouassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:34:34 by aaouassa          #+#    #+#             */
/*   Updated: 2022/10/24 01:12:53 by aaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char	const *s1, char	const *s2)
{
	char	*sf;
	int		i;
	int		j;

	i = 0;
	j = 0;
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	sf = malloc(sizeof(char) * (i + j) + 1);
	if (!sf)
		return (NULL);
	i = 0;
	while (s1[i] != '\0')
	{
		sf[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0')
	{
		sf[i++] = s2[j++];
	}
	sf[i] = '\0';
	return (sf);
}
