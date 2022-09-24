/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 18:25:56 by meourea           #+#    #+#             */
/*   Updated: 2021/05/04 18:26:00 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	if (n == 0)
		return (0);
	while (n != 1 && *(unsigned char *)s1 == *(unsigned char *)s2)
	{
		s1++;
		s2++;
		n--;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
