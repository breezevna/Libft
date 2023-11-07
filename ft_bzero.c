/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: breezevna <breezevna@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 15:50:43 by breezevna         #+#    #+#             */
/*   Updated: 2023/11/06 17:53:38 by breezevna        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*str;

	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = 0;
		i++;
	}
}

// #include <stdio.h>
// int main() {
//     char buffer[10];

//     ft_bzero(buffer, sizeof(buffer));
//     for (int i = 0; i < sizeof(buffer); i++) {
//         printf("%d ", buffer[i]);
//     }
//     return 0;
// }
