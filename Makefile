CC      := g++

CFLAGS  := -W -Werror -Wall -Wextra -I./
LDFLAGS := -l sqlite3

BIN     := bin/axis

SRC :=  main.cpp \
        parse.cpp \
        store.cpp \
        vehicle.cpp

OBJ := $(patsubst %.cpp,%.o,$(SRC))

%.o: %.cpp
	$(CC) $(CFLAGS) -o $@ -c $<

all: $(OBJ)
	$(CC) $(CFLAGS) -o $(BIN) $(OBJ) $(LDFLAGS)

clean:
	$(RM) $(BIN) $(OBJ) $(BIN)/*.o

