all:main
BUILD_DIR = build
SOURCE_DIR = src
TEST_DIR = tests
CFLAGS = -g -Wall -Wextra -Wpedantic 

main:$(BUILD_DIR)/func.o $(BUILD_DIR)/test.o
		clang++ -o main $(CFLAGS) $(BUILD_DIR)/test.o $(BUILD_DIR)/func.o -lgtest_main -lgtest -lpthread

$(BUILD_DIR)/test.o: $(SOURCE_DIR)/func.cpp $(TEST_DIR)/test.cpp $(SOURCE_DIR)/func.h
		clang++ -c $(CFLAGS) $(TEST_DIR)/test.cpp -o $(BUILD_DIR)/test.o 

$(BUILD_DIR)/func.o: $(SOURCE_DIR)/func.cpp $(SOURCE_DIR)/func.h
		clang++ -c $(CFLAGS) $(SOURCE_DIR)/func.cpp -o $(BUILD_DIR)/func.o

test:$(BUILD_DIR)/test.o $(BUILD_DIR)/func.o
		clang++ $(CFLAGS)  $(BUILD_DIR)/func.o $(BUILD_DIR)/test.o -o test -lgtest_main -lgtest -lpthread
		./test
clean:
		rm $(BUILD_DIR)/*.o

.PHONY: all clean 