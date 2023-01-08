/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azekeria <azekeria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 18:24:43 by azekeria          #+#    #+#             */
/*   Updated: 2023/01/07 19:01:12 by azekeria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_isalpha(int c)
{
	if ((c > 96 && c < 123) || (c > 64 && c < 91))
		return (c);
	else
		return (0);
}

// int	ft_str_is_alpha(char *str)
// {
// 	int	index1;
// 	int	index2;
// 	int	count;

// 	index1 = 0;
// 	index2 = 0;
// 	count = 0;
// 	while (str[index1] != '\0')
// 	{
// 		count++;
// 		index1++;
// 	}
// 	while (index2 < count)
// 	{
// 		if (ft_check(str[index2]) == 0)
// 			return (0);
// 		else if (index2 < count)
// 			index2++;
// 	}
// 	if (count == 0)
// 		return (1);
// 	else if (index2 == count - 1)
// 		return (0);
// 	else
// 		return (1);
// }
/*
int	main(void)
{
    int	result;
    char	c;

    char string[] = "Hellothere";
    result = ft_str_is_alpha(string);

    c = result + '0';
    write(1, &c, 1);
    return (0);
}*/
