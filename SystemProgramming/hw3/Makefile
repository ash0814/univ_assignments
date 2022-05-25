TARGET	=	hw3.out
CC		=	gcc
CFLAGS	=	-Werror -Wextra
SRC		=	hw3.c
OBJ		=	hw3.o

$(TARGET)	:	$(OBJ)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

hw3.o		:	hw3.c
	$(CC) $(CFALGS) -c $(SRC)


clean	:
			@rm -f $(OBJ)
			@rm -f $(TARGET)
