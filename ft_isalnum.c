/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouassa <aaouassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 15:22:42 by aaouassa          #+#    #+#             */
/*   Updated: 2022/10/27 17:31:52 by aaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

int	ft_isalnum(int c)
{
	char c1;

	c1 = (unsigned char)c;
	if (ft_isalpha(c1) || ft_isdigit(c1))
		return (1);
	return (0);
}
