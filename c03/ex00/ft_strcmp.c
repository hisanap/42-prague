/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hisp <hisp@student.42prague.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/22 09:33:33 by hisp              #+#    #+#             */
/*   Updated: 2025/08/27 09:31:16 by hisp             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

// int main(void)
// {
// 	char s1[] = "hellooo";
// 	char s2[] = "hellp";

// 	int t = strcmp(s1, s2);
// 	printf("bfr: %d\n",t);

// 	int st = ft_strcmp(s1, s2);
// 	printf("out is: %d",st);
// 	return(0);
// }
