NAME = bureaucrat
SRCS = main.cpp Bureaucrat.cpp
HEADERS = Bureaucrat.hpp
COMPILE = c++ -Wall -Wextra -Werror -std=c++98

all: $(NAME)

bureaucrat:
	$(COMPILE) $(SRCS) -o $(NAME)

clean:
	rm -f $(NAME)

fclean:	clean
	rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re bonus