/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azekeria <azekeria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/01 18:46:19 by azekeria          #+#    #+#             */
/*   Updated: 2023/01/07 15:42:27 by azekeria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}

// int	ft_isdigit(char *str)
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
// /*
// int     main(void)
// {
//         int     result;
//         char    c;

//         char string[] = "d215454651";
//         result = ft_str_is_numeric(string);

//         c = result + '0';
//         write(1, &c, 1);
//         return (0);
// }*/
