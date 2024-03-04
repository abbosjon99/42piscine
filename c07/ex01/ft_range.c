/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeldiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 21:15:03 by akeldiya          #+#    #+#             */
/*   Updated: 2023/12/06 21:15:06 by akeldiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*ptr;
	int	i;

	if (min >= max)
		return (NULL);
	ptr = (int *)malloc((max - min) * sizeof(int));
	if (!ptr)
		return (NULL);
	i = 0;
	while (min < max)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	return (ptr);
}
/*
int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		int	*array = ft_range(atoi(argv[1]), atoi(argv[2]));

   		for(int loop = 0; loop < (atoi(argv[2]) - atoi(argv[1])); loop++)
			printf("%d\n", array[loop]);
	}
	return (0);
}*/
