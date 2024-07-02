/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   words.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: scarlucc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 18:19:35 by scarlucc          #+#    #+#             */
/*   Updated: 2024/03/25 16:42:45 by scarlucc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar_printf(char c, int *printed)
{
	write(1, &c, 1);
	*printed += 1;
}

void	ft_putstr_printf(char *s, int *printed)
{
	size_t	i;

	if (!s)
	{
		ft_putstr_printf("(null)", printed);
		return ;
	}
	i = 0;
	while (s[i])
	{
		ft_putchar_printf(s[i], printed);
		i++;
	}
}
/*
int	main(void)
{
	int	or_printed_chars;
	int	ft_printed_chars;
	int	*point = &or_printed_chars;
	char	c = 'a';
	char	*str = "ciao mamma";
	int		i = 2147483647;
	unsigned int	u = 4294967295;
	int		count = 0;

	while (count < 10)
	{
		if (count == 0){
			printf("STAMPA CARATTERE(c)\n");
			or_printed_chars = printf("or stampa: %c\n", c);
			ft_printed_chars = ft_printf("ft stampa: %c\n", c);}
		else if (count == 1){
			printf("STAMPA STRINGA(s)\n");
			or_printed_chars = printf("or stampa: %s\n", str);
			ft_printed_chars = ft_printf("ft stampa: %s\n", str);}
		else if (count == 2){
			printf("STAMPA PUNTATORE(p)\n");
			or_printed_chars = printf("or stampa: %p\n", point);
			ft_printed_chars = ft_printf("ft stampa: %p\n", point);}
		else if (count == 3){
			printf("STAMPA DECIMALE(d)\n");
			or_printed_chars = printf("or stampa: %d\n", i);
			ft_printed_chars = ft_printf("ft stampa: %d\n", i);}
		else if (count == 4){
			printf("STAMPA INTEGER(i)\n");
			or_printed_chars = printf("or stampa: %i\n", i);
			ft_printed_chars = ft_printf("ft stampa: %i\n", i);}
		else if (count == 5){
			printf("STAMPA UNSIGNED DECIMAL(u)\n");
			or_printed_chars = printf("or stampa: %u\n", u);
			ft_printed_chars = ft_printf("ft stampa: %u\n", u);}
		else if (count == 6){
			printf("STAMPA ESADECIMALE MINUSCOLO(x)\n");
			or_printed_chars = printf("or stampa: %x\n", 10);
			ft_printed_chars = ft_printf("ft stampa: %x\n", 10);}
		else if (count == 7){
			printf("STAMPA ESADECIMALE MAIUSCOLO(X)\n");
			or_printed_chars = printf("or stampa: %X\n", 10);
			ft_printed_chars = ft_printf("ft stampa: %X\n", 10);}
		else if (count == 8){
			printf("STAMPA PERCENTUALE(%%)\n");
			or_printed_chars = printf("or stampa: %%%%%%\n");
			ft_printed_chars = ft_printf("ft stampa: %%%%%%\n");}
		else if (count == 9){
			printf("STAMPA PERCENTUALE(%%)\n");
			or_printed_chars = printf("or stampa: %s\n", "");
			ft_printed_chars = ft_printf("ft stampa: %s\n", "");}
		count++;
		printf("or stampa: %d chars\nft stampa: %d chars\n\n",
		 or_printed_chars, ft_printed_chars);
	}	
	return (0);
}*/

/*
make re
cc -o main.out words.c -L. -lftprintf
*/
