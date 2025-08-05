# Flags de compilação
COMPILEARGS = -ll -std=c++11 -g -DYYDEBUG -Wall -Wextra -Wno-free-nonheap-object -Wno-return-type

# Flags do Bison
PARSERPARAMS = -t -d -v -Wconflicts-sr -Wconflicts-rr

# Caminhos
LEX_OUTPUT = bin/lex.yy.c
BISON_OUTPUT = bin/sintatica.tab.c
EXECUTABLE = bin/tradutor.exe
ERROR_LOG = bin/errors.log

all: compile traduzir depuracao-linha-a-linha
scanner:
	@echo "Scanner..."
	@lex --outfile=$(LEX_OUTPUT) lexica.l

parser:
	@echo "Parser..."
	@bison $(PARSERPARAMS) sintatica.y --output=$(BISON_OUTPUT)

compile: clean parser scanner
	@echo "Compilando..."
	@rm -f $(ERROR_LOG)
	@g++ -o $(EXECUTABLE) $(BISON_OUTPUT) src/main.c $(COMPILEARGS) 2> $(ERROR_LOG) || echo "Erros encontrados! Veja $(ERROR_LOG)"
	@cat $(ERROR_LOG)

clean:
	@echo "Limpando..."
	@rm -rf bin/*

backup:
	@echo "Fazendo backup..."
	@mkdir -p bkp
	@tar -czvf bkp/`(date +%y-%m-%d-%H-%M-%S)`.tar.gz Makefile *.l *.y src/* headers/* exemplos/* 

traduzir:
	@echo "Traduzindo..."
	@./$(EXECUTABLE) exemplos/algoritmo_02.alg || echo "Erro ao executar o tradutor!"

depuracao-linha-a-linha:
	@echo "Iniciando depuração linha a linha..."
	@gdb ./$(EXECUTABLE) -ex "break src/main.c:10" -ex "run"