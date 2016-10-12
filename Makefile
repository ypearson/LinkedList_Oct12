TARGET_PREFIX=
CC        := $(TARGET_PREFIX)gcc
AS        := $(TARGET_PREFIX)as
LD        := $(TARGET_PREFIX)ld
NM        := $(TARGET_PREFIX)nm
OBJDUMP   := $(TARGET_PREFIX)objdump
OBJCOPY   := $(TARGET_PREFIX)objcopy
SIZE      := $(TARGET_PREFIX)size

TOP=$(shell pwd)
TARGET=executable.elf
C_SOURCE_FILES +=  	main.c         \
					linkedlist.c   \

OBJ=$(C_SOURCE_FILES:.c=.o)

INC_PATHS +=.

CFLAGS  = -c
# CFLAGS += -Wall
# CFLAGS += -Wextra
CFLAGS += -ggdb
CFLAGS += $(addprefix -I, $(INC_PATHS))

all: clean $(TARGET)

%.o:%.c
	$(CC) $(CFLAGS)  $< -o $@

$(TARGET): $(OBJ)
	$(CC) $(LDFLAGS) $^ -o $@

clean:
	@find $(TOP) -type f -name "*.o"  -delete
	@rm -f $(TARGET)
	@echo "cleaned."

.PHONY: clean