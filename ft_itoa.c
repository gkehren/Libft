/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gkehren <gkehren@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 15:49:54 by gkehren           #+#    #+#             */
/*   Updated: 2022/03/19 15:57:09 by gkehren          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_nb(long nb)
{
	int	len;

	len = 0;
	if (nb < 0)
	{
		nb = nb * -1;
		len++;
	}
	while (nb > 0)
	{
		nb = nb / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	long	nbr;
	int		i;

	nbr = n;
	i = len_nb(nbr);
	str = ft_strnew(i);
	if (nbr == 0)
	{
		str[0] = 48;
		return (str);
	}
	if (nbr < 0)
	{
		str[0] = '-';
		nbr = nbr * -1;
	}
	while (nbr > 0)
	{
		str[i] = 48 + (nbr % 10);
		nbr = nbr / 10;
		i--;
	}
	return (str);
}
