/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_helper.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maminran <maminran@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 08:00:30 by maminran          #+#    #+#             */
/*   Updated: 2025/03/28 16:02:26 by maminran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}
int	get_format(char format, va_list args)
{
	int	count;

	count = 0;
	if (format == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (format == 's')
		count += ft_putstr(va_arg(args, char *));
	else if (format == 'd' || format == 'i')
		count += ft_putnbr(va_arg(args, int));
	else if (format == 'x' || format == 'X')
		count += ft_put_hex(va_arg(args, int));
	// ---else if (format == 'u')
	// 	---count += ft_put(va_arg(args, char *));
	// ---else if (format == 'x' || format == 'X')
	// 	---count += ft_put(va_arg(args, char *));
	// ---else if (format == '%')
	// 	---count += ft_put(va_arg(args, char *));
	return (count);
}
