#
# Ref.: http://dinosaur.compilertools.net/bison/bison_5.html
#

PROJ=calculadora
EXE=$(PROJ)

exec:
	./$(EXE)

run: clean parser scanner compile
	./$(EXE)

all: clean parser scanner
	gcc -o $(EXE) $(PROJ).tab.c lex.yy.c -lm -ll -std=c89

compile: parser scanner
	gcc -o $(EXE) $(PROJ).tab.c lex.yy.c -lm -ll -std=c89

parser:
	bison -d -v $(PROJ).y # -Wcounterexamples

scanner:
	flex $(PROJ).l 

clean:
	rm -f $(EXE) \
          lex.yy.c \
          $(PROJ).output \
          $(PROJ).tab.c \
          $(PROJ).tab.h

zip:
	tar -czvf `(date +%y-%m-%d-%H-%M-%S)`.tar.gz Makefile ${PROJ}.l ${PROJ}.y 

