CC=gcc
CFLAGS=-c
LDFLAGS=
SOURCES=main.c func.c
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=pointer

all: $(SOURCES) $(EXECUTABLE)	

$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@
.c.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf *.o $(EXECUTABLE)
