/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hisp <hisp@student.42prague.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/24 11:47:17 by hisp              #+#    #+#             */
/*   Updated: 2025/08/24 12:01:51 by hisp             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

// int main (void)
// {
// 	char str[] = "stressed with string";
// 	int len;

// 	len = ft_strlen(str);
// 	printf("str is: %s\nlen is: %d", str, len);
// }
