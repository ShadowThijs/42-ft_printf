/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_lhex.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlogtenb <tlogtenb@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 15:53:57 by tlogtenb          #+#    #+#             */
/*   Updated: 2025/09/04 15:53:57 by tlogtenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

static void	ft_lhex(unsigned int n, int fd, int *ret)
{
	*ret += 1;
	if (n >= 16)
		ft_lhex(n / 16, fd, ret);
	ft_putchar_fd("0123456789abcdef"[n % 16], fd);
}

int	ft_printf_lhex(unsigned int n, int fd)
{
	int	ret;

	ret = 0;
	ft_lhex(n, fd, &ret);
	return (ret);
}
