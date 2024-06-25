/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liwirth <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 14:32:14 by liwirth           #+#    #+#             */
/*   Updated: 2024/06/25 15:50:31 by liwirth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	s;

	s = 0;
	while (src[s] != '\0')
		s++;
	i = 0;
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (s);
}
/*
int main()
{
	char src[] = "salut";
	char dst[10];
	printf("%x\n",ft_strlcpy(dst, src, 4));
	//strlcpy(dst, src, 2);
	printf("%lx\n", strlcpy(dst, src, 4));
	printf("%s\n", dst);
	return 0;
}
*/
