CFLAGS := -g
# vetorTamanhoFixo
# circularRedimensionamento
# listaEncadeadaCircular
EXEC := vetorTamanhoFixo

all: executavel

executavel: main.o $(EXEC).o
	gcc $(CFLAGS) -o $(EXEC) main.o $(EXEC).o

main.o: main.c $(EXEC).c
	gcc $(CFLAGS) -c -o $@ $<

vetorTamanhoFixo.o: vetorTamanhoFixo.c vetorTamanhoFixo.h
	gcc $(CFLAGS) -c -o $@ $<

clean:
	rm -f *.o
	rm -f vetorTamanhoFixo
