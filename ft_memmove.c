/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: breezevna <breezevna@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:17:41 by breezevna         #+#    #+#             */
/*   Updated: 2023/11/07 15:25:20 by breezevna        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst < src)
		ft_memcpy(dst, src, len);
	else
		while (len--)
			*(unsigned char *)(dst + len) = *(unsigned char *)(src + len);
	return (dst);
}
// int main(void)
// {
//     char source[] = "This is the source string.";
//     char destination[50];
//     ft_memmove(destination, source, strlen(source) + 1);
//     printf("Copied Data: %s\n", destination);
// 	//Overlap example:
// 	// char data[] = "This is a test string.";
// 	// char* source = data; // Points to the beginning
// 	// char* destination = data + 5; // Points to "is"
//     // printf("Original Data: %s\n", data);
//     // ft_memmove(destination, source, strlen(source) + 1);

//     // printf("After Memmove: %s\n", data);

//     return 0;
// }
