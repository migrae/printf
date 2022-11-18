/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgraefen <mgraefen@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 12:47:21 by mgraefen          #+#    #+#             */
/*   Updated: 2022/11/14 15:21:50 by mgraefen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include "libft/libft.h"

/* typedef struct s_print
{
	va_list	args;
	int		wdt;
	int		prc;
	int		zero;
	int		pnt;
	int		dash;
	int		tl;
	int		sign;
	int		is_zero;
	int		perc;
	int		sp;
} t_print; */

int	ft_printf(const char *str, ...);
int	ft_printf(const char *format, ...);
int	ft_print_str(char *str);
int	ft_print_nbr(int n);
int	ft_print_hex(unsigned int dec, const char format);
int	ft_print_ptr(unsigned long long ptr);
int	ft_print_unsigned(unsigned int n);
int	ft_print_percent(void);

#endif
