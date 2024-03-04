/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeldiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 17:57:40 by akeldiya          #+#    #+#             */
/*   Updated: 2023/12/05 17:57:43 by akeldiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdlib.h>

void	ft_putchar(char digit)
{
	write(1, &digit, 1);
}

unsigned int	ft_strlen(char *str)
{
	unsigned int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

unsigned int	notallowed(char *base)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (base[i])
	{
		j = i + 1;
		if (base[i] == '-' || base[i] == '+')
			return (0);
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	blen;
	unsigned int	nb;

	blen = ft_strlen(base);
	if (blen > 1 && notallowed(base))
	{
		if (nbr < 0)
		{
			nb = -nbr;
			ft_putchar('-');
		}
		else
			nb = nbr;
		if (nb > blen - 1)
		{
			ft_putnbr_base(nb / blen, base);
		}
		ft_putchar(base[nb % blen]);
	}
}
/*
int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		ft_putnbr_base(atoi(argv[1]), argv[2]);
	}
	return (0);
}*/
