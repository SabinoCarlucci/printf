/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarlucc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 17:08:39 by scarlucc          #+#    #+#             */
/*   Updated: 2024/03/24 17:21:26 by scarlucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdio.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>
# include <stdint.h>

int		ft_printf(const char *str, ...);
void	format_check(char format, va_list *ap, int *printed);
void	ft_putchar_printf(char c, int *printed);
void	ft_putstr_printf(char *s, int *printed);
void	ft_putnbr_printf(int n, int *printed);
void	ft_uns_printf(unsigned int l, int *printed);
void	ft_convert_hex(unsigned int number, char low_up, int *printed);
void	ft_pointer(uintptr_t point, int *printed);
void	ft_start_pointer(uintptr_t point, int *printed);

#endif