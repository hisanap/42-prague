/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hisp <hisp@student.42prague.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 11:25:04 by hisp              #+#    #+#             */
/*   Updated: 2025/08/21 16:31:39 by hisp             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			temp = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = temp;
			i = 0;
		}
		else
			i++;
	}
}

// int main(void)
// {
// 	int tab[] = {2, 1, 4, 7, 9, 8, 5, 6, 10, 3};
// 	int	size = 10;

// 	//variable for printing 
// 	int i = 0;
// 	int j = 0;

// 	printf("Array before: \n");
// 	while (i < size)
// 	{
// 		printf("%d ", tab[i]);
// 		i++;
// 	}
// 	// printf("\n");
// 	printf("\nArray after: \n");
// 	ft_sort_int_tab(tab, size);
// 	while(j < size)
// 	{
// 	printf("%d ",tab[j]);
// 	j++;
// 	}
// }
