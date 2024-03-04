/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeldiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 19:40:30 by akeldiya          #+#    #+#             */
/*   Updated: 2023/12/12 19:40:31 by akeldiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dst;

	dst = malloc(ft_strlen (src) + 1);
	if (dst == NULL)
		return (0);
	ft_strcpy(dst, src);
	return (dst);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*array;
	int			i;

	array = (struct s_stock_str *)malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!array)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		array[i].size = ft_strlen(av[i]);
		array[i].str = av[i];
		array[i].copy = ft_strdup(av[i]);
		if (array[i].copy == NULL)
			return (NULL);
		i++;
	}
	array[i].copy = 0;
	return (array);
}
/*
int	main(int argc, char **argv)
{
	int				i;
	struct s_stock_str	*array;

	i = 0;
	array =	ft_strs_to_tab(argc, argv);
	while (i < argc + 1)
	{
		printf("%s\n%s\n%d\n", array[i].str, array[i].copy, array[i].size);
		i++;
	}
	return (0);
}*/
