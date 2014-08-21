CC=gcc
CFLAGS=-c
LDFLAGS=
SOURCES=main.c util.c
OBJECTS=$(SOURCES:.c=.o)
EXECUTABLE=string

all: $(SOURCES) $(EXECUTABLE)	

$(EXECUTABLE): $(OBJECTS) 
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@
.c.o:
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf *.o $(EXECUTABLE)
