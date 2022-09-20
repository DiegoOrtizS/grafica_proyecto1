CPP = g++
CPPFLAGS = -I /opt/X11/include -L /opt/X11/lib -lX11 -ljpeg -lpng -lz -pthread

all: main.o camara.o cimg.o luz.o mundo.o objeto.o rayo.o vector.o
	$(CPP) main.o camara.o cimg.o luz.o mundo.o objeto.o rayo.o vector.o $(CPPFLAGS)

main.o: main.cpp
	$(CPP) -c main.cpp -o main.o $(CPPFLAGS)

camara.o: Camara.h Camara.cpp
	$(CPP) -c Camara.cpp -o camara.o $(CPPFLAGS)

cimg.o: CImg.h CImg.cpp
	$(CPP) -c CImg.cpp -o cimg.o $(CPPFLAGS)

luz.o: Luz.h Luz.cpp
	$(CPP) -c Luz.cpp -o luz.o $(CPPFLAGS)

mundo.o: Mundo.h Mundo.cpp
	$(CPP) -c Mundo.cpp -o mundo.o $(CPPFLAGS)

objeto.o: Objeto.h Objeto.cpp
	$(CPP) -c Objeto.cpp -o objeto.o $(CPPFLAGS)

rayo.o: Rayo.h Rayo.cpp
	$(CPP) -c Rayo.cpp -o rayo.o $(CPPFLAGS)

vector.o: vector.h vector.cpp
	$(CPP) -c vector.cpp -o vector.o $(CPPFLAGS)

luciernaga.o: Luciernaga.h Luciernaga.cpp
	$(CPP) -c Luciernaga.cpp -o Luciernaga.o $(CPPFLAGS)

clean:
	rm *.o a.out