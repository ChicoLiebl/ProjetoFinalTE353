CC      := g++
INCLUDE := .
SRCS    := main.cpp Animal.cpp Cachorro.cpp Gato.cpp Controle.cpp Usuario.cpp IdAnimal.cpp IdUsuario.cpp
EXE     := main.exe
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