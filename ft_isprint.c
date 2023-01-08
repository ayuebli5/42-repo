/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azekeria <azekeria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 19:08:45 by azekeria          #+#    #+#             */
/*   Updated: 2023/01/07 19:30:38 by azekeria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_isprint(int c)
{
	if ((c < 32) || c > 126)
		return (0);
	else
		return (1);
}

// int	ft_str_is_printable(char *str)
// {
// 	int	index;
// 	int	index2;
// 	int	count;

// 	count = 0;
// 	index2 = 0;
// 	while (str[index2])
// 	{
// 		count++;
// 		index2++;
// 	}
// 	index = 0;
// 	while (str[index])
// 	{
// 		if (ft_check(str[index]) == 1)
// 			return (0);
// 		index++;
// 	}
// 	if (count == 0)
// 		return (1);
// 	else
// 		return (1);
// }
/*
int     main(void)
{
		int 	result;
		int i;

		i = 0;
        char string[] = "lkjdslkj i"; 
        result = ft_str_is_printable(string);
    	
	 	result = result + '0';	
		write(1, &result, 1);
        return (0);
}*/
