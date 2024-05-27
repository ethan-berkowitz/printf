/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eberkowi <eberkowi@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 11:41:45 by eberkowi          #+#    #+#             */
/*   Updated: 2024/05/27 12:14:13 by eberkowi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	/* int 	count = 0;
	char	chr = 'c';
	char	str[20] = "neilyoung";
	int		n = 875364031;
	
	printf("\n");
	// %c =======================================
	count = printf("REAL %%c: %c", 1723851743);
	printf(" COUNT: %d\n", count);
	count = ft_printf("FAKE %%c: %c", 1723851743);
	printf(" COUNT: %d\n", count);
	printf("\n\n");
	// %s =======================================
	count = printf("REAL %%s: %s", str);
	printf(" COUNT: %d\n", count);
	count = ft_printf("FAKE %%s: %s", str);
	printf(" COUNT: %d\n", count);
	printf("\n\n");
	// %s #2 ====================================
	count = printf("REAL %%s: %s", (char *)NULL);
	printf(" COUNT: %d\n", count);
	count = ft_printf("FAKE %%s: %s", (char *)NULL);
	printf(" COUNT: %d\n", count);
	printf("\n\n");
	// %p =======================================
	count = printf("REAL %%p: %p", &n);
	printf(" COUNT: %d\n", count);
	count = ft_printf("FAKE %%p: %p", &n);
	printf(" COUNT: %d\n", count);
	printf("\n\n");
	// %p #2 ====================================
	count = printf("%p", "");
	printf(" COUNT: %d\n", count);
	count = ft_printf("%p", "");
	printf(" COUNT: %d\n", count);
	printf("\n\n");
	// %d =======================================
	count = printf("REAL %%d: %d", n);
	printf(" COUNT: %d\n", count);
	count = ft_printf("FAKE %%d: %d", n);
	printf(" COUNT: %d\n", count);
	printf("\n\n");
	// %i =======================================
	count = printf("REAL %%i: %i", n);
	printf(" COUNT: %d\n", count);
	count = ft_printf("FAKE %%i: %i", n);
	printf(" COUNT: %d\n", count);
	printf("\n\n");
	// %u =======================================
	count = printf("REAL %%u: %u", n);
	printf(" COUNT: %d\n", count);
	count = ft_printf("FAKE %%u: %u", n);
	printf(" COUNT: %d\n", count);
	printf("\n\n");
	// %x =======================================
	count = printf("REAL %%x: %x", n);
	printf(" COUNT: %d\n", count);
	count = ft_printf("FAKE %%x: %x", n);
	printf(" COUNT: %d\n", count);
	printf("\n\n");
	// %X =======================================
	count = printf("REAL %%X: %X", n);
	printf(" COUNT: %d\n", count);
	count = ft_printf("FAKE %%X: %X", n);
	printf(" COUNT: %d\n", count);
	printf("\n\n");
	// %% =======================================
	count = printf("REAL %%%%: %%");
	printf(" COUNT: %d\n", count);
	count = ft_printf("FAKE %%%%: %%");
	printf(" COUNT: %d\n", count);
	printf("\n\n");

	// Random ===================================

	printf("========================================================================\n"); */
	int count = 0;
	
	count = printf("aa%c", 0);
	//printf("\nCOUNT: %d\n", count);
	count = ft_printf("bb%c", 0);
	//printf("\nCOUNT: %d\n", count);
	//printf("\n\n");
}
