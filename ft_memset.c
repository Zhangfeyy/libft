/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzhang <fzhang@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 10:15:58 by fzhang            #+#    #+#             */
/*   Updated: 2025/04/23 10:16:06 by fzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

// void *: generic pointer, not pointing to any specific data type.
// Therefore void* cannot be dereferenced and indexed!
void	*memset(void	*s, int	c, size_t	n) {
	// cast to unsigned char* to access memory 'byte by byte'
	unsigned char	*copy;
	size_t	count;

	copy = s;
	count = 0;
	while (count < n)
	{
		copy[count] = c;
		count++;
	}
	return s;
}
