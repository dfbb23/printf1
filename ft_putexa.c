/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putexa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmoudni <abmoudni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 08:06:38 by abmoudni          #+#    #+#             */
/*   Updated: 2024/11/28 08:11:16 by abmoudni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putexa(unsigned int n, int nb)
{
	int			con;
	const char	*s1 = "0123456789abcdef";
	const char	*s2 = "0123456789ABCDEF";

	con = 0;
	if (nb == 0)
		s1 = s2;
	if (n < 16)
	{
		con = ft_putchar(s1[n]);
	}
	else
	{
		con = ft_putexa(n / 16, nb);
		con += ft_putexa(n % 16, nb);
	}
	return (con);
}
