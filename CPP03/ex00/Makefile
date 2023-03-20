NAME = claptrap
SRCS = main.cpp ClapTrap.cpp
HEADERS = ClapTrap.hpp
COMPILE = c++ -Wall -Wextra -Werror -std=c++98

all: $(NAME)

claptrap:
	$(COMPILE) $(SRCS) -o $(NAME)

clean:
	rm -f $(NAME)

fclean:	clean
	rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re bonus