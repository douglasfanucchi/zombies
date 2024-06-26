NAME=executable
FLAGS=-Wall -Wextra -Werror
FILES=Zombie.cpp
TEST_FILES:=tests.cpp asserts.cpp unit/Zombie.cpp unit/newZombie.cpp
TEST_FILES:=$(addprefix tests/, $(TEST_FILES))
COMPILER=c++

all: $(NAME)

$(NAME): $(FILES) main.cpp
	@$(COMPILER) -I . $(FLAGS) $(FILES) main.cpp -o $(NAME)

unit: $(TEST_FILES)
	@$(COMPILER) -I . -I ./tests -std=c++98 $(FLAGS) $(TEST_FILES) $(FILES) -o unit
	@./unit

clean:
	@rm -rf $(NAME)

re: clean all

.PHONY: unit