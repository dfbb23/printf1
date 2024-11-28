/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmoudni <abmoudni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 08:07:08 by abmoudni          #+#    #+#             */
/*   Updated: 2024/11/28 08:23:46 by abmoudni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	connum(int nb)
{
	int	con;

	con = 0;
	if (nb < 0)
		con++;
	while (nb != 0)
	{
		nb = nb / 10;
		con++;
	}
	return (con);
}

int	ft_putnbr(int n)
{
	long	nb;
	int		con;

	con = 0;
	con = connum(n);
	nb = n;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
	}
	if (nb <= 9 && nb >= 0)
	{
		ft_putchar(nb + '0');
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	return (con);
}
