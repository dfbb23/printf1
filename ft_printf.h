/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abmoudni <abmoudni@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/28 08:08:49 by abmoudni          #+#    #+#             */
/*   Updated: 2024/11/28 08:49:54 by abmoudni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdio.h>
# include <unistd.h>

int	ft_putexxa(unsigned long long nb);
int	ft_printf(const char *str, ...);
int	ft_putnbr(int n);
int	ft_putnbru(unsigned int n);
int	ft_putchar(char c);
int	ft_putstr(char *s);
int	ft_putexa(unsigned int n, int nb);

#endif
