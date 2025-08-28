/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hisp <hisp@student.42prague.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/25 18:24:04 by hisp              #+#    #+#             */
/*   Updated: 2025/08/27 13:49:29 by hisp             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while (i < nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int main(void)
// {
// 	printf("is prime : %d\n", ft_is_prime(3));
// 	printf("is not prime : %d\n", ft_is_prime(-3));
// 	printf("is not prime : %d\n", ft_is_prime(0));
// 	printf("is not prime : %d", ft_is_prime(.7));
// }