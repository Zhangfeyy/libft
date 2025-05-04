/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 12:55:25 by fzhang            #+#    #+#             */
/*   Updated: 2025/05/04 19:21:04 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*copy;
	size_t			i;

	copy = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (*copy == (unsigned char)c)
			return (copy);
		copy++;
		i++;
	}
	return (NULL);
}
// NOTE
// Type conversion is needed
// unsigned char can only handle the char up to 255, the beyond number will be wrapped.
// int main ()
// {
// 	char s[] = {0, 1, 2 ,3 ,4 ,5};
// 	int check =  ft_memchr(s, 2 + 256, 3) == s + 2;
// 	check--;
// }