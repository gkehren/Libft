/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 22:25:21 by gkehren           #+#    #+#             */
/*   Updated: 2022/03/20 23:21:01 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*temp;
	unsigned char	*temp2;
	int				i;

	i = 0;
	temp = (unsigned char *)s1;
	temp2 = (unsigned char *)s2;
	while (temp[i] == temp2[i] && i < (int)n - 1)
		i++;
	return (temp[i] - temp2[i]);
}
