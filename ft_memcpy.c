/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 21:25:20 by gkehren           #+#    #+#             */
/*   Updated: 2022/05/06 17:21:48 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*temp;
	size_t	i;

	if (!dst || !src)
		return (NULL);
	temp = (char *)dst;
	i = 0;
	while (i < n)
	{
		*(char *)temp = *(char *)src;
		temp++;
		src++;
		i++;
	}
	return (dst);
}
