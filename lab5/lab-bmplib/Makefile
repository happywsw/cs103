# contact: Mark Redekopp, David Pritchard

CC = clang++
CFLAGS = -g -Wall
LDFLAGS =
SRCS = shapes.cpp bmplib.cpp
OBJ = $(SRCS:.cpp=.o)
DEMOSRC = demo.cpp bmplib.cpp
DEMOOBJ = $(DEMOSRC:.cpp=.o)

# this is for CS 103 at USC specifically.
# bash doesn't expand aliases. patch student machine. prefer 'compile'.
ifeq ("$(wildcard /bin/compile)","")
ifneq ("$(wildcard ~/.compile.py)","")
PATCH = sudo cp ~/.compile.py /bin/compile; sudo chmod a+x /bin/compile
CC = compile
CFLAGS = 
endif
else
CC = compile
CFLAGS = 
endif

all: shapes demo

demo: $(DEMOOBJ)
	$(PATCH)
	$(CC) $(CFLAGS) $(DEMOOBJ) -o demo

shapes: $(OBJ)
	$(PATCH)
	$(CC) $(CFLAGS) $(OBJ) -o shapes

.cpp.o:
	$(PATCH)
	$(CC) $(CFLAGS) -c $<

bmplib.o : bmplib.h

clean:
	rm -f *.o shapes *~

