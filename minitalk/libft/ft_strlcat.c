/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/04 11:46:00 by meourea           #+#    #+#             */
/*   Updated: 2021/05/04 11:46:04 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dstl;
	size_t	srcl;

	i = 0;
	dstl = ft_strlen(dst);
	srcl = ft_strlen(src);
	if (dstsize < dstl || dstsize == 0)
		return (dstsize + srcl);
	while (src[i] && dstl + i < dstsize - 1)
	{
		dst[dstl + i] = src[i];
		i++;
	}
	dst[dstl + i] = '\0';
	return (dstl + srcl);
}
