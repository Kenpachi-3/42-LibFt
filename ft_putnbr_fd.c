/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ntshuma <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 21:08:01 by ntshuma           #+#    #+#             */
/*   Updated: 2026/06/10 21:09:24 by ntshuma          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#inlcude <unistd.h>
#include "libft.h"

void ft_putnbr_fd(int n, int fd)
{
    if (n == INT MIN)
    {
        write (fd, "-2147483648", 11);
        return;
    }
    if (n < 0)
    {
        write (fd, "-", 1);
        n = -n;
    }
    if (n > 9)
    {
        ft_putnbr_fd(n / 10, fd);
        char c = (n % 10) + '0';
        write (fd, &c, 1);
    }

}
