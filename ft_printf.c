/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmaurici <cmaurici@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 14:35:46 by cmaurici          #+#    #+#             */
/*   Updated: 2022/05/30 15:21:39 by cmaurici         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char const *str, ...)
{
	int		char_count;
	int		i;
	va_list	things;

	va_start(things, str);
	char_count = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
			char_count += ft_checker(str, things, ++i);
		else
		{
			ft_putchar(str[i]);
			char_count++;
		}
		i++;
	}
	va_end(things);
	return (char_count);
}

int	ft_checker(char const *str, va_list things, int i)
{
	int	j;

	j = 0;
	if (str[i] == 'c')
		j += ft_putchar(va_arg(things, int));
	else if (str[i] == 's')
		j += ft_putstr(va_arg(things, char *));
	else if (str[i] == 'p')
	{
		j += ft_putstr("0x");
		j += ft_puthexmin(va_arg(things, unsigned long long));
	}
	else if ((str[i] == 'd') || (str[i] == 'i'))
		j += ft_putnbr(va_arg(things, int));
	else if ((str[i] == 'u'))
		j += ft_putten(va_arg(things, unsigned int));
	else if ((str[i] == 'x'))
		j += ft_puthexmin(va_arg(things, unsigned int));
	else if ((str[i] == 'X'))
		j += ft_puthexmayus(va_arg(things, unsigned int));
	else if ((str[i] == '%'))
		j += ft_putchar('%');
	return (j);
}

/* int	main(void)
{
	printf("%d\n", ft_printf("%X\n", -42));
	printf("%d\n", printf("%X\n", -42));
	return (0);
} */
