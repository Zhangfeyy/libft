/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzhang <fzhang@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 12:45:42 by fzhang            #+#    #+#             */
/*   Updated: 2025/04/23 12:45:44 by fzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
int	strncmp(const char	*s1, const char	*s2, size_t	n) {
	size_t	i;

	i = 0;
	while(i < n)
	{
		if(s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

