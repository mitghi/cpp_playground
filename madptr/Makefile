all:
	clang++ -shared -undefined dynamic_lookup -o libnuke.so madptr.cpp
	clang++ -L. main.cpp -lnuke

clean:
	rm *.so
	rm *.out
	rm *.o

