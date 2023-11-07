/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: breezevna <breezevna@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 17:41:58 by breezevna         #+#    #+#             */
/*   Updated: 2023/11/06 18:35:11 by breezevna        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*((unsigned const char *)s1 + i)
			!= *((unsigned const char *)s2 + i))
		{
			return (*((unsigned const char *)s1 + i)
				- *((unsigned const char *)s2 + i));
		}
		i++;
	}
	return (0);
}

// int main (void)
// {
// 	char str[] = "Bar";
// 	char str1[] = "Bar";

// 	printf("%d", ft_memcmp(str, str1,3));
// }
