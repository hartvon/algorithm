SRC := $(shell find ./ -name '*.cpp')
TAR := $(SRC:%.cpp=%)
HEADER := $(shell find ./ -name '*.hpp')
CXXFLAGS := -g -Wall -Wno-sign-compare

all: $(TAR)

%: %.cpp
	$(CXX) -o $@ $< $(CXXFLAGS)

.PHONY: clean
clean:
	rm -f $(TAR)