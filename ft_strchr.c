/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntshuma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 15:01:25 by ntshuma           #+#    #+#             */
/*   Updated: 2026/06/03 15:01:29 by ntshuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    size_t i;

    i = 0;
    while (s[i])
    {
        if (s[i] == (char)c)
            return ((char *)(s + i));
        i++;
    }
    if (c == '\0')
        return ((char *)(s + i));
    return (NULL);
}
/*int main()
{
    const char *str = "Hello, world!";
    char target = 'o';

    char *result = ft_strchr(str, target);
    if (result)
        printf("Character '%c' found at position: %ld\n", target, result - str);
    else
        printf("Character '%c' not found in the string.\n", target);

    return 0;
}*/