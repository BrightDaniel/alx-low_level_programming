CC = gcc
SRC = main.c school.c
OBJ = $(SRC:.c=.o) 
NAME = school
RM = rm -f

all: $(OBJ)
	$(CC) $(OBJ) -o $(NAME)

clean:
	$(RM) *~ $(NAME)

oclean:
	$(RM) $(OBJ)

fclean: clean oclean

re: fclean all
