/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntshuma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/03 13:11:34 by ntshuma           #+#    #+#             */
/*   Updated: 2026/06/03 13:11:42 by ntshuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t i;

    if (dest == NULL && src == NULL)
        return (NULL);
    if (dest < src)
    {
        i = 0;
        while (i < n)
        {
            ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
            i++;
        }
    }
    else
    {
        i = n;
        while (i > 0)
        {
            i--;
            ((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
        }
    }
    return (dest);
}

int main()
{
    char src[] = "I love avocados!";
    char dest[20];

    ft_memmove(dest, src, sizeof(src));
    printf("Copied string: %s\n", dest);
    return 0;
}
