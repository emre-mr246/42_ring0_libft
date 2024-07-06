/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+        
	+:+     */
/*   By: emgul <emgul@student.42istanbul.com.tr>    +#+  +:+      
	+#+        */
/*                                                +#+#+#+#+#+  
	+#+           */
/*   Created: 2023/12/01 06:14:29 by emgul             #+#    #+#             */
/*   Updated: 2023/12/01 06:14:29 by emgul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdint.h>

void	*ft_calloc(size_t count, size_t size)
{
	void	*result;
	size_t	res_size;

	res_size = count * size;
	if (count > SIZE_MAX / size)
		return (NULL);
	if (count == 0 || size == 0)
		return (malloc(0));
	result = malloc(res_size);
	if (!result)
		return (NULL);
	ft_bzero(result, res_size);
	return (result);
}
