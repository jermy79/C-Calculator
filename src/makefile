CC = gcc
CFLAGS = -Wall -Wextra -std=c99

SRCS = add.c calculator.c div.c mult.c sub.c
OBJS = $(SRCS:.c=.o)
EXEC = calculator
all: $(EXEC)
$(EXEC): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(EXEC)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OBJS) $(EXEC)
