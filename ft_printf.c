/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarlucc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 11:38:23 by scarlucc          #+#    #+#             */
/*   Updated: 2024/03/24 17:28:09 by scarlucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	format_check(char format, va_list *ap, int *printed)
{
	if (format == 'c')
		ft_putchar_printf(va_arg(*ap, int), printed);
	else if (format == 's')
		ft_putstr_printf(va_arg(*ap, char *), printed);
	else if (format == 'p')
		ft_start_pointer(va_arg(*ap, uintptr_t), printed);
	else if (format == 'd')
		ft_putnbr_printf(va_arg(*ap, int), printed);
	else if (format == 'i')
		ft_putnbr_printf(va_arg(*ap, int), printed);
	else if (format == 'u')
		ft_uns_printf(va_arg(*ap, unsigned int), printed);
	else if (format == 'x')
		ft_convert_hex(va_arg(*ap, unsigned int), format, printed);
	else if (format == 'X')
		ft_convert_hex(va_arg(*ap, unsigned int), format, printed);
	else if (format == '%')
		ft_putchar_printf(format, printed);
}

int	ft_printf(const char *str, ...)
{
	va_list	ap;
	int		count;
	int		printed;

	va_start(ap, str);
	count = 0;
	printed = 0;
	while (str[count] != '\0')
	{
		if (str[count] == '%')
		{
			count++;
			format_check(str[count++], &ap, &printed);
		}
		else
		{
			ft_putchar_printf(str[count], &printed);
			count++;
		}
	}
	va_end(ap);
	return (printed);
}
