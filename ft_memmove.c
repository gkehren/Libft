/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 21:59:51 by gkehren           #+#    #+#             */
/*   Updated: 2022/03/13 22:16:04 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*temp;
	char	*temp2;
	int		i;

	i = 0;
	temp = (char *)src;
	temp2 = (char *)dst;
	while (i < (int)len)
	{
		temp2[i] = temp[i];
		i++;
	}
	return (dst);
}
