/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acauchy <acauchy@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 10:41:12 by acauchy           #+#    #+#             */
/*   Updated: 2017/12/08 12:00:13 by acauchy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	main(void)
{
	printf("Simple string\n");
	printf("%%r : %r\n");
	printf("%%+0-5.3 : %+0-5.3\n");
	printf("%%d 1 : '%d'\n", 1);
	printf("%%+d 1 : '%+d'\n", 1);
	printf("%%++d 1 : '%++d'\n", 1);
	printf("%%.d 0 : '%.d'\n", 0);
	printf("%%+.d 0 : '%+.d'\n", 0);
	printf("%%3d 1 : '%3d'\n", 1);
	printf("%%03d 1 : '%03d'\n", 1);
	printf("%%-3d 1 : '%-3d'\n", 1);
	printf("%%-+3d 1 : '%-+3d'\n", 1);
	printf("%%+-3d 1 : '%+-3d'\n", 1);
	printf("%%0-3d 1 : '%0-3d'\n", 1);
	printf("%%-03d 1 : '%-03d'\n", 1);
	printf("%%+03d 1 : '%+03d'\n", 1);
	printf("%%.2d 1 : '%.2d'\n", 1);
	printf("%%3.2d 1 : '%3.2d'\n", 1);
}
