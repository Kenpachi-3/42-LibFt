/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntshuma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 13:39:23 by ntshuma           #+#    #+#             */
/*   Updated: 2026/06/03 13:39:29 by ntshuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

size_t ft_strlcpy(char *dest, const char *src, size_t size)
{
    size_t i;

    if (dest == NULL || src == NULL)
        return (0);
    i = 0;
    while (src[i] != '\0' && i + 1 < size)
    {
        dest[i] = src[i];
        i++;
    }
    if (size > 0)
        dest[i] = '\0';
    return (strlen(src));
}
/*int main()
{
    char src[] = "I love avocados!";
    char dest[20];

    size_t result = ft_strlcpy(dest, src, sizeof(dest));
    printf("Copied string: %s\n", dest);
    printf("Length of source string: %zu\n", result);
    return 0;
}*/
