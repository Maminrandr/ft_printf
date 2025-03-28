/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maminran <maminran@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 21:08:09 by maminran          #+#    #+#             */
/*   Updated: 2025/03/28 17:10:32 by maminran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	ft_printf("\n\nvalue fake ==>%d\n", ft_printf("\n {%%%c}\n\n char ==>\n\n int ==> {%d}\n\n string ==> {%s}\n", 'o', 98, "sdf"));

	printf("\n value real ==>(%d)\n", printf("PARTIE\n {%%%c}\n\n char ==> \n\n int ==> {%d}\n\n string ==> {%s}\n\n", 'o', 98, "sdfasd"));
}
