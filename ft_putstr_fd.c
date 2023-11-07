/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: breezevna <breezevna@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 17:24:43 by breezevna         #+#    #+#             */
/*   Updated: 2023/11/06 18:38:52 by breezevna        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}

// int main(void)
// {
// 	char s[] = "Hello, world!";
// 	int fd = 1; //stdout

// 	ft_putstr_fd(s, fd);

// }
