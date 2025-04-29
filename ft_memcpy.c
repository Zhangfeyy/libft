/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzhang <fzhang@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 10:42:19 by fzhang            #+#    #+#             */
/*   Updated: 2025/04/23 10:42:21 by fzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
void *memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *copy_dest;
	unsigned const char *copy_src;
	size_t count;

	copy_dest = dest;
	copy_src = src;
	count = 0;
	while (count < n)
	{
		copy_dest[count] = copy_src[count];
		count++;
	}
	return (dest);
}