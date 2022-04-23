#
# objetivo: dependencias
# <tab> instrucciones

programa: *.o
	gcc - o programa *.o

# phony son reglas sin dependencias
# clean se usa para limpiar

clean:
	rm -f programa *.o

all: programa

# variable = valor

OBJS = *.o
BINARY = programa

programa: $(OBJS)
	gcc -o $(BINARY) $(OBJS)

# todos los .o se pueden generar de todos los .c
# es decir, % es un comodín
# las variables $? se sustituye por %.c
# y la variable $@ se sustituye por %.o

%.o: %.c
	gcc $(CFLAGS) -c $?
