/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaouassa <aaouassa@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 16:38:46 by aaouassa          #+#    #+#             */
/*   Updated: 2022/10/27 17:57:17 by aaouassa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include<stdlib.h>
//  #include<stdio.h>
#include "libft.h"

void	free_func(char **splited)
{
	int	j;

	j = 0;
	while (splited[j])
	{
		free(splited[j]);
		j++;
	}
	free(splited);
}

int	count_words(char const *s, char c)
{
	size_t	i;
	int		nbr;

	nbr = 0;
	i = 0;
	while (i < ft_strlen(s))
	{
		while (s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			nbr++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (nbr);
}

char	**alloc_words(char const *s, char c, char **splited, int words)
{
	int	i;
	int	len;
	int	start;
	int	j;

	j = 0;
	start = 0;
	i = 0;
	len = 0;
	while (j < words)
	{
		while (s[i] == c)
		{
			i++;
			start++;
		}
		while (s[i] && s[i] != c)
		{
			i++;
			len++;
		}
		splited[j++] = ft_substr(s, start, len);
		start += len;
		len = 0;
	}
	return (splited);
}

char	**ft_split(char const *s, char c)
{
	char	**splited;
	int		nbr_word;

	nbr_word = count_words(s, c);
	splited = malloc(sizeof(char *) * (nbr_word + 1));
	if (!splited)
		return (NULL);
	splited = alloc_words(s, c, splited, nbr_word);
	splited[nbr_word] = NULL;
	if (!splited)
		free_func(splited);
	return (splited);
}

// int main()
// {
// 	char *splitme = strdup("--1-2--3---4----5-----42");
// 	char **tab = ft_split(splitme, '-');
// // // 	// char *splitme = strdup("Tripouille hh iii ");
// // // 	// char **tab = ft_split(splitme, ' ');
// // // 	char **tab = ft_split("hello!", ' ');
// 	int i = 0;
// 	while(i < 7)
// 	{
// 		printf("%s\n", tab[i]);
// 		i++;
// 	}
// }