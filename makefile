all: tokens grammar compiler cleanall

tokens: ./src/tokens.l
	@flex ./src/tokens.l

grammar: ./src/grammar.y
	@yacc -d ./src/grammar.y

compiler: lex.yy.c y.tab.c ./src/compiler_structs.c ./src/list.c 
	@cc lex.yy.c y.tab.c ./src/compiler_structs.c ./src/list.c -o compiler

cleanall:
	@rm lex.yy.c
	@rm y.tab.c
	@rm y.tab.h