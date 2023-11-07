/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: breezevna <breezevna@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 10:53:21 by breezevna         #+#    #+#             */
/*   Updated: 2023/11/07 13:32:47 by breezevna        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_substrings(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
			i++;
	}
	return (count);
}

static void	free_memory(char **substrings)
{
	size_t	i;

	i = 0;
	if (substrings)
	{
		while (substrings[i])
		{
			free(substrings[i]);
			i++;
		}
		free(substrings);
	}
}

static size_t	length_substring(const char *s, char c)
{
	size_t	len;

	len = 0;
	while (*s != '\0' && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

static char	**put_words(const char *s, char **substring, char c, int count_subs)
{
	int		index;
	size_t	len;

	index = 0;
	while (*s)
	{
		if (*s != c)
		{
			len = length_substring(s, c);
			substring[index] = (char *) malloc(sizeof(char) * len + 1);
			if (!substring[index])
			{
				free_memory(substring);
				return (NULL);
			}
			ft_strlcpy(substring[index], s, len + 1);
			s += len;
			index++;
		}
		else
			s++;
	}
	substring[count_subs] = NULL;
	return (substring);
}

char	**ft_split(char const *s, char c)
{
	int		count_subs;
	char	**substring;

	if (!s)
		return (NULL);
	count_subs = count_substrings(s, c);
	substring = (char **)malloc (sizeof (char *) * (count_subs + 1));
	if (!substring)
		return (NULL);
	substring = put_words(s, substring, c, count_subs);
	return (substring);
}

// int main(void)
// {
//     const char *input = "Hello,World,Goodbye";
//     char **tokens = ft_split(input, ',');

//     if (tokens) {
//         for (size_t i = 0; tokens[i]; i++) {
//             printf("Token %zu: %s\n", i, tokens[i]);
//         }
//         free_memory(tokens);
//     } else {
//         printf("Memory allocation failed.\n");
//     }

//     return 0;
// }
