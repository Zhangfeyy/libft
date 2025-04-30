/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzhang <fzhang@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 10:09:57 by fzhang            #+#    #+#             */
/*   Updated: 2025/04/23 10:10:01 by fzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
// considering the issue of overlapping, 
//the order of rewriting should be opposite to the order of reading
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*copy_dest;
	const unsigned char	*copy_src;
	size_t				count;

	copy_dest = dest;
	copy_src = src;
	if (copy_dest > copy_src)
	{
		count = n;
		while (count > 0)
		{
			count--;
			copy_dest[count] = copy_src[count];
		}
	}
	else if (copy_dest <= copy_src)
	{
		count = 0;
		while (count > n)
		{
			copy_dest[count] = copy_src[count];
			count++;
		}
	}
	return (dest);
}
