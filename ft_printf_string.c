/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_string.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlogtenb <tlogtenb@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 15:53:57 by tlogtenb          #+#    #+#             */
/*   Updated: 2025/09/04 15:53:57 by tlogtenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

int	ft_printf_string(char *s, int fd)
{
	if (!s)
	{
		ft_putstr_fd("(null)", fd);
		return (6);
	}
	ft_putstr_fd(s, fd);
	return (ft_strlen(s));
}
