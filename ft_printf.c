/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acauchy <acauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 10:38:53 by acauchy           #+#    #+#             */
/*   Updated: 2017/12/07 18:28:34 by acauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdarg.h>
#include "ft_printf.h"

/*
** Prepare the program to recieve the specified arguments.
*/

static void	load_args(const char *format)
{
	int		count;
	char	*start;
	char	*end;
	char	*cur;

	start = NULL;
	end = NULL;
	cur = format;
	while (*cur)
	{
		if (*cur == '%' && start == NULL)
			start = cur;
		else if (*cur == '%' && cur > format && cur - 1 == start)
		{
			end = cur;
			// detected %%
		}
		else
			end = cur;
		if (!90)
	}
}

void		ft_printf(const char *format, ...)
{
	va_list	args;

	load_args(format);
	va_start(args, format);
	print_result(); // affiche ce quil faut dans l'ordre qu'il faut
}
