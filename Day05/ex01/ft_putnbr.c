/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: davzheng <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 13:48:46 by davzheng          #+#    #+#             */
/*   Updated: 2018/08/23 13:48:55 by davzheng         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putnbr(int nb)
{
	int one[2];

	one[0] = 1000000000;
	if (nb == 0)
		ft_putchar('0');
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			ft_putchar('2');
			nb = -147483648;
		}
		nb = -nb;
	}
	while (nb > 0)
	{
		one[1] = nb % one[0];
		if ((nb - one[1]) / one[0] != 0)
			ft_putchar((nb - one[1]) / one[0] + 48);
		nb = one[1];
		one[0] /= 10;
	}
}
