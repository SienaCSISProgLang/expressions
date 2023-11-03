# Makefile for overflow example program
#
# Jim Teresco, CS 433, The College of Saint Rose
#
# $Id$
#
CFILES=overflow.c
OFILES=$(CFILES:.c=.o)
CC=gcc -std=c99

overflow:	$(OFILES)
	$(CC) -o overflow $(OFILES)

clean::
	/bin/rm -f overflow $(OFILES)
