CXX=g++
CXXFLAGS=-std=c++11
INSTALLPATH=/usr/local/bin
TARGET=rio-panch

$(TARGET): main.cpp
	$(CXX) $(CXXFLAGS) -o $@ $<

install: $(TARGET)
	cp $(TARGET) $(INSTALLPATH)
	chown root:root $(INSTALLPATH)/$(TARGET)
	chmod 4755 $(INSTALLPATH)/$(TARGET)

clean: 
	rm $(TARGET)
