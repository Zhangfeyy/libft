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
unsigned int ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;

	i = 0;
	j = 0;
	while (!dst[j])
	{
		j++;
	}
	while ((i < size) && (!src[i]))
	{
		dst[j] = src[i];
		j++;
		i++;
	}
	k = j;
	while (i < size)
	{
		dst[j] = '\0';
		j++;
		i++;
	}
	return (k);
}