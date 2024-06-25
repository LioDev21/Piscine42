/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liwirth <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 17:12:47 by liwirth           #+#    #+#             */
/*   Updated: 2024/06/25 17:12:49 by liwirth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


// char    *ft_strstr(char *str, char *to_find)
// {

// }

#include <stdio.h>
#include <string.h>

int main()
{
    char s1[] = "Hello comment tu";
    char s2[] = "va";

    printf("%s\n", strstr(s1, s2));
    return 0;
}