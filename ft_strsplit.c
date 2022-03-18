/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 18:21:38 by gkehren           #+#    #+#             */
/*   Updated: 2022/03/18 22:14:43 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_split_word(char *dest, char const *src, char c)
{
	int	i;

	i = 0;
	while (src[i] != c)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

static int	ft_count_word(char const *str, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i + 1] == c && str[i] != c)
			count++;
		i++;
	}
	return (count);
}

char	**ft_strsplit(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	tab = (char **)malloc(sizeof(char *) * ft_count_word(s, c) + 1);
	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			j = 0;
			while (s[i + j] != c)
				j++;
			tab[k] = (char *)malloc(sizeof(char) * (j + 1));
			ft_split_word(tab[k], s + i, c);
			i += j;
			k++;
		}
	}
	tab[k] = NULL;
	return (tab);
}