/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_hexa.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alibaba <alibaba@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/01 16:07:34 by alibaba           #+#    #+#             */
/*   Updated: 2024/06/01 19:30:22 by alibaba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	hex(int n, char form)
{
	if (n < 10)
		ft_printfchar('0' + n);
	else if (form == 'X')
		ft_printfchar(n + 55);
	else
		ft_printfchar(n + 87);
	return (1);
}

int	ft_printf_hexa(unsigned int n, char form)
{
	int	len;

	len = 0;
	if (n >= 16)
		len += ft_printf_hexa(n / 16, form);
	len += hex(n % 16, form);
	return (len);
}

int	ft_printf_p(void *n, char form)
{
	int	len;

	if (!n)
		return (ft_printfstr("(nil)"));
	len = 0;
	len += ft_printfstr("0x");
	len += ft_printf_hexa((unsigned long)n, form);
	return (len);
}
