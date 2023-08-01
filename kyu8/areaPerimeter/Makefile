CC=gcc
LIBS=-lcriterion
TARGET=areaPerimeter

build: $(TARGET)

$(TARGET): $(TARGET).c
	$(CC) -o $(TARGET) $(TARGET).c $(LIBS)

clean:
	$(RM) $(TARGET)

.PHONY: run
run: $(TARGET)
	./$(TARGET)
