/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzhang <fzhang@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 09:53:08 by fzhang            #+#    #+#             */
/*   Updated: 2025/04/23 09:53:09 by fzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_isalpha(int	c) {
	if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}

int	ft_isdigit(int	c) {
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int	ft_isalnum(int	c) {
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
