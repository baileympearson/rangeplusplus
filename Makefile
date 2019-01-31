
test:
	mkdir -p bin && clang++ main.cpp -o bin/test

clean:
	rm -rf bin
