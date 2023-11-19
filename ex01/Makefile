NAME = phonebook
SRC = main.cpp Contact.cpp PhoneBook.cpp
OBJ = ${SRC:.cpp=.o}
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98

.SILENT:
all : ${NAME}

${NAME} : ${OBJ}
	${CC} ${CFLAGS} ${OBJ} -o ${NAME}
	@echo "\033[1;7;32mSuccessfully compiled $(NAME)!\033[0m"

clean:
	rm -rf $(OBJ)
	@echo "\033[1;9;7;31mCleaning up...!\033[0m"

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : all clean fclean re
