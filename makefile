.PHONY: all grammar grammar_gen grammar_com com app build run clean clean_objs

CC=g++
NAME=rnbw
LIBS=-lantlr3c
FLAGS=-std=c++11 -Wall
CPPFILES=src/main.cpp src/clrs.cpp src/core.cpp src/arg_parser.cpp
FILES=src/main.cpp \
      src/clrs.cpp src/clrs.h \
      src/core.cpp src/core.h \
      src/arg_parser.cpp src/arg_parser.h
OBJS=main.o clrs.o core.o arg_parser.o

GRAMMAR_FILES=grammar/rnbwParser.c grammar/rnbwParser.h \
              grammar/rnbwLexer.c grammar/rnbwLexer.h
GRAMMAR_OBJS=grammar/rnbwParser.o grammar/rnbwLexer.o

all: grammar app

# grammar
grammar: grammar_gen grammar_com
grammar_gen:
	$(MAKE) -C $(shell pwd)/grammar generate
grammar_com:
	$(MAKE) -C $(shell pwd)/grammar compile

# app
com: $(CPPFILES)
	$(CC) $(FLAGS) -c $(CPPFILES)
build: $(FILES)
	$(CC) $(FLAGS) $(OBJS) $(GRAMMAR_OBJS) -o $(NAME) $(LIBS)
app: com build
run: all
	./rnbw

# files
arg_parser.o: src/arg_parser.cpp
	$(CC) $(FLAGS) -c src/arg_parser.cpp
core.o: src/core.cpp
	$(CC) $(FLAGS) -c src/core.cpp
main.o: src/main.cpp
	$(CC) $(FLAGS) -c src/main.cpp

clean_objs:
	rm *.o src/*.gch 2>&1 || true

clean: clean_objs
	rm rnbw *~ main.lst main.s a.out 2>&1 || true

# asm:
# 	g++ -S -g main.cpp -o main.s
# 	as -alhnd main.s > main.lst

