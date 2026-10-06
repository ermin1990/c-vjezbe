# Makefile za jednostavne C programe
# Pokretanje:
#   make        -> kompajlira program
#   make run    -> kompajlira i pokrene
#   make clean  -> briše izvršni fajl

CC      := clang
CFLAGS  := -Wall -Wextra -Werror -std=c11 -g
TARGET  := program
SRC     := main.c

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

.PHONY: run clean
