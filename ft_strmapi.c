/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: breezevna <breezevna@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 08:59:50 by breezevna         #+#    #+#             */
/*   Updated: 2023/11/07 13:36:49 by breezevna        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	len;
	unsigned int	i;

	if (!s)
		return (NULL);
	i = 0;
	len = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	while (i < len)
	{
		str[i] = (*f)(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

// static char	my_func(char str)
// {
// 	if (str >= 'a' && str <= 'z')
// 	{
// 		return (str - ('a' - 'A'));
// 	}
// 	return (str);
// }
// int main()
// {
// 	char str[] = "Hello, world!";
// 	char *mappedString = ft_strmapi(str, my_func);
// 	printf("Original: '%s'\n", str);
//     printf("Mapped:   '%s'\n", mappedString);
// }
