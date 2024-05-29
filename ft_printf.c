/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbailly <pbailly@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 16:14:50 by pbailly           #+#    #+#             */
/*   Updated: 2024/05/28 15:31:42 by pbailly          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	format(va_list args, const char form)
{
	int	i;
	int	len;

	len = 0;
	if (form == 'c')
		len += ft_printfchar(form);
	if (form == 's')
		len += ft_printfstr(form);
	if (form == 'p')
		len += ft_printf(form); // TODO
	if (form == 'd')
		len += ft_printfnbr(form);
	if (form == 'i')
		len += ft_printf; // TODO
	if (form == 'u')
		len += ft_printf; // TODO
	if (form == 'x')
		len += ft_printf; // TODO
	if (form == 'X')
		len += ft_printf; // TODO
	if (form == '%')
		len += ft_printfpercent(form);
	return (len);
}

int	ft_printf(const char *str, ...)
{
	int		len;
	int		i;
	va_list	args;

	while (str[i])
	{
		if (str[i] == %)
		{
			len += format(args, str[i + 1]);
			i++;
		}
		else
		{
			len += ft_printfchar(i);
		}
		i++;
	}
	return (len);
}
