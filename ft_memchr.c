/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: breezevna <breezevna@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:16:55 by breezevna         #+#    #+#             */
/*   Updated: 2023/11/06 18:33:21 by breezevna        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned const char *)s + i) == (unsigned const char) c)
			return ((void *)(unsigned const char *)s + i);
		i++;
	}
	return (NULL);
}
// int main(void)
// {
// 	char data[] = "This is a test string.";
//     char searchChar = 'i';

//     void *result = ft_memchr(data, searchChar, 23);

// 	if (result)
// 	{
// 		printf("'%c' found at position: %ld\n",
// 			searchChar, (char *)result - data);
// 	}
// 	else
// 	{
//         printf("'%c' not found in the string.\n", searchChar);
//     }
//     return 0;
// }
