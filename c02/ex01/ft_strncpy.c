/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeldiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 14:42:31 by akeldiya          #+#    #+#             */
/*   Updated: 2023/11/29 14:43:51 by akeldiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;
	unsigned int	isitend;

	i = 0;
	isitend = 0;
	while (i < n)
	{
		if (src[i] == '\0' && isitend == 0)
		{
			isitend++;
		}
		if (isitend == 0)
		{
			dest[i] = src[i];
		}
		else
		{
			dest[i] = '\0';
		}
		i++;
	}
	return (dest);
}
/*
int main()
{
    char src[] = "Hello World";
    char dest[20] = "";
    unsigned int n = 20;
    ft_strncpy(dest, src, n);
    printf("%s", dest);
    return (0);
}*/
