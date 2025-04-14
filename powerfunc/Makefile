all:main
BUILD_DIR = build
SOURCE_DIR = src
TESTS_DIR = test
INCLUDE_DIR = include
CFLAGS = -g -Wall -Wextra -Wpedantic -Isrc -Iinclude -Itest

main:$(BUILD_DIR)/main.o $(BUILD_DIR)/test.o
		clang++ -o main $(CFLAGS) $(BUILD_DIR)/test.o $(BUILD_DIR)/main.o -lgtest_main -lgtest -lpthread

$(BUILD_DIR)/test.o: $(SOURCE_DIR)/main.cpp $(TESTS_DIR)/test.cpp $(INCLUDE_DIR)/func.h
		clang++ -c $(CFLAGS) $(TESTS_DIR)/test.cpp -o $(BUILD_DIR)/test.o 

$(BUILD_DIR)/main.o: $(SOURCE_DIR)/main.cpp $(INCLUDE_DIR)/func.h
		clang++ -c $(CFLAGS) $(SOURCE_DIR)/main.cpp -o $(BUILD_DIR)/main.o


tests:$(BUILD_DIR)/test.o $(BUILD_DIR)/main.o
		clang++ $(CFLAGS) $(BUILD_DIR)/main.o $(BUILD_DIR)/test.o -o tests -lgtest_main -lgtest -lpthread
		./tests
clean:
		rm $(BUILD_DIR)/*.o

.PHONY: all clean 