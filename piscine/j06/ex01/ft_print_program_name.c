/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rcouet <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/15 17:29:57 by rcouet            #+#    #+#             */
/*   Updated: 2015/07/16 12:55:25 by rcouet           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);
int main(int argc, char **argv)
{
	int i;

	i = 1;
	if(argc == 1)
	{
		while(*argv[i] != '\0')
		{
			ft_putchar(*argv[i]);
			argv[i]++;
		}
			ft_putchar('\n');
	}
	return(0);
}
