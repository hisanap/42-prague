/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hisp <hisp@student.42prague.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 09:37:45 by hisp              #+#    #+#             */
/*   Updated: 2025/08/21 16:01:32 by hisp             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = 0;
	temp = 0;
	while (i < size)
	{
		temp = tab[i];
		tab[i] = tab[size -1];
		tab[size -1] = temp;
		i++;
		size--;
	}
}

// int main(void)
// {
// 	int tab[] = {0,1,2,3,4,5,6,7,8,9,10};
// 	int size = 11;

// 	//variable for printing 
// 	int i = 0;
// 	int j = 0;
// 	int reverse = size -1;

// 	// print after function use
// 	ft_rev_int_tab(tab, size);
// 	while(j < size)
// 	{
// 	printf("%d ",tab[j]);
// 	j++;
// 	}
// }
