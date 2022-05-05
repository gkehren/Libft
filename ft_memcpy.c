/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 21:25:20 by gkehren           #+#    #+#             */
/*   Updated: 2022/05/05 14:14:33 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*temp;
	unsigned char	*temp2;
	size_t			i;

	i = 0;
	if (!dst || !src)
		return (NULL);
	temp = (unsigned char *)src;
	temp2 = (unsigned char *)dst;
	while (i < n)
	{
		temp2[i] = temp[i];
		i++;
	}
	return ((void *)dst);
}
