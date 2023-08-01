CC=gcc
LIBS=-lcriterion
TARGET=summation

build: $(TARGET)

$(TARGET): $(TARGET).c
	$(CC) -o $(TARGET) $(TARGET).c $(LIBS)

clean:
	$(RM) $(TARGET)

.PHONY: run
run: $(TARGET)
	./$(TARGET)
