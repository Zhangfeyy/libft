/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzhang <fzhang@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 13:08:30 by fzhang            #+#    #+#             */
/*   Updated: 2025/04/23 13:08:31 by fzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
char *strnstr(const char *big, const char *little, size_t len)
{
	int inner_count;
	int outer_count;
	int swi;

	//edge cases
	if(!*little)
		return (big);
	
	while (*big)
	{
		inner_count = 0;
		if (*big == little[inner_count] || little[inner_count])
		{
			swi = 1;
			while (little[inner_count] && (inner_count < len) && swi)
			{
				if (*big != little[inner_count])
					swi = 0;
				inner_count++;
			}
		}
		if (swi)
			return (big);
		big++;
	}
	return (NULL);
}