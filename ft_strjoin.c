/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myasar@student.42kocaeli.com.tr <myasar    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/16 19:03:58 by myasar@stud       #+#    #+#             */
/*   Updated: 2022/12/16 19:26:03 by myasar@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char *str;
    size_t i;
    size_t j;

    str = (char*)malloc(
        sizeof(*s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
    if (!str)
        return (NULL);
    i = 0;
    j = 0;
    while (s1[i])
    {
        str[j++] = s1[i];
        i++;
    }
    i = 0;
    while(s2[i])
    {
        str[j++] = s2[i];
        i++;
    }
    str[j] = 0;
    return (str);
}