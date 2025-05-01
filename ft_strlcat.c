/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzhang <fzhang@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 12:09:15 by fzhang            #+#    #+#             */
/*   Updated: 2025/04/23 12:09:17 by fzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(dst);
	while ((i < (size - j - 1)) && src[i])
	{
		dst[j + i] = src[i];
		i++;
	}
	if (j + i < size)
		dst[j + i] = '\0';
	return (j + ft_strlen((char *)src));
}
