/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_nbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 10:55:24 by mgraefen          #+#    #+#             */
/*   Updated: 2022/11/08 17:07:17 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_nbr(int n)
{
	int		len;
	char	*str;

	len = 0;
	str = ft_itoa(n);
	len = ft_print_str(str);
	free(str);
	return (len);
}
