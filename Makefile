# Compiler and flags
CXX := g++
CXXFLAGS := -std=c++17 -Wall -Wextra -Iinclude

# Make sure to uncomment all test lines once done with them

# Directories
SRC_DIR := src
#TEST_DIR := tests
BIN_DIR := bin

# Files
SRC := $(wildcard $(SRC_DIR)/*.cpp)
TESTS := $(wildcard $(TEST_DIR)/test_*.cpp)

# Executables
MAIN_EXEC := $(BIN_DIR)/main
#TEST_EXECS := $(patsubst $(TEST_DIR)/%.cpp,$(BIN_DIR)/%,$(TESTS))

# Default build target
all: $(MAIN_EXEC) $(TEST_EXECS)

# Main program
$(MAIN_EXEC): main.cpp $(SRC) | $(BIN_DIR)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Individual tests (uncomment once done writing)
#$(BIN_DIR)/%: $(TEST_DIR)/%.cpp $(SRC) | $(BIN_DIR)
#	$(CXX) $(CXXFLAGS) -o $@ $^

# Make bin directory if it doesn't exist
$(BIN_DIR):
	mkdir -p $(BIN_DIR)

# Clean builds
clean:
	rm -rf $(BIN_DIR)
