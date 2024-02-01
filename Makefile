CC		=	g++
FLAGS	=	-std=c++20 -Wall -Wextra -lncurses

SRC		=	$(wildcard src/*.cpp src/ncurses/*.cpp)
OBJ		=	$(SRC:.cpp=.o)
NAME	=	mtop

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $^ -o $@ $(FLAGS)

%.o: %.cpp
	$(CC) -c $< -o $@ $(FLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
