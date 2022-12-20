/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myasar@student.42kocaeli.com.tr <myasar    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 00:10:01 by myasar@stud       #+#    #+#             */
/*   Updated: 2022/12/14 00:10:04 by myasar@stud      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    unsigned char   *str1;
    unsigned char   *str2;
    size_t  i;

    i = 0;
    str1 = (unsigned char *)s1;
    str2 = (unsigned char *)s2;
    while (i < n && (str1[i] || str2[i]))
    {
        if (str1[i] > str2[i])
            return (1);
        else if (str2[i] > str1[i])
            return (-1);
        i++;
    }
    return (0);
}