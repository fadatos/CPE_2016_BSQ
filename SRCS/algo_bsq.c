/*
** algo_BSQ.c for  in /home/fadatos/B1_C_Prog_Elem/BSQ
**
** Made by albouy titouan
** Login   <fadatos@epitech.net>
**
** Started on  Sat Dec 10 12:03:07 2016 albouy titouan
** Last update Tue Jan 17 16:53:00 2017 albouy titouan
*/

#include "include/my.h"

int			tab_int3(char *maps, t_square_struct info, int i, int *tab)
{
  while (maps[i] != '\0')
    {
      if (maps[i] == '\n')
	{
	  i = i + 1;
	  info.coord_y = info.coord_y + 1;
	  if (info.coord_y == info.number_ligne)
	    {
	      put_xxx(maps, info, i, tab);
	      return (0);
	    }
	  info.coord_x = 0;
	}
      tab[info.a] = first_col(maps, info, i, tab);
      if (tab[info.a] > info.value_square)
	{
	  info.value_square = tab[info.a];
	  info.pos_square = i;
	  info.ligne_square = info.coord_y;
	  info.inter = 1;
	}
      i = i + 1;
      info.a = info.a + 1;
      info.coord_x = info.coord_x + 1;
    }
  return (0);
}

int			tab_int2(char *maps, t_square_struct info, int i, int *tab)
{
  while (maps[i] != '\n')
    {
      if (maps[i] == '.')
	  tab[info.a] = 1;
      if (maps[i] == 'o')
	  tab[info.a] = 0;
      if (tab[info.a] > info.value_square)
	{
	  info.value_square = tab[info.a];
	  info.pos_square = i;
	  info.ligne_square = info.coord_y;
	}
      i = i + 1;
      info.a++;
      info.coord_x = info.coord_x + 1;
    }
  return (tab_int3(maps, info, i, tab));
}

int			tab_int1(char *maps, t_square_struct info)
{
  int                   i;
  int                   *tab;

  info.a = 0;
  i = 0;
  while (maps[i] != '\n')
    i = i + 1;
  info.end = i;
  i = i + 1;
  info.size_number = i;
  tab = malloc(sizeof(int) * (info.size_maps + 1));
  if (tab == NULL)
    return (84);
  tab_int2(maps, info, i, tab);
  return (0);
}


int			initialisation_bsq(char *maps, int size_ligne, int number_ligne)
{
  t_square_struct	info;
  int			*tab;

  info.size_ligne = size_ligne;
  info.number_ligne = number_ligne;
  info.coord_x = 0;
  info.coord_y = 0;
  info.size_maps = my_strlen(maps);
  info.value_square = 0;
  info.ligne_square = 0;
  info.pos_square = 0;
  info.inter = 0;
  return (tab_int1(maps, info));
}
