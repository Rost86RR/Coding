CC = clang
CFLAGS = -Wall -Wextra -std=c99

# Заголовочные файлы — путь к cs50.h
INCLUDES = -I.

# Цели и соответствующие исходники
TARGETS = \
  day4/getInt \
  day4/hello \
  day4/printName \
  day5/getPositiveInt \
  day5/caugh

all: $(TARGETS)

# Правила компиляции
day4/getInt: day4/getInt.c cs50.h
	$(CC) $(CFLAGS) $(INCLUDES) day4/getInt.c -o day4/getInt

day4/hello: day4/hello.c cs50.h
	$(CC) $(CFLAGS) $(INCLUDES) day4/hello.c -o day4/hello

day4/printName: day4/printName.c cs50.h
	$(CC) $(CFLAGS) $(INCLUDES) day4/printName.c -o day4/printName

day5/getPositiveInt: day5/getPositiveInt.c cs50.h
	$(CC) $(CFLAGS) $(INCLUDES) day5/getPositiveInt.c -o day5/getPositiveInt

day5/caugh: day5/caugh.c cs50.h
	$(CC) $(CFLAGS) $(INCLUDES) day5/caugh.c -o day5/caugh	

# Очистка
clean:
	rm -f day4/getInt day4/hello day4/printName day5/getPositiveInt
