/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsigned.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emgul <emgul@student.42istanbul.com.tr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/26 15:46:39 by emgul             #+#    #+#             */
/*   Updated: 2024/07/07 14:53:55 by emgul            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

static void	ft_print_unbr(unsigned int nb, t_format *f)
{
	if (nb >= 10)
		ft_print_unbr(nb / 10, f);
	if (nb < 10)
	{
		ft_putchar(nb + '0');
		return ;
	}
	ft_putchar((nb % 10) + '0');
}

static int	ft_number_len(long nbr)
{
	int	len;

	len = 0;
	if (nbr < 0)
		len++;
	if (nbr == 0)
		len++;
	while (nbr)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

void	ft_putunsigned(unsigned int nb, t_format *f)
{
	ft_print_unbr(nb, f);
	f->printed_chars += ft_number_len(nb);
}
