NAME = Intern

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

GREEN = \033[1;33m
RESET = \033[0m

SRC = 	main.cpp\
		Bureaucrat.cpp\
		AForm.cpp\
		PresidentialPardonForm.cpp\
		RobotomyRequestForm.cpp\
		ShrubberyCreationForm.cpp\
		Intern.cpp

OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME) : $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	@echo "$(GREEN) Compiling: $< $(RESET)"
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@rm -rf $(OBJ)

fclean: clean
	@rm -rf $(NAME)
	@echo "$(GREEN)\nIntern Objects Deleted!\n$(RESET)"

re: fclean all

.PHONY: all clean fclean re
