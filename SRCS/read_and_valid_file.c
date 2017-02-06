/*
** read_file.c for  in /home/fadatos/B1_C_Prog_Elem/BSQ
** 
** Made by albouy titouan
** Login   <fadatos@epitech.net>
** 
** Started on  Mon Dec  5 15:23:48 2016 albouy titouan
** Last update Sun Dec 18 23:35:19 2016 albouy titouan
*/

#include "include/my.h"
#include "stdio.h"

int		check_valid_maps3(char *maps, int count_char, int count, int number_ligne)
{
  int		size_ligne;

  size_ligne = 0;
  while (maps[count] != '\n')
    count = count + 1;
  count = count + 1;
  while (maps[count] != '\0')
    {
      while (maps[count] != '\n')
	{
	  count = count + 1;
	  count_char = count_char + 1;
	}
      if (size_ligne == 0)
	size_ligne = count_char;
      if (size_ligne == count_char)
	{
	  count_char = 0;
	  count = count + 1;
	}
      else
	return (84);
    }
  return (initialisation_bsq(maps, size_ligne, number_ligne));
}

  int		check_valid_maps2(char *maps, int count, int check_ligne)
  {
    int		number_ligne;
    char       	*number_ligne_char;

    number_ligne_char = malloc(sizeof(char) * my_strlen(maps) + 1);
    if (number_ligne_char == NULL)
      return (84);
    while (maps[count] != '\n')
      {
	number_ligne_char[count] = maps[count];
	count = count + 1;
      }
    number_ligne_char[count] = '\0';
    number_ligne = my_getnbr(number_ligne_char);
    count = count + 1;
    while (maps[count] != '\0')
      {
	if (maps[count] == '\n')
	  check_ligne = check_ligne + 1;
	count = count + 1;
      }
    if (check_ligne == number_ligne)
      return (check_valid_maps3(maps, 0, 0, check_ligne));
    else
      {
	my_putstr_error("ERROR 2: Invalid number ligne\n");
	return (84);
      }
  }

  int		check_valid_maps1(char *maps, int count)
  {
    while (maps[count] != '\n')
      {
	if (maps[count] >= '0' && maps[count] <= '9')
	  count = count + 1;
	else
	  {
	    my_putstr_error("ERROR 1: Invalid number ligne\n");
	    return (84);
	  }
      }
    while (maps[count] != '\0')
      {
	if (maps[count] == '.' || maps[count] == 'o' || maps[count] == '\n')
	  count = count + 1;
	else
	  {
	    my_putchar(maps[count]);
	    my_put_nbr(maps[count]);
	    my_putstr_error("ERROR 3: Invalid charactere maps\n");
	    return (84);
	  }
      }
    return (check_valid_maps2(maps, 0, 0));
  }

  int			read_file(char *file)
  {
    struct stat		info;
    char		*buffer;
    int			size;
    int			fd;

    stat(file, &info);
    size = (info.st_size);
    buffer = malloc(sizeof (char) * (size + 1));
    if (buffer == NULL)
      exit (84);
    fd = open(file, O_RDONLY);
    read(fd, buffer, size);
    return (check_valid_maps1(buffer, 0));
  }
