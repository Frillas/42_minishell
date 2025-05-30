/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   builtins_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncontin <ncontin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 14:03:23 by ncontin           #+#    #+#             */
/*   Updated: 2025/05/05 17:30:02 by ncontin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

void	print_env(t_env *env_stack)
{
	t_env	*current;

	if (env_stack == NULL)
		return ;
	current = env_stack;
	while (current)
	{
		if (current->key && current->value != NULL)
			printf("%s", current->key);
		if (current->value)
		{
			printf("=%s", current->value);
			printf("\n");
		}
		current = current->next;
	}
}

int	find_equal(char *str)
{
	int	i;

	if (!str)
		return (-1);
	i = 0;
	while (str[i])
	{
		if (str[i] == '=')
			return (i);
		i++;
	}
	return (-1);
}

char	*get_key(char *str, int *err_code)
{
	char	*key;
	int		equal_index;

	equal_index = find_equal(str);
	if (str[equal_index - 1] && str[equal_index - 1] == '+')
		equal_index -= 1;
	key = ft_substr(str, 0, equal_index);
	if (key == NULL)
	{
		*err_code = 1;
		write(STDERR_FILENO, "get key memory allocation failed\n", 33);
	}
	return (key);
}

char	*get_value(char *str, int *err_code)
{
	char	*value;
	int		equal_index;

	equal_index = find_equal(str);
	if (str[equal_index] == '\0')
		return (NULL);
	value = ft_substr(str, equal_index + 1, ft_strlen(str) - (equal_index + 1));
	if (value == NULL)
	{
		*err_code = 1;
		write(STDERR_FILENO, "get value memory allocation failed\n", 35);
	}
	return (value);
}

int	find_min_len(char *s1, char *s2)
{
	int	s1_len;
	int	s2_len;
	int	len;

	s2_len = ft_strlen(s2);
	s1_len = ft_strlen(s1);
	if (s1_len < s2_len)
		len = s1_len;
	else
		len = s2_len;
	return (len);
}
