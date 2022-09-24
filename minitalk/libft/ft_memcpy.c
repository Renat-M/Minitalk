/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 17:33:17 by meourea           #+#    #+#             */
/*   Updated: 2021/05/07 17:33:20 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	if (dst == 0 && src == 0)
		return (NULL);
	ptr1 = (unsigned char *)dst;
	ptr2 = (unsigned char *)src;
	while (n-- > 0)
		*ptr1++ = *ptr2++;
	return (dst);
}
