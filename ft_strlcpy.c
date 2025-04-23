/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzhang <fzhang@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 11:44:50 by fzhang            #+#    #+#             */
/*   Updated: 2025/04/23 11:44:52 by fzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>

unsigned int    strlcpy(char *dst, const char *src, size_t size) {
    unsigned int    i;
    unsigned int    j;

    i = 0;
    j = 0;
    while(src[j] != '\0')
    {
        j++;
    }
    while ((i < size) && !src[i])
    {
        dst[i] = src[i];
        i++;
    }
    while (i < size)
    {
        dst[i] = '\0';
        i++;
    }
    return (j);
}

