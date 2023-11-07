/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: breezevna <breezevna@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 16:48:15 by breezevna         #+#    #+#             */
/*   Updated: 2023/11/07 14:32:06 by breezevna        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long int	num_len(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		len++;
		n = n / 10;
	}
	return (len);
}

static char	*to_char(char *s, unsigned int n, long int length)
{
	while (n > 0)
	{
		length--;
		s[length] = '0' + (n % 10);
		n = n / 10;
	}
	return (s);
}

static char	put_sign(char sign, int n)
{
	if (n == 0)
		return ('0');
	if (sign == '-')
		return ('-');
	return ('\0');
}

char	*ft_itoa(int n)
{
	int					len;
	char				sign;
	unsigned int		num;
	char				*char_num;

	sign = '\0';
	len = num_len(n);
	if (n < 0)
	{
		sign = '-';
		num = n * -1;
	}
	else
		num = n;
	char_num = (char *)malloc(sizeof(char) * (len + 1));
	if (!char_num)
		return (NULL);
	char_num[len] = '\0';
	char_num[0] = put_sign(sign, n);
	char_num = to_char(char_num, num, len);
	return (char_num);
}

// #include <stdio.h>
// int main(void)
// {
// 	int num = -2147483648;
// 	int num1 = 2147483647;
// 	printf("%s\n", ft_itoa(num));
// 	printf("%ld\n", num_len(num));
// 	printf("%ld\n", num_len(num1));
// }
