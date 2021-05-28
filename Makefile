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

clean:
	rm -f game
	rm -f *.o
	rm -f src/*.o
	rm -f src/tests/*.o


tests: 
	@make testIteration


testIteration: 
	@echo $(SEPARATION)"Begin test iteration on hex map\n"
	@cd ./src/tests && \
		$(CC) -g testMapIteration.c -o testMapIteration -Wall -Werror -lcunit && \
		valgrind --leak-check=full --show-leak-kinds=all ./testMapIteration && \
		rm ./testMapIteration 
	@echo "\nEnd test iteration on hex map\n"$(SEPARATION)

