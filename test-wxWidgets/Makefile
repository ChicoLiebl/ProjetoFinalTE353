CC      := g++
INCLUDE := .
SRCS    := main.cpp

ifeq ($(OS),Windows_NT)
	EXE     := main.exe
	EXE_RUN := $(EXE)
else
	EXE     := main.o
	EXE_RUN := ./$(EXE)
endif

CFLAGS  := -I$(INCLUDE)
LDLIBS  := `wx-config --cxxflags --libs`

.PHONY: all run clean

all: build run

build:
	$(CC) $(CFLAGS) $(SRCS) $(LDLIBS) -o $(EXE)

run:
	$(EXE_RUN)

clean:
	rm $(EXE)