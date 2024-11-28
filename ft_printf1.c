/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf1.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmoudni <abmoudni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 08:05:32 by abmoudni          #+#    #+#             */
/*   Updated: 2024/11/28 08:29:00 by abmoudni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_format(char specifier, va_list args)
{
	int	nbr;

	nbr = 0;
	if (specifier == 'c')
		nbr += ft_putchar(va_arg(args, int));
	else if (specifier == 's')
		nbr += ft_putstr(va_arg(args, char *));
	else if (specifier == 'd' || specifier == 'i')
		nbr += ft_putnbr(va_arg(args, int));
	else if (specifier == 'u')
		nbr += ft_putnbru(va_arg(args, unsigned int));
	else if (specifier == 'x')
		nbr += ft_putexa(va_arg(args, unsigned int), 0);
	else if (specifier == 'X')
		nbr += ft_putexa(va_arg(args, unsigned int), 1);
	else if (specifier == 'p')
	{
		nbr += ft_putstr("0x");
		nbr += ft_putexxa(va_arg(args, unsigned long long));
	}
	else if (specifier == '%')
		nbr += ft_putchar('%');
	return (nbr);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		i;
	int		nbr;

	i = 0;
	nbr = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			if (str[i + 1])
				nbr += handle_format(str[i + 1], args);
			else
				return (-1);
			i++;
		}
		else
		{
			nbr += ft_putchar(str[i]);
		}
		i++;
	}
	va_end(args);
	return (nbr);
}
// int	main(void)
// {
// 	// Write C code here
// 	// char c = 'a';
// 	// char *s = "abde";
// 	// int n = 0;
// 	ft_printf("%d", -123);
// }
