/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouassa <aaouassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:58:30 by aaouassa          #+#    #+#             */
/*   Updated: 2022/10/15 16:23:04 by aaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


void *ft_calloc(size_t count, size_t size)
{
	void *p;
	if (count == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	p = malloc(size * count);
	if (!p)
		return NULL;
	ft_bzero(p, count);
	return (p);
	
}


