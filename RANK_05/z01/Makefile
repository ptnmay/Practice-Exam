CC = g++
NAME = ex
FLAG = -Wall -Werror -Wextra
SRC = main.cpp \
		Warlock.cpp \
		ASpell.cpp \
		ATarget.cpp \
		Fwoosh.cpp \
		Dummy.cpp

all :
	$(CC) $(FLAG) $(SRC) -o $(NAME)

clean :
	rm -rf $(NAME)

test : clean all
	./$(NAME) | cat -e