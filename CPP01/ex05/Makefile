NAME = harl
SRCS = main.cpp Harl.cpp
COMPILE = c++ -Wall -Wextra -Werror -std=c++98

all: $(NAME)

harl:
	$(COMPILE) $(SRCS) -o $(NAME)

clean:
	rm -f $(NAME)

fclean:	clean
	rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re bonus