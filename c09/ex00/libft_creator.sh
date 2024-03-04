# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: akeldiya <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/13 22:02:26 by akeldiya          #+#    #+#              #
#    Updated: 2023/12/13 22:34:37 by akeldiya         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

rm -f libft.a
gcc -c -Wall -Wextra -Werror *.c
ar rc libft.a *.o
