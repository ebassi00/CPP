NAME = span
SRCS = main.cpp Span.cpp
HEADERS = Span.hpp
COMPILE = c++ -Wall -Wextra -Werror -std=c++98

all: $(NAME)

span:
	$(COMPILE) $(SRCS) -o $(NAME)

clean:
	rm -f $(NAME)

fclean:	clean
	rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re bonus