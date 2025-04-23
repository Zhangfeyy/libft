/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzhang <fzhang@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 13:09:00 by fzhang            #+#    #+#             */
/*   Updated: 2025/04/23 13:09:02 by fzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void    *ft_calloc(size_t nmemb, size_t   size)
{
    unsigned    char *  copy;
    unsigned int count;

    copy = (void *)malloc(nmemb * size);
    if (!copy)
        return (NULL);
    count = 0;
    return (copy);
}

          
