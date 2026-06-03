/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntshuma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 15:04:21 by ntshuma           #+#    #+#             */
/*   Updated: 2026/06/03 15:04:24 by ntshuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void *ft_memchr(const void *s, int c, size_t n)
{
    size_t i;

    i = 0;
    while (i < n)
    {
        if (((unsigned char *)s)[i] == (unsigned char)c)
            return ((void *)(s + i));
        i++;
    }
    return (NULL);
}
/*int main()
{
    char str[] = "Hello, World!";
    char *result = ft_memchr(str, 'o', sizeof(str));
    if (result)
        printf("Character found at position: %ld\n", result - str);
    else
        printf("Character not found.\n");
    return 0;
}*/