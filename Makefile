CXX=g++
CXXFLAGS=-std=c++11
TARGET=reboot-f

$(TARGET): main.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

clean: 
	rm $(TARGET)
