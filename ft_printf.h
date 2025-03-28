/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maminran <maminran@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 21:07:28 by maminran          #+#    #+#             */
/*   Updated: 2025/03/28 11:41:04 by maminran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

int		get_format(char format, va_list args_write);
int		ft_putchar(char c);
int		ft_putstr(char *str);
size_t	ft_strlen(char *str);
int		ft_putnbr(int n);
int		ft_printf(const char *format, ...);
char	*ft_itoa(int n);

#endif