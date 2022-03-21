/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 18:06:09 by gkehren           #+#    #+#             */
/*   Updated: 2022/03/20 23:25:10 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	char	*temp;
	int		i;

	if (!s)
		return (NULL);
	temp = (char *)s;
	i = 0;
	while (temp[i] == ' ' || temp[i] == '\n' || temp[i] == '\t')
		i++;
	temp = &temp[i];
	i = ft_strlen(temp) - 1;
	if (i == -1)
		return ("");
	while (temp[i] == ' ' || temp[i] == '\n' || temp[i] == '\t')
		i--;
	i += 1;
	str = (char *)malloc(sizeof(char) * i + 1);
	if (str == NULL)
		return (NULL);
	str = ft_strncpy(str, temp, i);
	str[i] = '\0';
	return (str);
}
