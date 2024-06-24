/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liwirth <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/24 15:48:43 by liwirth           #+#    #+#             */
/*   Updated: 2024/06/24 15:52:22 by liwirth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i])
	{
		if(str[i] >= 33 && str[i] <= 126)
			i++;
		else
			return (0);
	}
	return (1);
}
/*
int main()
{
	char str[] = " ";

	printf("%d\n", ft_str_is_printable(str));
	return 0;
}
*/
