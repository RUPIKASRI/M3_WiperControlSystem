CC = arm-none-eabi-gcc
MACH = cortex-m4
CFLAGS = -c -mcpu=$(MACH) -mthumb -std=gnu11 -Wall -O0
all:wcs1.o wcs2.o output.elf

wcs1.o:wcs1.c
	$(CC) $(CFLAGS) -o $@ $^
	
wcs2o:wcs2.c
	$(CC) $(CFLAGS) -o $@ $^

output.elf: wcs.o  wcs2.o
	$(CC)  -o $@ $^		
	
clean:
	rm -rf *.o *.elf
