/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: breezevna <breezevna@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:42:48 by breezevna         #+#    #+#             */
/*   Updated: 2023/11/06 18:36:46 by breezevna        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dst == NULL && src == NULL)
		return (0);
	while (i < n)
	{
		*((unsigned char *)dst + i) = *((unsigned char *)src + i);
		i++;
	}
	return (dst);
}

// int main(void)
// {
//     int source[] = {1, 2, 3, 4, 5};
//     int destination[5];
//     size_t numBytes = sizeof(source);
//     ft_memcpy(destination, source, numBytes);
//     for (int i = 0; i < 5; i++) {
//         printf("destination[%d] = %d\n", i, destination[i]);
//     }
// 	char data[] = "Hello, World!";
//     ft_memcpy(data + 6, data, 6);
//     printf("Modified Data: %s\n", data);
// }
