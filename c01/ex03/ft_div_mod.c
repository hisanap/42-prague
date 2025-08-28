/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hisp <hisp@student.42prague.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 09:10:42 by hisp              #+#    #+#             */
/*   Updated: 2025/08/21 15:54:27 by hisp             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int		result;
	int		reminder;

	result = a / b;
	reminder = a % b;
	*div = result;
	*mod = reminder;
}

// int	main(void)
// {
// 	int	result;
// 	int	reminder;

// 	ft_div_mod(4, 5, &result, &reminder);
// 	printf("%d", result);
// 	printf(" %d", reminder);
// }
