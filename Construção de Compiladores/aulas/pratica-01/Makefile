
PROG=padroes

exec: 
	./${PROG}.exe

run: compilar
	./${PROG}.exe

compilar: clean scanner
	gcc ${PROG}.yy.c -o ${PROG}.exe -std=c89 -ll -lc -lm
	
scanner:
	flex --outfile=${PROG}.yy.c ${PROG}.l

clean:
	rm -f *.exe *.yy.c
