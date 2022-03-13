/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 21:37:27 by gkehren           #+#    #+#             */
/*   Updated: 2022/03/13 21:59:21 by gkehren          ###   ########.fr       */
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
			return (dst);
		i++;
	}
	return (NULL);
}
