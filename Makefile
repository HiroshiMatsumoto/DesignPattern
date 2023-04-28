TARGET=test
MODULES=main.o
CPPFLAGS=-ansi -pedantic-errors -Wall -std=c++17

$(TARGET): $(MODULES)
	g++ $(MODULES) -o $(TARGET)

main.o: main.cpp

clean:
	rm *o test

run: $(TARGET)
	./$(TARGET)

all: test run
