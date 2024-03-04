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

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*ptr;
	int	i;

	if (min >= max)
	{
		ptr = NULL;
		*range = ptr;
		return (0);
	}
	ptr = (int *)malloc((max - min) * sizeof(int));
	if (!ptr)
		return (-1);
	i = 0;
	while (min < max)
	{
		ptr[i] = min;
		min++;
		i++;
	}
	*range = ptr;
	return (i);
}
/*
int	main(int argc, char **argv)
{
    if (argc == 3)
    {
        int *array;
        int size = ft_ultimate_range(&array, atoi(argv[1]), atoi(argv[2]));

        if (size == -1)
        {
            printf("Error\n");
        }
        else if (size == 0)
        {
            printf("min >= max\n");
        }
        else
        {
            for (int loop = 0; loop < size; loop++)
                printf("%d\n", array[loop]);
        }

        free(array);
    }
    return 0;
}*/
