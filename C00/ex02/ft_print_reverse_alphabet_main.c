/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet_main.c                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edelarbr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 15:22:06 by edelarbr          #+#    #+#             */
/*   Updated: 2022/07/13 17:39:49 by edelarbr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
void ft_print_reverse_alphabet(void);
int main()
	{
		ft_print_reverse_alphabet();
	}
void ft_print_reverse_alphabet(void)
{
	write(1, &"zyxwvutsrqponmlkjihgfedcba", 26);
}
