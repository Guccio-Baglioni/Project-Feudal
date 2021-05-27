CC= gcc -std=gnu99
LPTHREAD= -lpthread
INCLUDE_HEADERS_DIRECTORY=-Iheaders

SEPARATION="\n_____________________________________________________________________________________________________________________________________________\n\n\n"



SRC = $(wildcard main.c src/*.c)
OBJ = $(SRC:.c=.o)


game: $(OBJ)
	$(CC) $(INCLUDE_HEADERS_DIRECTORY) -o $@ $^ $(LPTHREAD)

%.o: %.c               
	$(CC) $(INCLUDE_HEADERS_DIRECTORY) -o $@ -c $<



tests: 
	@make testIteration


testIteration: 
	@echo $(SEPARATION)"Begin test iteration on hex map\n"
	@cd ./src/tests && \
		$(CC) -g testHexMapIteration.c -o testHexMapIteration -Wall -Werror -lcunit && \
		valgrind --leak-check=full --show-leak-kinds=all ./testHexMapIteration && \
		rm ./testHexMapIteration 
	@echo "\nEnd test iteration on hex map\n"$(SEPARATION)

