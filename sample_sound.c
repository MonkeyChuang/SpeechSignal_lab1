#include "wavefile.h"
#include "math.h"

const double pi=3.1415926535;
const int rate=44100;
int main()
{
  double x,y;
  double t=4,dt=1./rate;
  long length =t*rate;
  short s[length];
  double fre = 600;

  for(int i=0 ; i<length ; ++i)
  {
    x=dt*i;
    y=sin(2*pi*fre*x);
    s[i] = 5000*y;
  }
  /*這行之後和老師給的不一樣*/
  FILE* f = wavfile_open("sound.wav");
  if(!f)
  {
    printf("couldn't open sound.wav for writing.\n");
    return 1;
  }
  wavfile_write(f,s,length);
  wavfile_close(f);
  return 0;
}
