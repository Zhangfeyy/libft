/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 12:33:01 by fzhang            #+#    #+#             */
/*   Updated: 2025/05/04 14:03:16 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if ((char)*s == (unsigned char)c) //casting!
			return ((char *)s);
		s++;
	}
	if ((unsigned char)c == 0)
		return ((char *)s);
	return (NULL); 
	//E- if c is not founded, return a NULL pointer
}
// NOTE
// char can hold the value 0 — it represents the null character ('\0')
// int main ()
// {
// 	const char *s = "test";
// 	int check = (ft_strchr(s, 0) == (s + 4));
// }