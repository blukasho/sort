/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bubblesort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blukasho <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/03 11:53:58 by blukasho          #+#    #+#             */
/*   Updated: 2020/03/03 13:26:11 by blukasho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <swap.h>

void		bubblesort(void *arr, size_t type_size, size_t )
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
				swap(v, i, l);
			++l;
		}
		++i;
	}
}
