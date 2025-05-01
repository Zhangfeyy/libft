/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fzhang <fzhang@student.42vienna.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 13:08:44 by fzhang            #+#    #+#             */
/*   Updated: 2025/04/23 13:08:46 by fzhang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	put_int(const char *src, int i)
{
	return (src[i] - '0');
}

int	ft_isspace(char c)
{
	if (c == '\f' || c == '\n' || c == '\r')
		return (1);
	if (c == '\t' || c == '\v' || c == ' ')
		return (1);
	return (0);
}

int	write_sign(int count)
{
	if (count % 2 == 1)
		return (-1);
	return (1);
}

int	multi(const char *str, int i)
{
	if (!(str[i + 1] >= '0' && str[i + 1] <= '9'))
		return (1);
	return (10 * multi(str, i + 1));
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	count;
	int	nbr;

	i = 0;
	count = 0;
	nbr = 0;
	while (ft_isspace(nptr[i]))
	{
		i++;
	}
	while (nptr[i] == '-' || nptr[i] == '+')
	{
		if (nptr[i] == '-')
			count++;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nbr += multi(nptr, i) * put_int(nptr, i);
		i++;
	}
	return (nbr * write_sign(count));
}
/*
int	main()
{
	int test = ft_atoi("    -123456");
}
*/
