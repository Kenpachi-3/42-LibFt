/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntshuma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 12:55:02 by ntshuma           #+#    #+#             */
/*   Updated: 2026/05/28 16:53:53 by ntshuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	size_t	i;
	char *arr;

	arr = s;
	i = 0;
	while (i < n)
	{
		arr[i] = c;
		i++;
	}
	return (s);
}

/*int	main()
{
	char str []= "hello";
	printf("%s\n", (unsigned char *)ft_memset(str, 'T', 4));
}*/

