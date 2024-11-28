/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putexxa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmoudni <abmoudni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 08:06:55 by abmoudni          #+#    #+#             */
/*   Updated: 2024/11/28 08:14:05 by abmoudni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putexxa(unsigned long long nb)
{
	char	*str;
	int		re;

	str = "0123456789abcdef";
	if (nb >= 16)
	{
		re = ft_putexxa(nb / 16);
		re += ft_putexxa(nb % 16);
	}
	else
		re = ft_putchar(str[nb % 16]);
	return (re);
}
