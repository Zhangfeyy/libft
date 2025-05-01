/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzhang <fzhang@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 12:39:58 by fzhang            #+#    #+#             */
/*   Updated: 2025/04/23 12:40:03 by fzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*copy;

	copy = NULL;
	while (*s)
	{
		if (*s == c)
			copy = (char *)s;
		s++;
	}
	if (c == *s)
		copy = (char *)s;
	return (copy);
}
