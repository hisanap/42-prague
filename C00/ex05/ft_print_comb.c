/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hisp <hisp@student.42prague.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 16:12:40 by hisp              #+#    #+#             */
/*   Updated: 2025/08/17 11:31:21 by hisp             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(int i, int j, int k)
{
	write (1, &i, 1);
	write (1, &j, 1);
	write (1, &k, 1);
	if (! (i == '7' ))
	{
		write (1, ",", 1);
		write (1, " ", 1);
	}
}

void	ft_print_comb(void)
{
	int	i;	
	int	j;	
	int	k;

	i = '0';
	while (i <= '7')
	{
		j = i + 1;
		while (j <= '8')
		{
			k = j + 1;
			while (k <= '9')
			{
				ft_write(i, j, k);
				k++;
			}
			j++;
		}
		i++;
	}
}

// int main (void)
// {
// 	ft_print_comb();
// }