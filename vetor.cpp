#include <stdio.h>
#include <conio.h>
int main ()
 {
  int x[1000];
  int i;
  for (i=0;i<=1000;++i)
  	{
  	x[i]=i;
    }
	for (i=0;i<=1000;++i)
	{
	printf (" %d ",x[i]);
	}
getch();
 }

