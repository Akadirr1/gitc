/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aivenc <aivenc@student.42kocaeli.com.tr>               +#+  +:+   +#+*/
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 20:53:00 by aivenc     #+#    #+#             */
/*   Updated: 2025/02/24 22:45:00 by aivenc    ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_print_numbers(void)
{
	int	number;

	number = '0';
	while (number <= '9')
	{
		write(1, &number, 1);
		number++;
	}
}
