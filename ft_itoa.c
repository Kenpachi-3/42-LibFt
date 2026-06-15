/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntshuma <ntshuma@student.42roma.it>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 18:24:19 by ntshuma           #+#    #+#             */
/*   Updated: 2026/06/15 17:32:57 by ntshuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <limits.h>
//#include <stdio.h>
#include "libft.h"
#include <stdlib.h>

static int count_digits(long n)
{
	int len;

	len = 0;
	if (n <= 0)
			len++;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char *ft_itoa(int n)
{
	int len;
	char *result;
	long num;

	num = n;
	len = count_digits(num);
	result = (char *)ft_calloc(len + 1, sizeof(char));
	if (!result)
		return (NULL);
	if (num == 0)
		result[0] = '0';
	if (num < 0)
	{
		result[0] = '-';
		num = -num;
	}
	while (num > 0)
	{
		result[--len] = (num % 10) + '0';
		num /= 10;
	}
	return (result);
}

/*int main(void)
{
	char *str;

	str = ft_itoa(246);
	printf("246 : %s\n", str);
	free(str);

	str = ft_itoa(-135);
	printf("-135 : %s\n", str);
	free(str);

	str = ft_itoa(0);
	printf("0 : %s\n", str);
	free(str);

	str = ft_itoa(INT_MIN);
	printf("INT_MIN : %s\n", str);
	free(str);

	str = ft_itoa(INT_MAX);
	printf("INT_MAX : %s\n", str);
	free(str);

	return (0);
}*/
