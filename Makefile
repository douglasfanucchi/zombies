NAME=executable
HORDE=horde
FLAGS=-Wall -Wextra -Werror
FILES=Zombie.cpp newZombie.cpp randomChump.cpp
TEST_FILES:=tests.cpp asserts.cpp unit/Zombie.cpp unit/newZombie.cpp
TEST_FILES:=$(addprefix tests/, $(TEST_FILES))
COMPILER=c++

all: $(NAME)

$(NAME): $(FILES) main.cpp
	@$(COMPILER) -I . $(FLAGS) $(FILES) main.cpp -o $(NAME)

$(HORDE): $(FILES) horde.cpp
	@$(COMPILER) -I . $(FLAGS) $(FILES) horde.cpp -o $(HORDE)

test_horde: $(HORDE)
	@./tests/e2e/Horde.sh $(realpath $(HORDE))

unit: $(TEST_FILES)
	@$(COMPILER) -I . -I ./tests -std=c++98 $(FLAGS) $(TEST_FILES) $(FILES) -o unit
	@valgrind --leak-check=full -q ./unit

e2e: $(NAME)
	@./tests/e2e/Zombie.sh $(realpath $(NAME))

clean:
	@rm -rf $(NAME)

re: clean all

.PHONY: unit