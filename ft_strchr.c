/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzhang <fzhang@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 12:33:01 by fzhang            #+#    #+#             */
/*   Updated: 2025/04/23 12:33:03 by fzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
// char can hold the value 0 — it represents the null character ('\0')
char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if ((unsigned char)*s == (unsigned char)c) //casting!
			return ((unsigned char *)s);
		s++;
	}
	if (c == 0)
		return ((unsigned char *)s);
	return (NULL); 
	//E- if c is not founded, return a NULL pointer
}

// int main ()
// {
// 	ft_strchr(s, 0) == s + strlen(s);
// }