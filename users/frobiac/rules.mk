SRC += frobiac.c \
	   trackpoint.c

ifeq ($(strip $(KEYBOARD)), $(filter $(KEYBOARD), frobiac/hypernano))
	OPT_DEFS += -DHYPERNANO_EXTRA_COLUMN
endif
