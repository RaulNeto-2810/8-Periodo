#PROG=hello
PROG=lista
#PROG=lista-duplamente-ligada
#PROG=arquivos

run: compilar
#	./$(PROG).exe 90 81 78 95 79 72 85
	./bin/$(PROG).exe
	
compilar: clean
	gcc $(PROG).c -o bin/$(PROG).exe -g -Wall -pthread -lpthread -std=c89
	
clean:
	rm -f bin/*
	
