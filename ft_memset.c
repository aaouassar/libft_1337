/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouassa <aaouassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 07:30:47 by aaouassa          #+#    #+#             */
/*   Updated: 2022/10/27 17:59:00 by aaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memset(void *b, int c,	size_t len)
{
	unsigned char	*a;
	int				i;

	i = 0;
	a = (unsigned char *)b;
	while (len-- > 0)
		a[i++] = (unsigned char)c;
	b = (void *)a;
	return (b);
}
