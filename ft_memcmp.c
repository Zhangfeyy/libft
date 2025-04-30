/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzhang <fzhang@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 13:08:11 by fzhang            #+#    #+#             */
/*   Updated: 2025/04/23 13:08:13 by fzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*copy1;
	unsigned char	*copy2;
	int				count;

	copy1 = s1;
	copy2 = s2;
	count = 0;
	while (count < n && (copy1[count] | copy2[count]))
	{
		if (copy1[count] != copy2[count])
			return (copy1[count] - copy2[count]);
		count++;
	}
	return (count);
}
