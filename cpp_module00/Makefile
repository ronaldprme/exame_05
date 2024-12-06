
NAME		= Warlock

SOURCE		= main.cpp \
				Warlock.cpp
OBJECT		= $(SOURCE:.cpp=.o)

COMPILER	= g++

FLAGS		= -Wall -Wextra -Werror -std=c++98

RESETER		= \033[0m
GREEN		= \033[38;5;46m

all: $(NAME)

%.o: %.cpp
	@echo "Compiling....$<"
	@$(COMPILER) $(FLAGS) -c $< -o $@

$(NAME): $(OBJECT)
	@$(COMPILER) $(FLAGS) $(OBJECT) -o $(NAME)

clean:
	@/bin/rm -f $(OBJECT)

fclean: clean
	@/bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re