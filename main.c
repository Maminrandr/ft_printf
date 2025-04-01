/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maminran <maminran@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 21:08:09 by maminran          #+#    #+#             */
/*   Updated: 2025/04/01 18:05:53 by maminran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	main(void)
{
	int	p;
	printf("------------------------------------------\n");
	printf("\nTaille_reel : %d\n",printf("adresse : %p\nLow_hexa : %x\nUp_hexa : %X",&p,42,42));
	printf("\n\n");
	ft_printf("\nTaille_fake : %d\n",ft_printf("adresse : %p\nLow_hexa : %x\nUp_hexa : %X",&p,42,42));
	printf("                                          |\n\n");
	ft_printf("unsigned decimal => %u            |\n",-1);
	ft_printf("decimal => %d                              |\n",0);
	ft_printf("pourcentage => 100%%                       |\n");
	printf("------------------------------------------\n");
}
