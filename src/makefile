CC = gcc
CFLAGS = -Wall -Wextra -I

SRCS = calculator.c add.c sub.c mult.c div.c
OBJS = $(SRCS:.c=.o)
TARGET = JermCalculator

$(TARGET): $(OBJS)
    $(CC) $(CFLAGS) $^ -o $@

%.o: %.c
    $(CC) $(CFLAGS) -c $< -o $@

clean:

    rm -f $(OBJS) $(TARGET)
