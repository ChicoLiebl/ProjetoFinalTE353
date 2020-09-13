CC      := g++
INCLUDE := .
SRCS    := main.cpp Animal.cpp Cachorro.cpp Gato.cpp Controle.cpp Usuario.cpp IdUsuario.cpp

ifeq ($(OS),Windows_NT)
	EXE     := main.exe
else
	EXE     := ./main.o
endif

CFLAGS  := -std=c++11 -I$(INCLUDE)
LDLIBS  := ""

.PHONY: all run clean

all: build run

build:
	$(CC) $(CFLAGS) $(SRCS) -o $(EXE)

run:
	$(EXE)

clean:
	rm $(EXE)