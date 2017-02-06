/*
** algo_bsq2.c for  in /home/fadatos/B1_C_Prog_Elem/BSQ/Version_2_BSQ
** 
** Made by albouy titouan
** Login   <fadatos@epitech.net>
** 
** Started on  Sun Dec 18 23:09:01 2016 albouy titouan
** Last update Wed Dec 21 23:08:53 2016 albouy titouan
*/

#include "include/my.h"

int		put_xxx1(char *maps,t_square_struct  info, int k, int *tab)
{
  int           l;

  l = 1;
  while (k < info.pos_square)
    {
      if (l == info.value_square)
	{
	  k = k + info.size_ligne - info.value_square + 1;
	  l = 0;
	}
      maps[k + 1] = 'x';
      k = k + 1;
      l = l + 1;
    }
  return (0);
}

int	       	put_xxx(char *maps, t_square_struct info, int i, int *tab)
{
  int           p;
  int           k;

  p = 0;
  info.pos_square1 = info.pos_square;
  while (p < info.value_square)
    {
      k = info.pos_square - p * (info.size_ligne) - p - info.value_square + 1;
      maps[k] = 'x';
      p = p + 1;
    }
  put_xxx1(maps, info, k, tab);
  write(1, maps + info.size_number, my_strlen(maps) - (1 + info.end));
  //if (info.inter == 0)
  //my_putchar('\n');
  return (0);
}
int    		check_number(char *maps, t_square_struct info, int i, int *tab)
{
  info.value1 = tab[info.a - 1];
  info.value2 = tab[info.a - info.size_ligne];
  info.value3 = tab[info.a - (info.size_ligne + 1)];
  if (info.value1 < info.value2)
    info.value2 = info.value1;
  if (info.value2 < info.value3)
    info.value3 = info.value2;
  return (info.value3 + 1);
}

int    		first_col(char *maps, t_square_struct info, int i, int *tab)
{
  if (maps[i] == 'o')
    return (0);
  else if (info.coord_x == 0)
    return (1);
  else if (maps[i] == '.')
    return (check_number(maps, info, i, tab));
}
