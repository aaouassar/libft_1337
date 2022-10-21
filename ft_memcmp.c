/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouassa <aaouassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 16:36:13 by aaouassa          #+#    #+#             */
/*   Updated: 2022/10/14 07:39:45 by aaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int  ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char *a;
	unsigned char *b;

	size_t i;
	
	a = (unsigned char *)s1;
	b = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (a[i] != b[i])
		{
			return (a[i] - b[i]);
		}
		i++;
	}
	return (0);	
}
// int main ()
// {
// 	char z[] = "";
// 	char b[] = "";
// 	printf("%d\n", ft_memcmp(z, b, 2));
// 	printf("%d", memcmp(z, b, 2));
// }
