/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 21:25:20 by gkehren           #+#    #+#             */
/*   Updated: 2022/03/13 21:36:25 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
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
		i++;
	}
	return (dst);
}
