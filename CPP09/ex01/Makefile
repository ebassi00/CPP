NAME = RPN
SRCS = main.cpp RPN.cpp
HEADERS = RPN.hpp
COMPILE = c++ -Wall -Wextra -Werror -std=c++98

all: $(NAME)

RPN:
	$(COMPILE) $(SRCS) -o $(NAME)

clean:
	rm -f $(NAME)

fclean:	clean
	rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re bonus