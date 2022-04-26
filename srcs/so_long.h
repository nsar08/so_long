/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nsar <marvin@42lausanne.ch>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/02 14:33:21 by nsar              #+#    #+#             */
/*   Updated: 2022/04/08 14:46:01 by nsar             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SO_LONG_H
# define SO_LONG_H

# include "../others/printf/includes/ft_printf.h"
# include "../others/libft/libft.h"
# include "../mlx/mlx.h"
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>
# include <stdint.h>
# include <stdbool.h>
# include <limits.h>
# include <string.h>

# define TEXT_ERROR_MAP_NUM "La map ne marche pas!\n"
# define TEXT_ERROR_MAP_NAME "Le fichier de la map n'est pas bon!\n"
# define TEXT_ERROR_PLAYER "Naruto is gone!\n"
# define TEXT_ERROR_COLLEC "Where is the food?\n"
# define TEXT_ERROR_ENNEMI "Where is my ennemy?\n"
# define TEXT_ERROR_EXIT "Where is the exit!\n"
# define TEXT_ERROR "Error\n"
# define TEXT_START "Mange les ramens!!\n"
# define TEXT_TITRE "NARUTO"
# define ERROR_ARG "Pas assez d'arguments\n"
# define ERROR_STRCAT "error ft_strcat\n"
# define ERROR_ITEM "item invalide\n"

typedef struct s_player
{
	int	x;
	int	y;
}	t_player;

typedef struct s_ennemi
{
	int	exist;
	int	x;
	int	y;
	int	x_restart;
	int	y_restart;
	int	move;
}	t_ennemi;

typedef struct s_ready
{
	int	player;
	int	coin;
	int	end;
}	t_ready;

typedef struct s_img
{
	void	*tile;
	void	*wall;
	void	*player_w1;
	void	*player_w2;
	void	*player_a1;
	void	*player_a2;
	void	*player_s1;
	void	*player_s2;
	void	*player_d1;
	void	*player_d2;
	void	*coin1;
	void	*end;
	void	*end2;
	void	*scoreboard;
	void	*endscreen;
	void	*winscreen;
}	t_img;

typedef struct s_info
{
	void		*mlx;
	void		*win;
	t_img		img;
	int			movement;
	int			start;
	int			coins;
	t_player	player;
	t_ennemi	ennemi;
	char		**map;
	int			map_height;
	int			map_width;
	int			exit_x;
	int			exit_y;
	int			ended;
	int			argc;
	char		**argv;
}	t_info;

# define KEY_PRESS 2
# define KEY_EXIT 17
# define KEY_ESC 53
# define KEY_W 13
# define KEY_A 0
# define KEY_S 1
# define KEY_D 2
# define KEY_B 11

void	check_char(t_info *info, int i, int j);
void	init_ready(t_ready *ready);
void	check_equipped(t_info *info, int i, int j, t_ready *ready);
void	check_ready(t_ready ready);
void	check_map(t_info *info);
void	draw_player1(t_info *info, int x, int y, int keycode);
void	draw_player2(t_info *info, int x, int y, int keycode);
void	draw_player(t_info *info, int keycode);
char	*ft_first(char c, int i);
int		ft_strcat(char **str, char c);
int		get_next_line(int fd, char **line);
void	draw_map(t_info *info);
void	init(t_info *info, char *file);
void	move_player(t_info *info, int keycode);
int		deal_key(int keycode, t_info *info);
void	deal_key_2(int keycode, t_info *info);
void	deal_key_3(int keycode, t_info *info);
void	deal_key_4(int keycode, t_info *info);
void	draw_tile(t_info *info, int x, int y);
void	draw_wall(t_info *info, int x, int y);
void	draw_coin(t_info *info, int x, int y);
void	draw_end(t_info *info, int x, int y);
void	draw_end2(t_info *info, int x, int y);
void	draw_img(t_info *info, int i, int j);
void	draw_img_trop_longue(t_info *info, int i, int j);
void	draw_scoreboard(t_info *info, int i, int j);
int		linecount(char *file);
char	**malloc_height(t_info *info, char *file);
void	init(t_info *info, char *file);
void	readmap(t_info *info, char *file);
int		check_end(int keycode, t_info *info);
int		check_coin(int keycode, t_info *info);
int		is_wall_or_end(t_info *info, int x, int y);
int		check_wall(int keycode, t_info *info);
void	load_images(t_info *info, int img_width, int img_height);
void	load_images2(t_info *info, int img_width, int img_height);
void	check_images(t_info *info);
int		ft_close(t_info *info);
int		is_valid_char(char c);
void	game(int argc, char **argv);
void	move_player2(t_info *info, int keycode);
void	check_images2(t_info *info);
void	check_images3(t_info *info);

#endif
