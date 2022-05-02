/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 21:37:27 by gkehren           #+#    #+#             */
/*   Updated: 2022/04/01 19:12:36 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*temp;
	char	*temp2;
	int		i;

	i = 0;
	temp = (char *)src;
	temp2 = (char *)dst;
	while (i < (int)n)
	{
		temp2[i] = temp[i];
		if (temp[i] == (char)c)
			return ((void *)(dst + i + 1));
		i++;
	}
	return (NULL);
}
