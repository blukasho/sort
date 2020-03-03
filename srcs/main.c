/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 12:23:50 by blukasho          #+#    #+#             */
/*   Updated: 2020/03/03 11:56:17 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>


void		print_int_arr(int arr[], int size)
{
	int		i;

	i = 0;
	printf("<---start print int array--->\n");
	while (i < size)
	{
		printf("%d \n", arr[i]);
		++i;
	}
	printf("<---end print int array--->\n");
}

int			main(void)
{
	int		*arr;
	int		size;
	int		i;

	i = 0;
	size = 10;
	arr = (int *)malloc(size * sizeof(int));
	srand(0);
	while (i < size)
	{
		arr[i] = rand();
		++i;
	}
	print_int_arr(arr, size);
//	shellsort(arr, size);
	bubblesort(arr, size);
	print_int_arr(arr, size);
	free(arr);
	return (0);
}
