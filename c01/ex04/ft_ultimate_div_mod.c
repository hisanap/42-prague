/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hisp <hisp@student.42prague.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 13:14:21 by hisp              #+#    #+#             */
/*   Updated: 2025/08/21 15:55:42 by hisp             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	result;
	int	reminder;

	result = *a / *b;
	reminder = *a % *b;
	*a = result;
	*b = reminder;
}

// int main() 
// {
// 	int a = 10;
// 	int b = 5;

// 	ft_ultimate_div_mod(&a, &b);
// 	printf("Result : %d", a);
// 	printf("\nRemainder : %d", b);
// }
