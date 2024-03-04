/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeldiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 13:59:19 by akeldiya          #+#    #+#             */
/*   Updated: 2023/12/05 13:59:22 by akeldiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && i < size - 1)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	if (src[j])
	{
		while (src[j])
		{
			j++;
			i++;
		}
	}
	return (i);
}
/*
int main() {
     char haystack[15] = "This is ";
     char needle[] = "a potentially long string";

    int result = ft_strlcat(haystack, needle, 15);


        printf("String: %s\n", haystack);

        printf("%d\n", result);


    return 0;
}*/
