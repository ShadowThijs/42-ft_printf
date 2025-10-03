/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlogtenb <tlogtenb@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 15:53:57 by tlogtenb          #+#    #+#             */
/*   Updated: 2025/09/04 15:53:57 by tlogtenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"
#include <stdarg.h>
#include <stdio.h>

static void	ft_hndl_perc(const char *s, int *ret, va_list args)
{
	int	temp;

	temp = 0;
	if (s[0] == 'c')
		temp = ft_printf_char(va_arg(args, int), 1);
	else if (s[0] == 's')
		temp = ft_printf_string(va_arg(args, char *), 1);
	else if (s[0] == 'd')
		temp = ft_printf_int(va_arg(args, int), 1);
	else if (s[0] == 'i')
		temp = ft_printf_int(va_arg(args, int), 1);
	else if (s[0] == 'x')
		temp = ft_printf_lhex(va_arg(args, unsigned int), 1);
	else if (s[0] == 'X')
		temp = ft_printf_uhex(va_arg(args, unsigned int), 1);
	else if (s[0] == 'p')
		temp = ft_printf_pointer(va_arg(args, void *), 1);
	else if (s[0] == 'u')
		temp = ft_printf_uint(va_arg(args, unsigned int), 1);
	else if (s[0] == '%')
		temp = ft_printf_perc('%', 1);
	*ret += temp;
}

static int	ft_print_to_perc(const char *s, int *ret, va_list args)
{
	int	temp;
	int	i;

	temp = *ret;
	i = 0;
	while (s[i])
	{
		if (s[i] == '%')
		{
			i += 1;
			ft_hndl_perc(s + i, ret, args);
			i += 1;
			temp = *ret;
		}
		else
		{
			ft_putchar_fd(s[i], 1);
			temp++;
			*ret = temp;
			i++;
		}
	}
	return (0);
}

int	ft_printf(const char *s, ...)
{
	va_list	args;
	int		ret;

	va_start(args, s);
	ret = 0;
	ft_print_to_perc(s, &ret, args);
	va_end(args);
	return (ret);
}

int main (void)
{
	int nbr = 1234321;
	char c = 'c';
	char *str = "String";
	void *ptr;
	ft_printf("test 1: %d %i\n", nbr, nbr);
	printf("test 1: %d %i\n", nbr, nbr);

	ft_printf("test 2: %c %c\n", c, c);
	printf("test 2: %c %c\n", c, c);

	ft_printf("test 3: %s %s\n", str, str);
	printf("test 3: %s %s\n", str, str);

	ft_printf("test 4: %x %X\n", nbr, nbr);
	printf("test 4: %x %X\n", nbr, nbr);

	ft_printf("test 5: %p %p\n", ptr, ptr);
	printf("test 5: %p %p\n", ptr, ptr);
}
