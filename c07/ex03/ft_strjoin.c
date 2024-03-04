/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wbardzin <wbardzin@student.42warsaw.p      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 00:00:14 by wbardzin          #+#    #+#             */
/*   Updated: 2023/12/07 00:00:18 by wbardzin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	create_size(int size, char **strs, char *sep)
{
	int	len;
	int	x;
	int	y;
	int	z;

	y = 0;
	len = 0;
	x = 0;
	while (y < size)
	{
		z = 0;
		while (strs[y][z] != '\0')
			z++;
		len = len + z;
		y++;
	}
	while (sep[x] != '\0')
		x++;
	len = len + x * (size - 1) + 1;
	return (len);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	int		j;
	int		x;
	int		a;
	char	*full;

	full = malloc(sizeof(char) * create_size(size, strs, sep));
	if (!full)
		return (0);
	i = 0;
	a = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			full[a++] = strs[i][j++];
		x = 0;
		i++;
		while (sep[x] != '\0' && i < (size))
			full[a++] = sep[x++];
	}
	full[a] = '\0';
	return (full);
}
/*
int	main(int argc, char **argv)
{
	printf("%s\n", ft_strjoin(argc, argv, argv[0]));
	return (0);
}*/
