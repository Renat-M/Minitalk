/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 15:25:51 by meourea           #+#    #+#             */
/*   Updated: 2021/05/07 15:25:54 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)dst;
	ptr2 = (unsigned char *)src;
	while (n-- > 0)
	{
		*ptr1 = *ptr2;
		if (*ptr2 == (unsigned char)c)
			return (ptr1 + 1);
		ptr1++;
		ptr2++;
	}
	return (NULL);
}
