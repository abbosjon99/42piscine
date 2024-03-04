/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akeldiya <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 13:50:08 by akeldiya          #+#    #+#             */
/*   Updated: 2023/12/05 13:50:12 by akeldiya         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*point_dest;

	point_dest = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (point_dest);
}
/*
int main(void)
{
    char  dest[8] = "HE ";
    char  src[] = "hfhi";
    
    printf("%s\n", ft_strcat(dest, src));
    //printf("%s", strcat(dest, src));
    printf("\n%s", dest);
}*/
