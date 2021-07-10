all: runit

runit: platform.h platform.cpp publisher.h publisher.cpp subscriber.h subscriber.cpp main.cpp

	g++ -o platform main.cpp platform.cpp publisher.cpp subscriber.cpp

run:
	./platform

clean:
	rm -rf platform

