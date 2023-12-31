/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rgallien <rgallien@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 01:21:27 by rgallien          #+#    #+#             */
/*   Updated: 2023/12/13 15:05:59 by rgallien         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "./libft/libft.h"
# include <stdarg.h>
# include <stdio.h>

int	ft_printf(const char *format, ...);
int	ft_print_char(int ap);
int	ft_print_nbr(int ap);
int	ft_print_str(char *str);
int	ft_print_hex(unsigned long long nb, char c);
int	ft_print_unbr(unsigned int nb, int fd);

#endif
