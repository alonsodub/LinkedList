OBJS  := main.o
CC    := gcc
DEBUG := -g
CFLAGS:= -Wall -c $(DEBUG)

main: $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o main


clean:
	rm -f *.o main
