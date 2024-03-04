/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeldiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 15:15:25 by akeldiya          #+#    #+#             */
/*   Updated: 2023/12/06 15:15:26 by akeldiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, &str[0], 1);
		str++;
	}
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	value;

	i = 0;
	value = 0;
	while (s1[i] || s2[i])
	{
		value = s1[i] - s2[i];
		if (s1[i] != s2[i])
			return (value);
		i++;
	}
	return (value);
}

void	ft_sort_str_tab(char **tab, int size)
{
	int	i;
	int	isswapped;

	isswapped = 1;
	while (isswapped > 0)
	{
		i = 0;
		isswapped = 0;
		while (i < size - 1)
		{
			if (ft_strcmp(tab[i + 1], tab[i + 2]) > 0)
			{
				tab[0] = tab[i + 1];
				tab[i + 1] = tab[i + 2];
				tab[i + 2] = tab[0];
				isswapped++;
			}
			i++;
		}
	}
}

int	main(int argc, char **argv)
{
	int	temp;

	temp = 1;
	if (argc > 1)
		ft_sort_str_tab(argv, argc - 1);
	while (temp < argc)
	{
		ft_putstr(argv[temp]);
		ft_putstr("\n");
		temp++;
	}
	return (0);
}
