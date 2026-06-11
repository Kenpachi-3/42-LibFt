/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntshuma <ntshuma@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 18:24:19 by ntshuma           #+#    #+#             */
/*   Updated: 2026/06/11 18:35:24 by ntshuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "libft.h"

static int count_digits(const char *s)
{
	static int i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

char *ft_itoa(int n)
{
    
}
