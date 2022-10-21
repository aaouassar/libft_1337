/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouassa <aaouassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 11:34:34 by aaouassa          #+#    #+#             */
/*   Updated: 2022/10/17 16:53:57 by aaouassa         ###   ########.fr       */
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
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	sf = (char *)malloc(sizeof(char) * (i + j) + 1);
	if (s1 == NULL && s2 == NULL)
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
		sf[i] = s2[j];
		i++;
		j++;
	}
	sf[i] = '\0';
	return (sf);
}
