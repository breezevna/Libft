/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: breezevna <breezevna@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/24 15:21:35 by breezevna         #+#    #+#             */
/*   Updated: 2023/11/07 14:51:11 by breezevna        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int			i;
	const char	*str;

	i = 0;
	str = s;
	while (str[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (str[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	if (c == '\0')
		return ((char *)(s + i));
	return (NULL);
}

// int main(void)
// {
// 	char *s = "Hello, world! wewe. oplss";
// 	char c = 'w';

// 	printf("%s", ft_strrchr(s, c));
// }
