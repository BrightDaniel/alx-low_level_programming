CC = gcc
SRC = main.c school.c
OBJ = $(SRC:.c=.o) 
NAME = school
RM = rm -f
CFLAGS = -Wall -Werror -Wextra -pedantic

all: $(OBJ)
	$(CC) $(CLFAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) *~ $(NAME)

oclean:
	$(RM) $(OBJ)

fclean: clean oclean

re: fclean all
