NAME = convert
SRCS = main.cpp
HEADERS =
COMPILE = c++ -Wall -Wextra -Werror -std=c++98

all: $(NAME)

convert:
	$(COMPILE) $(SRCS) -o $(NAME)

clean:
	rm -f $(NAME)

fclean:	clean
	rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re bonus