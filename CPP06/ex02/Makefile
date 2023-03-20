NAME = identify
SRCS = main.cpp Classes.cpp
HEADERS = Classes.hpp
COMPILE = c++ -Wall -Wextra -Werror -std=c++98

all: $(NAME)

identify:
	$(COMPILE) $(SRCS) -o $(NAME)

clean:
	rm -f $(NAME)

fclean:	clean
	rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re bonus