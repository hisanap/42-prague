/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hisp <hisp@student.42prague.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/14 14:29:37 by hisp              #+#    #+#             */
/*   Updated: 2025/08/20 10:30:19 by hisp             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}

// int	main(void)
// {
// 	char	dest[] = "hey";
// 	char	src[] = "im the string assigned";

// 	printf("dest before: %s\n", dest);
// 	ft_strcpy(dest, src);
// 	printf("dest after: %s\n", dest);
// } 
