/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntshuma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 15:04:44 by ntshuma           #+#    #+#             */
/*   Updated: 2026/06/03 15:04:48 by ntshuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;

    i = 0;
    while (i < n)
    {
        if (((unsigned char *)s1)[i] != ((unsigned char *)s2)[i])
            return (((unsigned char *)s1)[i] - ((unsigned char *)s2)[i]);
        i++;
    }
    return (0);
}
/*int main()
{
    char str1[] = "Hello, World!";
    char str2[] = "Hell, World.";
    int result = ft_memcmp(str1, str2, sizeof(str1));
    if (result == 0)
        printf("The memory blocks are equal.\n");
    else
        printf("The memory blocks are different.\n");
    return 0;
}*/