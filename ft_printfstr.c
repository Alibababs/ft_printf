/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printfstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbailly <pbailly@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/24 16:38:48 by pbailly           #+#    #+#             */
/*   Updated: 2024/05/24 17:32:41 by pbailly          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printfstr(char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(i);
		i++;
	}
	return (i);
}
