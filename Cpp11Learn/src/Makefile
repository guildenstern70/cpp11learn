  # Compiler
  CC = g++

  # Compiler Flags:
  CFLAGS  = -std=c++11 -Wall -fexceptions -g 

  # the build target executable:
  TARGET = cpp11learn
  
  # bin directory
  BIN = bin/
  
  default: all

  all: $(TARGET)

  $(TARGET): $(BIN) DefaultClass.o Containers.o main.o
	$(CC) $(CFLAGS) -o $(BIN)$(TARGET) $(BIN)DefaultClass.o $(BIN)Containers.o $(BIN)main.o
	
  DefaultClass.o: DefaultClass.cpp
	$(CC) $(CFLAGS) -c DefaultClass.cpp -o $(BIN)DefaultClass.o

  Containers.o: Containers.cpp
	$(CC) $(CFLAGS) -c Containers.cpp -o $(BIN)Containers.o
	
  main.o: main.cpp
	$(CC) $(CFLAGS) -c main.cpp -o $(BIN)main.o

  clean:
	$(RM) $(TARGET)
	
  $(BIN):
	mkdir -p $(BIN)
