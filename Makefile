CXX = g++
CXXFLAGS = -Wall -std=c++11

test: test_descuentos.cpp descuentos.cpp
	$(CXX) $(CXXFLAGS) -o test_descuentos test_descuentos.cpp descuentos.cpp

run: test
	./test_descuentos

clean:
	rm -f test_descuentos

.PHONY: run clean