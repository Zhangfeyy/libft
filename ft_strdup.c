/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzhang <fzhang@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 13:09:15 by fzhang            #+#    #+#             */
/*   Updated: 2025/04/23 13:09:17 by fzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
char *ft_strndup(const char *s, size_t n)
{
	int count;
	char *copy;

	count = 0;
	while (s[count])
		count++;
	if (count > n)
		count = n;
	copy = (char *)malloc((count + 1) * sizeof(char));
	if (!copy)
		return (NULL);
	count = 0;
	while (count < n && s[count])
	{
		copy[count] = s[count];
		count++;
	}
	copy[count] = '\0';
	return (copy);
}