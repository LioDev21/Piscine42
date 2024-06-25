/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: liwirth <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 17:11:45 by liwirth           #+#    #+#             */
/*   Updated: 2024/06/25 17:11:47 by liwirth          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;

    i = 0;
    if (n == 0)
        return (0);
    while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n - 1)
    {
        i++;
    }
    return (s1[i] - s2[i]);
}

// #include <stdio.h>
// #include <string.h>

// int main()
// {
//     char s1[] = "salpt";
//     char s2[] = "salut";
//     int i = 3;

//     //ft_strcmp(s1, s2);
//     printf("%d\n",strncmp(s1, s2, i));
//     printf("%d\n", ft_strncmp(s1, s2, i));
//     return 0;
// }