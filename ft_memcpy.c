/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntshuma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 16:55:58 by ntshuma           #+#    #+#             */
/*   Updated: 2026/05/28 18:51:01 by ntshuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	
	size_t i;

	if (dest == NULL && src == NULL)
		return (NULL);
	i = 0;
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

/*int main()
{
	char src[] = "I love avocados!";
	char dest[20];

	ft_memcpy(dest, src, sizeof(src));
	printf("Copied string: %s\n", dest);
	return 0;
}*/
