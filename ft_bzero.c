/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzhang <fzhang@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 10:38:22 by fzhang            #+#    #+#             */
/*   Updated: 2025/04/23 10:38:24 by fzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <strings.h>

void	*memset(void	*s, int	c, size_t	n) {
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

void    bzero(void  *s, size_t  n) {
    return (memset(s, '\0', n));
}
