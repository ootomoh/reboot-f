CXX=g++
CXXFLAGS=-std=c++11
TARGET=reboot-f

$(TARGET): main.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<
	chmod 4755 $(TARGET)

clean: 
	rm $(TARGET)
