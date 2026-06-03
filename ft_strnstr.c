/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntshuma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 15:05:31 by ntshuma           #+#    #+#             */
/*   Updated: 2026/06/03 15:05:34 by ntshuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t i;
    size_t j;

    if (!*needle)
        return ((char *)haystack);
    i = 0;
    while (haystack[i] && i < len)
    {
        j = 0;
        while (haystack[i + j] && needle[j] && haystack[i + j] == needle[j] && (i + j) < len)
            j++;
        if (!needle[j])
            return ((char *)(haystack + i));
        i++;
    }
    return (NULL);
}
int main()
{
    const char *haystack = "Hello, world!";
    const char *needle = "world";
    size_t len = 12;

    char *result = ft_strnstr(haystack, needle, len);
    if (result)
        printf("Substring '%s' found at position: %ld\n", needle, result - haystack);
    else
        printf("Substring '%s' not found within the first %zu characters.\n", needle, len);

    return 0;
}
