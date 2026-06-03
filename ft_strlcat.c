/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntshuma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 14:57:15 by ntshuma           #+#    #+#             */
/*   Updated: 2026/06/03 14:57:19 by ntshuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

ft_strlcat(char *dst, const char *src, size_t dstsize)
{
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    while (dst[i] && i < dstsize)
        i++;
    while (src[j] && (i + j + 1) < dstsize)
    {
        dst[i + j] = src[j];
        j++;
    }
    if (i < dstsize)
        dst[i + j] = '\0';
    return (i + strlen(src));
}
int main()
{
    char dest[20] = "Hello, ";
    const char *src = "world!";
    size_t size = 20;

    printf("Before strlcat: %s\n", dest);
    size_t result = ft_strlcat(dest, src, size);
    printf("After strlcat: %s\n", dest);
    printf("Total length attempted: %zu\n", result);

    return 0;
}