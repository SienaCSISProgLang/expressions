# Makefile for shortcut sideeffects example program
#
# Jim Teresco, CS 433, The College of Saint Rose
#
# $Id$
#
CFILES=shortcutassign.c
OFILES=$(CFILES:.c=.o)
CC=gcc -std=c99

shortcutassign:	$(OFILES)
	$(CC) -o shortcutassign $(OFILES)

clean::
	/bin/rm -f shortcutassign $(OFILES)
