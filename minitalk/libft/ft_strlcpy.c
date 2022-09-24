/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/01 14:46:25 by meourea           #+#    #+#             */
/*   Updated: 2021/05/01 15:29:18 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	srcl;

	if (dst == NULL || src == NULL)
		return (0);
	i = 0;
	srcl = ft_strlen(src);
	if (dstsize == 0)
		return (srcl);
	while (dstsize != 1 && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
		dstsize--;
	}
	if (src[i] == '\0' || dstsize == 1)
		dst[i] = '\0';
	return (srcl);
}
