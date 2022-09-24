/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 11:50:39 by meourea           #+#    #+#             */
/*   Updated: 2021/05/10 11:50:42 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	length(long int nbr)
{
	int	len;

	len = 0;
	if (nbr < 0)
	{
		nbr *= -1;
		len++;
	}
	while (nbr > 0)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

static char	*zero(void)
{
	char	*str0;

	str0 = (char *)malloc(sizeof(char) * (2));
	if (!str0)
		return (0);
	str0[0] = '0';
	str0[1] = '\0';
	return (str0);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			i;
	long int	nbr;

	nbr = n;
	if (nbr == 0)
		return (str = zero());
	i = length(nbr);
	str = (char *)malloc(sizeof(char) * (i + 1));
	if (!str)
		return (0);
	str[i--] = '\0';
	if (nbr < 0)
	{
		str[0] = '-';
		nbr *= -1;
	}
	while (nbr > 0)
	{
		str[i] = (nbr % 10) + 48;
		nbr /= 10;
		i--;
	}
	return (str);
}
