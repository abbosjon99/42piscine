/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeldiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 15:23:49 by akeldiya          #+#    #+#             */
/*   Updated: 2023/11/29 15:23:52 by akeldiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	lenth;

	i = 0;
	lenth = 0;
	while (src[lenth])
		lenth++;
	if (size < 1)
		return (lenth);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (lenth);
}
/*
int main()
{
    char src[] = "Hello World";
    char dest[3] = "hi";
    unsigned int n = 1;
    unsigned int lenth = 0;
    
   lenth = ft_strlcpy(dest, src, n);
     printf("Copied '%s' into '%s', length %d\n",
            src,
            dest,
            lenth
          );
    return (0);
}*/
