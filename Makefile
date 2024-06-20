NAME=executable
FLAGS=-Wall -Wextra -Werror
FILES=
TEST_FILES:=tests.cpp unit/asserts.cpp
TEST_FILES:=$(addprefix tests/, $(TEST_FILES))
COMPILER=c++

all: $(NAME)

$(NAME): $(FILES) main.cpp
	@$(COMPILER) -I . $(FLAGS) $(FILES) main.cpp -o $(NAME)

tests: $(TEST_FILES)
	@$(COMPILER) -I . -I ./tests $(FLAGS) $(TEST_FILES) -o $(NAME)

clean:
	@rm -rf $(NAME)

re: clean all

.PHONY: tests