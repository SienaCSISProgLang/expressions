CFILES=doublelt.c
OFILES=$(CFILES:.c=.o)
CC=gcc -std=c99

doublelt:	$(OFILES)
	$(CC) -o doublelt $(OFILES)

clean::
	/bin/rm -f doublelt $(OFILES)
