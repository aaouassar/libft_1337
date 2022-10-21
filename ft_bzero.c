/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouassa <aaouassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:19:12 by aaouassa          #+#    #+#             */
/*   Updated: 2022/10/18 16:48:28 by aaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void	*s, size_t	n)
{
	unsigned char	*a;
	unsigned int	i;

	i = 0;
	a = (unsigned char *)s;
	while (n > i)
	{
		a[i] = '\0';
		i++;
	}
}
