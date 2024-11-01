# 指定编译器
CXX = g++
CXXFLAGS = -Wall -Wextra -O2

# 可执行文件和源文件
TARGETS = 2-playwithvariables 3-ifelse 4-for 5-playwitharray 6-function
SOURCES = $(TARGETS:%=%.cpp)

# 目标目录
BUILD_DIR = build

# 默认目标
.PHONY: all
all: $(TARGETS)

# 规则定义
$(BUILD_DIR)/%: %.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) $< -o $@

# 创建 build 目录
$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

# lab2 特殊目标，依赖于 2-playwithvariables.cpp
.PHONY: lab2
lab2: $(BUILD_DIR)/lab2

$(BUILD_DIR)/lab2: 2-playwithvariables.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) $< -o $@

.PHONY: lab3
lab3: $(BUILD_DIR)/lab3

$(BUILD_DIR)/lab3: 3-ifelse.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) $< -o $@

.PHONY: lab4
lab4: $(BUILD_DIR)/lab4

$(BUILD_DIR)/lab4: 4-for.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) $< -o $@

.PHONY: lab5
lab5: $(BUILD_DIR)/lab5

$(BUILD_DIR)/lab5: 5-playwitharray.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) $< -o $@

.PHONY: lab6
lab6: $(BUILD_DIR)/lab6

$(BUILD_DIR)/lab6: 6-function.cpp | $(BUILD_DIR)
	$(CXX) $(CXXFLAGS) $< -o $@

# 清理构建文件
.PHONY: clean
clean:
	rm -rf $(BUILD_DIR)/*
