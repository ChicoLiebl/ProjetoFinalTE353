CC      := g++
INCLUDE := .
SRCS    := main.cpp Animal.cpp Cachorro.cpp Gato.cpp Controle.cpp Usuario.cpp

ifeq ($(OS),Windows_NT)
	EXE     := main.exe
else
	EXE     := ./main.o
endif

CFLAGS  := -I$(INCLUDE)
LDLIBS  := ""

.PHONY: all run clean

all: build run

build:
	$(CC) $(CFLAGS) $(SRCS) -o $(EXE)

run:
	$(EXE)

clean:
	rm $(EXE)