/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_pointer.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlogtenb <tlogtenb@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 15:53:57 by tlogtenb          #+#    #+#             */
/*   Updated: 2025/09/04 15:53:57 by tlogtenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

void	ft_print_hex(unsigned long value, int fd, int *ret)
{
	*ret += 1;
	if (value >= 16)
		ft_print_hex(value / 16, fd, ret);
	ft_putchar_fd("0123456789abcdef"[value % 16], fd);
}

int	ft_printf_pointer(void *ptr, int fd)
{
	unsigned long	temp;
	int				ret;

	ret = 2;
	if (!ptr)
	{
		ret = 5;
		ft_putstr_fd("(nil)", fd);
	}
	else
	{
		ft_printf_string("0x", fd);
		temp = (unsigned long)ptr;
		ft_print_hex(temp, fd, &ret);
	}
	return (ret);
}
