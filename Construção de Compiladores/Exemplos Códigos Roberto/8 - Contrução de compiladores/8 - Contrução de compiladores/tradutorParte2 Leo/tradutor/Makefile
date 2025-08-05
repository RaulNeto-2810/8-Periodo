#BKPNAME=$(date '+%Y-%m-%d')
COMPILEARGS =  -ll -std=c++11 -DYYDEBUG -Wno-free-nonheap-object -Wno-return-type -Wno-format-extra-args
#COMPILEARGS =  -ll -std=c++11 -DYYDEBUG -Wfree-nonheap-object -Wno-return-type

#PARSERPARAMS=-Wconflicts-sr
PARSERPARAMS=-t -d -v -Wconflicts-sr -Wconflicts-rr -Wno-other -Wno-counterexamples

all: compile traduzir

scanner:
	@flex --outfile=bin/lex.yy.c lexica.l

parser:
	@bison ${PARSERPARAMS} sintatica.y --output=bin/sintatica.tab.c

compile: clean parser scanner
	@g++ -o bin/tradutor.exe bin/sintatica.tab.c src/main.c ${COMPILEARGS}

clean: 
	@rm -rf bin/*

backup:
	tar -czvf bkp/`(date +%y-%m-%d-%H-%M-%S)`.tar.gz Makefile *.l *.y src/* headers/* exemplos/* 

traduzir:
	./bin/tradutor.exe exemplos/algoritmo_04.alg
