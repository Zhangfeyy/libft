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

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*copy;

	if (nmemb * size > 0 && (nmemb * size / size != nmemb))
		return (NULL);
	copy = (void *)malloc(nmemb * size);
	if (!copy)
		return (NULL);
	ft_bzero(copy, nmemb * size);
	return (copy);
}
// {
// 	char *temp = ft_calloc(2,1);
// 	int check;
// 	check = 1;
// 	for(int i = 0; i < 2; i++)
// 	{
// 		check = (int)temp[i];
// 	}
// }
