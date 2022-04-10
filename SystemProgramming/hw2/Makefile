NAME	=	hw2.out
CC		=	gcc
CFLAGS	=	-Werror -Wall
SRC		=	hw2.c

OBJ		=	hw2.o

all		:	$(NAME)

.c.o	:	./hw2.c
			$(CC) -c $< -o $@

$(NAME)	:	$(OBJ)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

oclean	:
			rm -f $(OBJ)

clean	:	oclean
			rm -f $(NAME)

re		:	oclean all

.PHONY	: 	all clean oclean re