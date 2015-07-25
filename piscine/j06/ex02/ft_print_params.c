/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcouet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/15 19:44:25 by rcouet            #+#    #+#             */
/*   Updated: 2015/07/16 14:17:19 by rcouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);
int main(int argc,char **argv)
{
	int i;
	int j;

	j = 1;
	i = 0;
	while (argc != j)
	{
		i = 0;
		while (argv[j] [i] != '\0')
		{
			ft_putchar(argv[j] [i]);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
}
