CXX = c++
CXXFLAGS = -std=c++11 -I./include
PROGRAM = facc
SRC_DIR = src
OBJ_DIR = obj
BIN_DIR = bin
INCLUDE_DIR = include

SOURCES = $(wildcard $(SRC_DIR)/*.cpp)
OBJECTS = $(SOURCES:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
DEPS = $(OBJECTS:.o=.d)

# Default make target
all: $(BIN_DIR)/$(PROGRAM)

# Link the program
$(BIN_DIR)/$(PROGRAM): $(OBJECTS)
	@mkdir -p $(BIN_DIR)
	$(CXX) $(OBJECTS) $(CXXFLAGS) -o $@

# Compile source files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -MMD -c $< -o $@

clean: 
	rm -rf $(OBJ_DIR)
	rm -rf $(BIN_DIR)

-include $(DEPS)

.PHONY: all clean