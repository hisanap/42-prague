/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hisp <hisp@student.42prague.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 16:12:40 by hisp              #+#    #+#             */
/*   Updated: 2025/08/18 11:57:41 by hisp             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_write(char a)
{
	write(1, &a, 1);
}

void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i <= 98)
	{
		j = i +1;
		while (j <= 99)
		{
			ft_write(i / 10 + '0');
			ft_write(i % 10 + '0');
			write(1, " ", 1);
			ft_write(j / 10 + '0');
			ft_write(j % 10 + '0');
			if (i != 98)
			{
				write(1, ", ", 2);
			}
			j++;
		}
		i++;
	}
}
// int main (void)
// {
// 	ft_print_comb2();
// }