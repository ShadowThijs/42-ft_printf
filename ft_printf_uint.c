/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_uint.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlogtenb <tlogtenb@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 15:53:57 by tlogtenb          #+#    #+#             */
/*   Updated: 2025/09/04 15:53:57 by tlogtenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

static void	ft_print(unsigned int n, int fd, int *ret)
{
	*ret += 1;
	if (n > 9)
		ft_print(n / 10, fd, ret);
	ft_putchar_fd("0123456789"[n % 10], fd);
}

int	ft_printf_uint(unsigned int n, int fd)
{
	int	ret;

	ret = 0;
	ft_print(n, fd, &ret);
	return (ret);
}
