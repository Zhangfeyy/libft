/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzhang <fzhang@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 19:54:26 by fzhang            #+#    #+#             */
/*   Updated: 2025/04/23 19:54:30 by fzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
//iterate a string from the end to the start with a condition control!
//it does not have a '/0' buffer
// size_t ft_strlen(const char * s)
// {
// 	size_t count;

// 	count = 0;
// 	while(s[count])
// 		count++;
// 	return count;
// }

// void	*ft_memset(void *s, int c, size_t n)
// {
// 	size_t			count;
// 	unsigned char	*copy;

// 	copy = s;
// 	count = 0;
// 	while (count < n)
// 	{
// 		copy[count] = c;
// 		count++;
// 	}
// 	return (s);
// }

// void	ft_bzero(void *s, size_t n)
// {
// 	(ft_memset(s, '\0', n));
// }

int	check_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

size_t	get_start(char const *s1, char const *set)
{
	size_t	start_count;

	start_count = 0;
	while (check_set(s1[start_count], set))
		start_count++;
	return (start_count);
}

size_t	get_end(char const *s1, char const *set)
{
	size_t	len;
	size_t	end_count;

	len = ft_strlen(s1);
	end_count = 0;
	while (end_count < len && check_set(s1[len - end_count - 1], set))
		end_count++;
	return (end_count);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	i_s;
	size_t	i_e;
	size_t	i;
	size_t	length;

	i_s = get_start(s1, set);
	i_e = get_end(s1, set);
	if (i_s == ft_strlen(s1))
		length = 1;
	else
		length = ft_strlen((char *)s1) -i_s - i_e + 1;
	trimmed = (char *)malloc(length * sizeof(char));
	if (!trimmed)
		return (NULL);
	ft_bzero(trimmed, length);
	i = 0;
	while (i < length - 1)
	{
		trimmed[i] = s1[i + i_s];
		i++;
	}
	return (trimmed);
}

// int main()
// {
// 	char *s = ft_strtrim("   xxxtest   xxx", " x");
// 	size_t length = ft_strlen(s);
// }
