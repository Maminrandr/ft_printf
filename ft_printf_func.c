/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_func.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maminran <maminran@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 07:21:16 by maminran          #+#    #+#             */
/*   Updated: 2025/03/27 11:41:10 by maminran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}
int	ft_putstr(char *str)
{
	int	i;
	int	len;

	i = 0;
	len = ft_strlen(str);
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	return (len);
}
int	ft_putnbr_fd(int n)
{
	if (n == -2147483648)
		write(1, "-2147483648", 11);
	else if (n < 0)
	{
		write(1, "-", 1);
		ft_putnbr_fd(n * (-1));
	}
	else if (n > 9)
	{
		ft_putnbr_fd(n / 10);
		ft_putnbr_fd(n % 10);
	}
	else
	{
		n = n + '0';
		write(1, &n, 1);
	}
	
}
