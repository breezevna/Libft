/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: breezevna <breezevna@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 11:43:29 by breezevna         #+#    #+#             */
/*   Updated: 2023/11/07 13:04:59 by breezevna        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;
	char	*newstr;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	len = ft_strlen(s1);
	while (len > 0 && ft_strchr(set, s1[len - 1]))
		len--;
	newstr = (char *)malloc(len + 1);
	if (!newstr)
		return (NULL);
	newstr[len] = '\0';
	while (len--)
		newstr[len] = s1[len];
	return (newstr);
}
// int main(void)
// {
//     char input[] = "   Hello, World!   ";
//     char set[] = " ,!";
//     char *trimmed = ft_strtrim(input, set);

//     if (trimmed == NULL) {
//         printf("Memory allocation failed. Exiting...\n");
//         return 1;
//     }
//     printf("Original: '%s'\n", input);
//     printf("Trimmed:  '%s'\n", trimmed);
//     free(trimmed);

//     return 0;
// }
