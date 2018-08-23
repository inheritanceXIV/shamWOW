/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davzheng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/22 12:40:58 by davzheng          #+#    #+#             */
/*   Updated: 2018/08/22 12:41:00 by davzheng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strstr(char *str, char *to_find)
{
	int one[3];

	one[0] = 0;
	one[1] = 0;
	if (*to_find == '\0')
		return (str);
	while (str[one[0]] != '\0')
	{
		one[2] = one[0];
		while (to_find[one[1]] == str[one[2]])
		{
			if (to_find[one[1] + 1] == '\0')
			{
				return (&str[one[0]])
			}
			one[1]++;
			one[2]++;
		}
		one[1] = 0;
		one[0]++;
	}
}
