/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlogtenb <tlogtenb@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 21:58:01 by tlogtenb          #+#    #+#             */
/*   Updated: 2025/08/30 21:58:01 by tlogtenb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdint.h>

void	*ft_calloc(size_t n, size_t size)
{
	unsigned char	*ret;
	size_t			i;

	if (n != 0 && size > SIZE_MAX / n)
		return (NULL);
	ret = malloc(n * size);
	if (!ret)
		return (NULL);
	i = 0;
	while (i < (n * size))
	{
		ret[i] = 0;
		i++;
	}
	return ((void *)ret);
}
