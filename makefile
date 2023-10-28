CXX = g++

SRCS = main.cpp fun.cpp
OBJS = $(SRCS:.cpp=.o)
TARGET = ice_cream

.PHONY: all clean run

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) -o $@ $(OBJS)

%.o: %.cpp
	$(CXX) -c $<

clean:
	rm -f $(OBJS) $(TARGET)

run: $(TARGET)
	clear
	./$(TARGET)
