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
//unsigned char can only handle the char up to 255, the beyond number will be wrapped.
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

// int main ()
// {
// 	char s[] = {0, 1, 2 ,3 ,4 ,5};
// 	int check =  ft_memchr(s, 2 + 256, 3) == s + 2;
// 	check--;
// }