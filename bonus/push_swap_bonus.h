/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_bonus.h                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wonhshin <wonhshin@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 00:16:39 by wonhshin          #+#    #+#             */
/*   Updated: 2023/05/19 00:22:19 by wonhshin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_BONUS_H
# define PUSH_SWAP_BONUS_H

# include "../mandatory/push_swap.h"

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

/* bonus_init */
int		ft_strncmp(const char *s1, const char *s2, size_t n);

/* gnl */
char	*ft_strjoin(char const *s1, char const *s2);
int		ft_strchr(char *str, int c);
char	*ft_substr(char const *s, int start, int len);
int		ft_strlen_g(const char *str);
char	*data_join(char **data, char *buf);
char	*setting_data(char *str);
char	*devide_line(char **data, int idx);
char	*size_is_zero(char **data, int idx);
char	*read_buf(int fd, char **data, char *buf, int size);
char	*get_next_line(int fd);

/* bonus_start */
void	process_commads(t_node **a, t_node **b, int size);
int		check_command(char *line, t_node **a, t_node **b);

#endif
