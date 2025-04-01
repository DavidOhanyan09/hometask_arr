all:main
BUILD_DIR = build
SOURCE_DIR = src
CFLAGS = -g -Wall -Wextra -Wpedantic 

main:$(BUILD_DIR)/subf.o $(BUILD_DIR)/testsub.o
		clang++ -o main $(CFLAGS) $(BUILD_DIR)/testsub.o $(BUILD_DIR)/subf.o -lgtest_main -lgtest -lpthread

$(BUILD_DIR)/testsub.o: $(SOURCE_DIR)/subf.cpp $(SOURCE_DIR)/testsub.cpp $(SOURCE_DIR)/subf.h
		clang++ -c $(CFLAGS) $(SOURCE_DIR)/testsub.cpp -o $(BUILD_DIR)/testsub.o 

$(BUILD_DIR)/subf.o: $(SOURCE_DIR)/subf.cpp $(SOURCE_DIR)/subf.h
		clang++ -c $(CFLAGS) $(SOURCE_DIR)/subf.cpp -o $(BUILD_DIR)/subf.o

test:$(BUILD_DIR)/testsub.o $(BUILD_DIR)/subf.o
		clang++ $(CFLAGS) $(BUILD_DIR)/subf.o $(BUILD_DIR)/testsub.o -o test -lgtest_main -lgtest -lpthread
		./test
clean:
		rm $(BUILD_DIR)/*.o

.PHONY: all clean 