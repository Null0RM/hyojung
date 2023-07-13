/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyojung <hyojung@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/14 16:38:32 by hyojung           #+#    #+#             */
/*   Updated: 2023/01/19 08:05:24 by hyojung          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) < 'A')
		{
			return (0);
		}
		else if (*(str + i) > 'Z')
		{
			if (*(str + i) < 'a')
			{
				return (0);
			}
		}
		else if (*(str + i) > 'z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}