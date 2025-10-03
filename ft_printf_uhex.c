/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_uhex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlogtenb <tlogtenb@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 15:53:57 by tlogtenb          #+#    #+#             */
/*   Updated: 2025/09/04 15:53:57 by tlogtenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

static void	ft_uhex(unsigned int n, int fd, int *ret)
{
	*ret += 1;
	if (n >= 16)
		ft_uhex(n / 16, fd, ret);
	ft_putchar_fd("0123456789ABCDEF"[n % 16], fd);
}

int	ft_printf_uhex(unsigned int n, int fd)
{
	int	ret;

	ret = 0;
	ft_uhex(n, fd, &ret);
	return (ret);
}
