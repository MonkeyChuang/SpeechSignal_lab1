sample_sound: wavefile.o sample_sound.o
	gcc -o sample_sound wavefile.o sample_sound.o

sample_sound.o: sample_sound.c
	gcc -c sample_sound.c

wavefile.o: wavefile.h wavefile.c
	gcc -c wavefile.c

clean:
	rm sample_sound *.o
