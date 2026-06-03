/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntshuma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 15:41:04 by ntshuma           #+#    #+#             */
/*   Updated: 2026/05/28 16:54:48 by ntshuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

// void *ft_memset(void *s, int c, size_t n);
void ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}

/*
int	main()
{
	char str[]= "hello";
	ft_bzero(str, 5);
	printf("%s\n", str);
}
*/
