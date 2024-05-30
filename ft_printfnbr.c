/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alibaba <alibaba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 16:58:41 by pbailly           #+#    #+#             */
/*   Updated: 2024/05/30 19:24:26 by alibaba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int     count_size(long int n)
{
        size_t  i;

        i = 0;
        if (n == 0)
                return (1);
        if (n < 0)
                n *= -1;
        while (n)
        {
                n /= 10;
                i++;
        }
        return (i);
}

int	ft_printfnbr(int n)
{
	int	len;

	len = 0;
	if (n == -2147483648)
	{
		len = ft_putstr("-2147483648");
		return (len);
	}



	return (len);
}
