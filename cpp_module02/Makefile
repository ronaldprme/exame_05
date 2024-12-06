NAME		= 	Spell

SOURCE		=	main.cpp Warlock.cpp ASpell.cpp ATarget.cpp Dummy.cpp Fwoosh.cpp BrickWall.cpp Fireball.cpp Polymorph.cpp SpellBook.cpp TargetGenerator.cpp

OBJECT		= 	$(SOURCE:.cpp=.o) 

COMPILE		= 	c++

FLAGS		= 	-Wall -Wextra -Werror -std=c++98


all: $(NAME)
$(NAME): $(OBJECT)
	$(COMPILE) $(FLAGS) $(OBJECT) -o $(NAME)

%.o: %.cpp
	$(COMPILE) $(FLAGS) -c $< -o $@

clean:
	rm -f $(OBJECT)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

