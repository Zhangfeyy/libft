/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzhang <fzhang@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 13:09:00 by fzhang            #+#    #+#             */
/*   Updated: 2025/04/23 13:09:02 by fzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
// If nmemb or size is 0, then calloc() returns a unique pointer value 
//that can be successfully passed to free().
void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*copy;

	if(nmemb * size > 0 && (nmemb * size /size != nmemb)) // tp handle overflow and when is 0 should return a freeable pointer
		return (NULL);
	copy = (void *)malloc(nmemb * size);
	if (!copy)
		return (NULL);
	ft_bzero(copy, nmemb * size);
	return (copy);
}
