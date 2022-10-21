/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouassa <aaouassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 13:26:40 by aaouassa          #+#    #+#             */
/*   Updated: 2022/10/20 14:38:34 by aaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*a;
	const char	*b;
	unsigned int		i;

	i = 0;
	a = (char *)dst;
	b = (const char *)src;
	if (a == NULL && b == NULL)
		return (NULL);
	while (n > i)
	{
		a[i] = b[i];
		i++;
	}
	return (a);
}
