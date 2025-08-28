/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hisp <hisp@student.42prague.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 17:31:05 by hisp              #+#    #+#             */
/*   Updated: 2025/08/27 11:58:39 by hisp             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = 1;
	while (nb < 0)
		return (0);
	while (nb > 1)
	{
		i *= nb;
		nb--;
	}
	return (i);
}

// int main(void)
// {
// 	printf("fib : %d", ft_iterative_factorial(5));
// }
