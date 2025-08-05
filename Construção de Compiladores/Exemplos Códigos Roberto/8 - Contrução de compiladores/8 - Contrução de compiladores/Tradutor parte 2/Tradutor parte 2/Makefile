#BKPNAME=$(date '+%Y-%m-%d')
COMPILEARGS =  -ll -std=c++11 -DYYDEBUG -Wno-free-nonheap-object -Wno-return-type

PARSERPARAMS=-t -d -v -Wconflicts-sr -Wconflicts-rr -Wno-other -Wno-counterexamples

all: compile traduzir

scanner:
	@flex --outfile=bin/lex.yy.c lexica.l

parser:
	@bison ${PARSERPARAMS} sintatica.y --output=bin/sintatica.tab.c

compile: clean parser scanner
	@g++ -o bin/tradutor.exe bin/sintatica.tab.c src/main.c ${COMPILEARGS}
	@rm -f *.o *.*

backup:
traduzir:
	./bin/tradutor.exe exemplos/algoritmo_03.alg

.PHONY: clean
clean:
	@mkdir -p bin/