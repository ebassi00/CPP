NAME = human
SRCS = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
COMPILE = c++ -Wall -Wextra -Werror -std=c++98

all: $(NAME)

human:
	$(COMPILE) $(SRCS) -o $(NAME)

clean:
	rm -f $(NAME)

fclean:	clean
	rm -f $(NAME)

re:			fclean all

.PHONY:		all clean fclean re bonus