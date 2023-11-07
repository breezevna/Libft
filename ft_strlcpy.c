/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: breezevna <breezevna@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 16:17:14 by breezevna         #+#    #+#             */
/*   Updated: 2023/10/24 13:40:18 by breezevna        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
		while (src[i] != '\0' && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

// #include <stdio.h>
// int main(void)
// {
// 	char dest[10];
//     const char *source = "Hello, World!";

//     size_t result = ft_strlcpy(dest, source, sizeof(dest));

//     printf("Copied: %s\n", dest);
//     printf("Length: %zu\n", result);

//     return 0;
// }
