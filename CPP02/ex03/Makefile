NAME = bsp
SRCS = main.cpp Fixed.cpp bsp.cpp Point.cpp
HEADERS = Fixed.hpp Point.hpp
COMPILE = c++ -Wall -Wextra -Werror -std=c++98

all: $(NAME)

bsp:
	$(COMPILE) $(SRCS) -o $(NAME)

clean:
	rm -f $(NAME)

fclean:	clean
	rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re bonus