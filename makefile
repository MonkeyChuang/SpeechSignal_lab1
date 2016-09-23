sample_sound: wavfile.o sample_sound.o
	gcc -o sample_sound wavfile.o sample_sound.o

sample_sound.o: sample_sound.c
	gcc -c sample_sound.c

wavefile.o: wavfile.h wavfile.c
	gcc -c wavfile.c

clean:
	rm sample_sound *.o
