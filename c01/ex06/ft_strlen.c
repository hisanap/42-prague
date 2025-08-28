/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hisp <hisp@student.42prague.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 16:08:42 by hisp              #+#    #+#             */
/*   Updated: 2025/08/24 12:00:26 by hisp             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

// int main(void)
// {
// 	char	*str = "hello string";
// 	int	lenght;

// 	lenght = ft_strlen(str);
// 	printf("String: %s\nLenght: %d", str, lenght);
// }	
