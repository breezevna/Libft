/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: breezevna <breezevna@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:05:57 by breezevna         #+#    #+#             */
/*   Updated: 2023/11/07 13:38:27 by breezevna        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		(*f)(i, &s[i]);
		i++;
	}
	s[i] = '\0';
}

// static void	f_tolower(char *character)
// {
// 	if (*character >= 'A' && *character <= 'Z')
// 		*character += 'a' - 'A';
// }
// int main(void)
// {
// 	char s[] = "Hello, world!";
// 	printf("This is an originial string: %s\n", s);

// 	ft_striteri(s, f_tolower);
// 	printf("This is a modified string: %s\n", s);
// }
