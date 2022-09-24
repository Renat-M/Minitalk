/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: meourea <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/07 20:10:53 by meourea           #+#    #+#             */
/*   Updated: 2021/05/07 20:10:55 by meourea          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	len;

	len = ft_strlen(s1);
	ptr = (char *)malloc(len + 1);
	if (ptr == NULL)
		return (NULL);
	ft_memcpy(ptr, s1, len);
	ptr[len] = '\0';
	return (ptr);
}
