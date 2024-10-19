run : bin/tazo
	./bin/tazo

bin/tazo : src/main.cpp
	g++ src/main.cpp -Iinclude -o bin/tazo


assets/mensaje : bin/tazo
	./bin/tazo > assets/mensaje