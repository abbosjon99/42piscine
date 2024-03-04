/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeldiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 16:23:24 by akeldiya          #+#    #+#             */
/*   Updated: 2023/12/11 16:23:26 by akeldiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*g_result;
int		g_iter;

int	ft_strlen(char *str);

int	basecheck(char *base);

int	digitorder(char c, char *base);

int	ft_atoi_base(char *str, char *base);

void	ft_convert_second(int nbr, char *base_to)
{
	unsigned int	blen;
	unsigned int	nb;

	blen = (unsigned int)ft_strlen(base_to);
	if (nbr < 0)
	{
		nb = (unsigned int)-nbr;
		g_result[g_iter++] = '-';
	}
	else
		nb = (unsigned int)nbr;
	if (nb > blen - 1)
	{
		ft_convert_second(nb / blen, base_to);
	}
	g_result[g_iter++] = (base_to[nb % blen]);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		len;
	int		temp;
	int		temp2;

	len = 0;
	g_iter = ft_strlen(base_to);
	temp = ft_atoi_base(nbr, base_from);
	temp2 = temp;
	if (temp < 0)
		len++;
	while (temp != 0)
	{
		temp /= g_iter;
		len++;
	}
	g_result = (char *)malloc(sizeof(char) * (len + 1));
	if (basecheck(base_from) || basecheck(base_to) || !g_result)
		return (NULL);
	g_result[len] = '\0';
	g_iter = 0;
	ft_convert_second(temp2, base_to);
	return (g_result);
}
/*
int	main(int argc, char *argv[])
{
	if (argc == 4)
	{
		printf("%s\n", ft_convert_base(argv[1], argv[2], argv[3]));
	}
	return (0);
}*/
