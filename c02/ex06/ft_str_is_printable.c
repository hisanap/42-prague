/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hisp <hisp@student.42prague.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 07:56:19 by hisp              #+#    #+#             */
/*   Updated: 2025/08/21 12:17:40 by hisp             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')
				|| (str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= '0' && str[i] <= '9')
				|| (str[i] >= ' ' && str[i] <= '~')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

// int main (void)
// {
// 	char str[100] = "dgfDFF0787563*&#@$%\t";

// 	printf("str is: %d", ft_str_is_printable(str));
// }