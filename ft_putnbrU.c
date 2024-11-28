/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbrU.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmoudni <abmoudni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 08:07:25 by abmoudni          #+#    #+#             */
/*   Updated: 2024/11/28 08:30:08 by abmoudni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	cont(int nb)
{
	int	con;

	con = 0;
	while (nb != 0)
	{
		nb = nb / 10;
		con++;
	}
	return (con);
}

int	ft_putnbru(unsigned int n)
{
	long	nb;
	int		con;

	con = cont(n);
	nb = n;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb *= -1;
		con++;
	}
	if (nb <= 9 && nb >= 0)
	{
		ft_putchar(nb + '0');
	}
	else
	{
		ft_putnbru(nb / 10);
		ft_putnbru(nb % 10);
	}
	return (con);
}
