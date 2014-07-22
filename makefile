all: crc32file

crc32file: crc32file.main.o crc32file.o

clean:
	rm -f *.o crc32file
