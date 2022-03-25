NAME	=	program_assignment_1.out

CC		=	gcc
CFLAGS	=	-Werror -Wall
SRC		=	main.c

OBJ		=	main.o

all		:	$(NAME)

.c.o	:	./main.c
			$(CC) -c $< -o $@

$(NAME)	:	$(OBJ)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

oclean	:	
			rm -f $(OBJ)

clean	:	oclean
			rm -f $(NAME)

re		:	oclean all

.PHONY	: 	all clean oclean re
