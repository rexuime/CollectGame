# ─── Compiler and Flags ─────────────────────────────────────────
CXX := g++
CXXFLAGS := -std=c++17 -Wall -Wextra -Iinclude -ID:/Coding/Libraries/SFML/include

# ─── Directories ────────────────────────────────────────────────
SRC_DIR := src
# TEST_DIR := tests
BIN_DIR := bin

# ─── Source and Test Files ──────────────────────────────────────
SRC := $(wildcard $(SRC_DIR)/*.cpp)
# TESTS := $(wildcard $(TEST_DIR)/test_*.cpp)

# ─── Executables ────────────────────────────────────────────────
MAIN_EXEC := $(BIN_DIR)/main
# TEST_EXECS := $(patsubst $(TEST_DIR)/%.cpp,$(BIN_DIR)/%,$(TESTS))

# ─── SFML Libraries ─────────────────────────────────────────────
LIBSFML := -LD:/Coding/Libraries/SFML/lib
LIBS := -lsfml-graphics -lsfml-window -lsfml-system

# ─── Build Everything ───────────────────────────────────────────
all: $(MAIN_EXEC)
# Add $(TEST_EXECS) above once tests are ready

# ─── Main Program Build ─────────────────────────────────────────
$(MAIN_EXEC): main.cpp $(SRC) | $(BIN_DIR)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(LIBSFML) $(LIBS)

# ─── Create bin/ if it doesn’t exist ────────────────────────────
$(BIN_DIR):
	-mkdir $(BIN_DIR)

# ─── Clean ──────────────────────────────────────────────────────
clean:
	rm -rf $(BIN_DIR)
