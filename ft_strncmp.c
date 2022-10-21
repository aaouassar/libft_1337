/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouassa <aaouassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 09:13:23 by aaouassa          #+#    #+#             */
/*   Updated: 2022/10/20 11:47:59 by aaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			x;
	unsigned char	*f1;
	unsigned char	*f2;

	f1 = (unsigned char *)s1;
	f2 = (unsigned char *)s2;
	x = 0;
	while ((f1[x] || f2[x]) && x < n)
	{
		if (f1[x] != f2[x])
		{
			return (f1[x] - f2[x]);
		}
		x++;
	}
	return (0);
}
