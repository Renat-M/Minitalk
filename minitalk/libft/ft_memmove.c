/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 11:57:49 by meourea           #+#    #+#             */
/*   Updated: 2021/05/07 11:58:08 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)dst;
	ptr2 = (unsigned char *)src;
	if (ptr2 < ptr1)
	{
		ptr1 = ptr1 + len - 1;
		ptr2 = ptr2 + len - 1;
		while (len-- > 0)
			*ptr1-- = *ptr2--;
	}
	else if (ptr2 > ptr1)
	{
		while (len-- > 0)
			*ptr1++ = *ptr2++;
	}
	return (dst);
}
