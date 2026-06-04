/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntshuma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 18:44:17 by ntshuma           #+#    #+#             */
/*   Updated: 2026/06/04 18:44:22 by ntshuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

/*void ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}*/

void *ft_calloc(size_t count, size_t size)
{
    void *ptr;

    ptr = malloc(count * size);
    if (ptr == NULL)
        return NULL;
    ft_bzero(ptr, count * size);
    return ptr;
}
/*int main()
{
    int *arr;
    size_t count = 5;

    arr = (int *)ft_calloc(count, sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    for (size_t i = 0; i < count; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);
    return 0;
}*/