/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzana <amarzana@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 14:30:21 by amarzana          #+#    #+#             */
/*   Updated: 2022/05/12 17:39:52 by amarzana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int	ft_printf(char const *str, ...);
int	ft_check_flag(va_list list, const char c);
int	ft_putchar(char c);
int	ft_putstr(char *str);
int	ft_putvoid(unsigned long n, char *base, int start);
int	ft_putnbr(int n);
int	ft_putunbr(unsigned int n);
int	ft_puthexa(unsigned int n, char *base);

#endif