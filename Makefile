CXX=g++
CXXFLAGS=-std=c++11
TARGET=reboot-f

$(TARGET): main.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

install: $(TARGET)
	chown root:root $(TARGET)
	chmod 4755 $(TARGET)
	cp $(TARGET) /usr/local/bin/

clean: 
	rm $(TARGET)
