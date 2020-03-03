/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/26 12:23:50 by blukasho          #+#    #+#             */
/*   Updated: 2020/03/01 14:39:37 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include <time.h>

int			binsearch(int x, int v[], int n)
{
	int low, high, mid;

	low = 0;
	high = n - 1;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (x < v[mid])
			high = mid - 1;
		else if (x > v[mid])
			low = mid + 1;
		else
			return (mid);
	}
	return (-1);
}

void		shellsort(int v[], int n)
{
	int		gap, i, j, temp;
	for (gap = n/2; gap > 0; gap /= 2)
	{
		for (i = gap; i < n; i++)
		{
			for (j = i - gap; j >= 0 && v[j] > v[j + gap]; j -= gap)
			{
				temp = v[j];
				v[j] = v[j + gap];
				v[j + gap] = temp;
			}
		}
	}
}

void		bubblesort(int v[], int n)
{
	int		i;
	int		l;
	int		tmp;

	i = 0;
	while (i < n)
	{
		l = i;
		while (l < n)
		{
			if (v[i] > v[l])
			{
				tmp = v[i];
				v[i] = v[l];
				v[l] = tmp;
			}
			++l;
		}
		++i;
	}
}

void		print_int_arr(int arr[], int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		printf("%d \n", arr[i]);
		++i;
	}
	printf("\n");
}

int			main(void)
{
	int		*arr;
	int		size;
	int		i;

	i = 0;
	size = 1000000;
	arr = (int *)malloc(size * sizeof(int));
	srand(0);
	while (i < size)
	{
		arr[i] = rand();
		++i;
	}
//	print_int_arr(arr, size);
//	shellsort(arr, size);
	bubblesort(arr, size);
	print_int_arr(arr, size);
	free(arr);
	return (0);
}
