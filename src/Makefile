# Название исполняемого файла
TARGET = Program

# Компилятор
CC = gcc

# Общие флаги компиляции
CFLAGS = -Wall -Werror -Wextra -std=c11

# Исходные файлы
SRCS = main.c func.c

OBJ = $(SRCS:.c=.o)

# Цель по умолчанию - сборка с включением только второй функции
all: $(TARGET)

# Сборка программы на будущее
function2: CFLAGS += -DFF
function2: $(TARGET)

# Правило для сборки исполняемого файла
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

# Правило для компиляции объектного файла
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Очистка сборки
clean:
	rm -f $(OBJ) $(TARGET)

# Очистка сборки и создание новой
rebuild: clean all

# Псевдонимы
.PHONY: all function2 clean rebuild