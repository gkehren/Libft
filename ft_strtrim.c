/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 18:06:09 by gkehren           #+#    #+#             */
/*   Updated: 2022/04/01 18:47:39 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_is_in(char const *tab, char c)
{
	int	i;

	i = 0;
	while (tab[i] != '\0')
	{
		if (tab[i] == c)
			return (1);
		i++;
	}
	if (c == '\0')
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s, char const *set)
{
	char	*str;
	char	*temp;
	int		i;

	if (!s)
		return (NULL);
	temp = (char *)s;
	i = 0;
	while (ft_is_in(set, temp[i]) == 1)
		i++;
	temp = &temp[i];
	i = ft_strlen(temp) - 1;
	if (i == -1)
		return ("");
	while (ft_is_in(set, temp[i]) == 1)
		i--;
	i += 1;
	str = (char *)malloc(sizeof(char) * i + 1);
	if (str == NULL)
		return (NULL);
	str = ft_strncpy(str, temp, i);
	str[i] = '\0';
	return (str);
}
