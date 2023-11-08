/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: breezevna <breezevna@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 18:42:54 by breezevna         #+#    #+#             */
/*   Updated: 2023/11/08 15:15:41 by breezevna        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	max;

	if (nmemb == 0 || size == 0)
	{
		ptr = malloc(0);
		return (ptr);
	}
	max = nmemb * size;
	if (max / nmemb != size)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, size * nmemb);
	return (ptr);
}

// #include <stdio.h>
// int main(void)
// {
// 	int* ptr;
//     int n, i;
//     n = 0;
//     printf("Enter number of elements: %d\n", n);

//     ptr = (int*)ft_calloc(n, 5);
//     if (ptr == NULL) {
//         printf("Memory not allocated.\n");
//         exit(0);
//     }
//     else {
//         printf("Memory successfully allocated using calloc.\n");
//         for (i = 0; i < n; ++i) {
//             ptr[i] = i + 1;
//         }
//         printf("The elements of the array are: ");
//         for (i = 0; i < n; ++i) {
//             printf("%d, ", ptr[i]);
//         }
//     }
// 	// size_t count = 0;
//     // size_t size = 5;

//     // void *ptr1 = ft_calloc(count, size);

//     // if (ptr1 == NULL) {
//     //     printf("ft_calloc returned a NULL pointer, which is expected for a zero-sized allocation.\n");
//     // } else {
//     //     printf("ft_calloc returned a non-NULL pointer, which should not happen for a zero-sized allocation.\n");
//     // }

//     // return 0;
// }
