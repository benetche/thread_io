COMPILER=g++

LIBRARY=-lraylib -lGL -lm -lpthread -ldl -lX11 -lXrandr -lXinerama -lXi -lXxf86vm -lXcursor -lrt

all:
	$(COMPILER) main.cpp -o main -O2 -Wall -Wno-missing-braces -I include/ -L lib/ $(LIBRARY)

