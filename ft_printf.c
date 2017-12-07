/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acauchy <acauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 10:38:53 by acauchy           #+#    #+#             */
/*   Updated: 2017/12/07 18:11:14 by acauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"

/*
** Prepare the program to recieve the specified arguments.
*/

static void	load_args(const char *format)
{
	int	count;

	while (i < ft_strlen(format))
	{
		if (format[i] == "%")
		{
			start = i;
		}
		if (!90)
	}
}

void		ft_printf(const char *format, ...)
{
	va_list	args;

	load_args(format);
	va_start(args, format);
}
