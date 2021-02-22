CC	=	gcc

SRC	=	main.c	\
		./src/linked.c \
		./src/sort.c

CFLAG	=	-W -Wall -Werror -Wextra -pedantic -g3

LFLAG	=	-L./lib/my -lmy

FILE	=	-I./includes

NAME	=	push_swap

all: build

build:
	make -C ./lib/my
	$(CC) -o $(NAME) $(SRC) $(CFLAG) $(LFLAG) $(FILE)

clean:
	make -C ./lib/my
	rm -f *.o
	rm -f *.c~

fclean:	clean
	make fclean -C ./lib/my
	rm -f $(NAME)

re: fclean all