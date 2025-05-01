/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzhang <fzhang@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 12:55:25 by fzhang            #+#    #+#             */
/*   Updated: 2025/04/23 12:55:27 by fzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//Type conversion is needed
void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*copy;
	size_t			i;

	copy = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*copy == c)
			return (copy);
		copy++;
		i++;
	}
	return (NULL);
}
