/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 19:42:55 by meourea           #+#    #+#             */
/*   Updated: 2021/05/07 19:42:58 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned int	n;
	char			*ptr;

	n = count * size;
	ptr = malloc(n);
	if (ptr == NULL)
		return (NULL);
	ft_memset(ptr, '\0', n);
	return (ptr);
}
