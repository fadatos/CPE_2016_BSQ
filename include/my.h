/*
** my.h for my.h in /home/fadatos/B1_C_Prog_Elem/BSQ/include
**
** Made by albouy titouan
** Login   <fadatos@epitech.net>
**
** Started on  Mon Dec  5 15:10:45 2016 albouy titouan
** Last update Wed Dec 21 23:05:37 2016 albouy titouan
*/

#ifndef MY_H_
# define MY_H_
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct	s_square_struct
{
  int           size_number;
  int           size_maps;
  int		size_ligne;
  int		number_ligne;
  int		a;
  int		n;
  int		inter;
  int		end;
  int		value_square;
  int		pos_square1;
  int		pos_square;
  int		ligne_square;
  int		value1;
  int		value2;
  int		value3;
  int		coord_x;
  int		coord_y;
  int		*tab;
}		t_square_struct;

struct stat	info;

int		main(int ac,char **av);
int		read_file(char *file);
int		check_valid_maps(char *maps, int count);
int		my_strlen(char *str);
int		my_getnbr(char *str);
int		my_put_nbr(int nb);
int		my_strlen(char *str);
void		my_putchar(char c);
void		my_putstr(char *str);
void		my_putstr_error(char *str);
int		check_n(char c);
int		check_p(char c);
int		check_0(char c);
int		initialisation_bsq(char *maps, int size_ligne, int number_ligne);
int		put_xxx(char *maps, t_square_struct info, int i, int *tab);
int		put_xxx1(char *maps,t_square_struct  info, int k, int *tab);
int		check_number(char *maps, t_square_struct info, int i, int *tab);
int		first_col(char *maps, t_square_struct info, int i, int *tab);

#endif /* !MY_H_ */
