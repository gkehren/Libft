/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/13 22:25:21 by gkehren           #+#    #+#             */
/*   Updated: 2022/03/13 22:34:23 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*temp;
	char	*temp2;
	int		i;

	i = 0;
	temp = (char *)s1;
	temp2 = (char *)s2;
	while (temp[i] == temp2[i] && i < (int)n - 1)
		i++;
	return (temp[i] - temp2[i]);
}
