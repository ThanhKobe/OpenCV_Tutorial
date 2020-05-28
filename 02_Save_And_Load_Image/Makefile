CC = g++
CFLAGS = -g -Wall
SRCS = save_load_image.cpp
PROG = gray_image

OPENCV = `pkg-config opencv --cflags --libs`
LIBS = $(OPENCV)

$(PROG):$(SRCS)
	$(CC) $(CFLAGS) -o $(PROG) $(SRCS) $(LIBS)