/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hisp <hisp@student.42prague.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/20 11:16:38 by hisp              #+#    #+#             */
/*   Updated: 2025/08/21 07:22:08 by hisp             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	ft_strlowcase(str);
	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] = str[0] -32;
	i = 1;
	while (str[i])
	{
		if (!((str[i -1] >= 'a' && str[i -1] <= 'z')
				|| (str[i -1] >= 'A' && str[i -1] <= 'Z')
				|| (str[i -1] >= '0' && str[i -1] <= '9')))
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] -32;
		}
		i++;
	}
	return (str);
}

// int main (void)
// {
// 	char str[] = "hi, how are you? 42woRds Forty-two; #fifty+and+one";

// 	printf("Result : %s", ft_strcapitalize(str));
// }
