/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzhang <fzhang@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 12:09:15 by fzhang            #+#    #+#             */
/*   Updated: 2025/04/23 12:09:17 by fzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
// size_t	ft_strlen(const char *str)
// {
// 	int	len;

// 	len = 0;
// 	while (*str != '\0')
// 	{
// 		len++;
// 		str++;
// 	}
// 	return (len);
// }
// strlcat still cau=calculates the ideal size of dst.
// size_t cannot be negative!
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(dst);
	if(size <= j)
		return(size + ft_strlen((char *)src)); // size actually means the expectation for dst size!
	while ((i < size - j - 1) && src[i])
	{
		dst[j + i] = src[i];
		i++;
	}
	if (j + i < size)
		dst[j + i] = '\0';
	return (j + ft_strlen((char *)src));
}

// int main()
// {
// 	char dest[30]; memset(dest, 0, 30);
// 	char * src = (char *)"AAAAAAAAA";
// 	dest[0] = 'B';
// 	/* 1 */ int check1 = (ft_strlcat(dest, src, 0) == strlen(src));
// 		int check2 =  !strcmp(dest, "B");
// 	/* 2 */ int check3 = ft_strlcat(dest, src, 1) == 10 && !strcmp(dest, "B");
// }