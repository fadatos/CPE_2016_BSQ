##
## Makefile for  in /home/exam/rendu/task02
## 
## Made by exam user
## Login   <exam@epitech.net>
## 
## Started on  Thu Nov 24 10:47:04 2016 exam user
## Last update Fri Jan  6 14:19:19 2017 albouy titouan
##

CC	=	gcc

NAME	=	bsq

SRC	=	my_putchar.c\
		my_putstr.c\
		my_strlen.c\
		my_put_nbr.c\
		my_getnbr.c\
		algo_bsq.c\
		algo_bsq2.c\
		read_and_valid_file.c\
		main.c\


OBJS	=	$(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: clean all fclean re
