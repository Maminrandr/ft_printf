/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_func.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maminran <maminran@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/27 07:21:16 by maminran          #+#    #+#             */
/*   Updated: 2025/03/28 15:49:16 by maminran         ###   ########.fr       */
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
int	ft_putnbr(int n)
{
	int	count;

	count = ft_strlen(ft_itoa(n));
	if (n == -2147483648)
		write(1, "-2147483648", 11);
	else if (n < 0)
	{
		write(1, "-", 1);
		ft_putnbr(n * (-1));
	}
	else if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	{
		n = n + '0';
		write(1, &n, 1);
	}
	return (count);
}
int	ft_put_hex(int n)
{
	char	c;
	int	count;

	count = ft_strlen(ft_itoa(n));

	if (n >= 16)
		ft_put_hex(n / 16);

	if (n % 16 < 10)
		c = (n % 16) + '0';
	else
		c = (n % 16) - 10 + 'a';

	write(1, &c, 1);
	return (count);
}
void ft_put_address(void *ptr)
{
    unsigned long address = (unsigned long)ptr;
    
    write(1, "0x", 2);
    ft_put_hex(address);
}
