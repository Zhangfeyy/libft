/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzhang <fzhang@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 19:36:01 by fzhang            #+#    #+#             */
/*   Updated: 2025/04/23 19:36:03 by fzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
unsigned int get_len(char const *s)
{
	unsigned int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char *ft_strjoin(char const *s1, char const *s2)
{
	unsigned int i;
	unsigned int j;
	char *join;

	i = get_len(s1);
	j = get_len(s2);
	join = (char *)malloc((i + j + 1) * sizeof(char));
	if (!join)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		join[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		join[i + j - 1] = s2[j];
		j++;
	}
	join[i + j] = '\0';
	return (join);
}