/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgul <emgul@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 06:14:21 by emgul             #+#    #+#             */
/*   Updated: 2023/12/01 06:14:21 by emgul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
 * @brief Sets the first n bytes of the memory pointed to by str to zero.
 *
 * @param str Pointer to the memory block to be zeroed.
 * @param n   Number of bytes to be zeroed.
 */
void	ft_bzero(void *str, size_t n)
{
	unsigned char	*ptr;

	if (!str)
		return ;
	ptr = (unsigned char *)str;
	while (n > 0)
    	{
	        *ptr++ = 0;
	        n--;
    	}
}
