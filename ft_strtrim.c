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
//only remove the set chars from the end
int check_set(char c, char const *set)
{
	unsigned int i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

unsigned int check_end(char const *s1, char const *set, int i)
{
	unsigned int j;
	unsigned int k;

	j = i;
	k = 0;
	while (s1[j])
	{
		if (!check_set(s1[j], set))
			k++;
		j++;
	}
	return (k);
}

unsigned int get_len(char const *s1, char const *set)
{
	unsigned int i;
	unsigned int len;

	i = 0;
	len = 0;
	while (s1[i] && check_set(s1[i], set))
		i++;
	while (s1[i] && check_end(s1, set, i))
		len++;
	return (len);
}

char *ft_strtrim(char const *s1, char const *set)
{
	char *trimmed;
	unsigned int i;
	unsigned int j;

	trimmed = (char *)malloc((get_len(s1, set) + 1) * sizeof(char));
	if (!trimmed)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[j] && check_set(s1[j], set))
		j++;
	while (s1[j] && check_end(s1, set, j))
	{
		trimmed[i] = s1[j];
		i++;
		j++;
	}
	trimmed[i] = '\0';
	return (trimmed);
}