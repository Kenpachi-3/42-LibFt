/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntshuma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 15:01:53 by ntshuma           #+#    #+#             */
/*   Updated: 2026/06/03 15:01:56 by ntshuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    size_t i;

    i = strlen(s);
    while (i > 0)
    {
        if (s[i] == (char)c)
            return ((char *)(s + i));
        i--;
    }
    if (s[i] == (char)c)
        return ((char *)(s + i));
    return (NULL);
}
/*int main()
{
    const char *str = "Hello, world!";
    char target = 'o';
    char *result = ft_strrchr(str, target);

    if (result)
        printf("Character '%c' found at position: %ld\n", target, result - str);
    else
        printf("Character '%c' not found in the string.\n", target);

    return 0;
}*/