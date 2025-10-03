/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlogtenb <tlogtenb@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/04 15:53:57 by tlogtenb          #+#    #+#             */
/*   Updated: 2025/09/04 15:53:57 by tlogtenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H

# define FT_PRINTF_H

# include <stddef.h>
# include <unistd.h>
# include "libft/libft.h"

int	ft_printf(const char *s, ...);
int	ft_printf_char(char c, int fd);
int	ft_printf_int(int n, int fd);
int	ft_printf_lhex(unsigned int n, int fd);
int	ft_printf_perc(char c, int fd);
int	ft_printf_string(char *s, int fd);
int	ft_printf_uhex(unsigned int n, int fd);
int	ft_printf_pointer(void *ptr, int fd);
int	ft_printf_uint(unsigned int n, int fd);

#endif
