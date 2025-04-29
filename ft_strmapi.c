/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzhang <fzhang@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 16:31:08 by fzhang            #+#    #+#             */
/*   Updated: 2025/04/28 16:31:10 by fzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
unsigned int get_len(char const *s)
{
	unsigned int n;

	n = 0;
	while (s[n])
	{
		n++;
	}
	return (n);
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int n;
	unsigned int len;
	char *ns;

	ns = (char *)malloc((get_len(s) + 1) * sizeof(char));
	if (!ns)
		return (NULL);
	n = 0;
	while (&s)
	{
		ns[n] = f(n, s);
		n++;
		s++;
	}
	ns[n] = '\0';
	return (ns);
}