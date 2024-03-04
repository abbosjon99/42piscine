/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeldiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 20:07:36 by akeldiya          #+#    #+#             */
/*   Updated: 2023/12/05 20:07:38 by akeldiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	basecheck(char *base)
{
	int	i;
	int	j;
	int	c;

	i = 0;
	while (base[i])
	{
		c = base[i];
		j = i + 1;
		if (!base[1])
			return (1);
		if (c == '-' || c == '+' || c == 32 || (8 < c && c < 14))
			return (1);
		while (base[j])
		{
			if (c == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	digitorder(char c, char *base)
{
	int	i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
		{
			return (i);
		}
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	ispos;
	int	val;
	int	digit;

	ispos = 1;
	val = 0;
	if (basecheck(base))
		return (0);
	while (*str == 32 || (8 < *str && *str < 14))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			ispos *= -1;
		str++;
	}
	while (*str)
	{
		digit = digitorder(*str, base);
		if (digit == -1)
			break ;
		val = val * ft_strlen(base) + digit;
		str++;
	}
	return (val * ispos);
}
/*
int	main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", ft_atoi_base(argv[1], argv[2]));
	}
	return (0);
}*/
