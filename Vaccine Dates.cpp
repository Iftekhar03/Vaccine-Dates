#include <stdio.h>

int main(void) {
	int t,n,x,y,z,count,i,j,a,b,c;
	scanf("%d",&t);
	while(t--)
	{
	  scanf("%d %d %d",&a,&b,&x);
	  if((a>=b) && (a<=x))
      printf("Take second dose now\n");
    else if((b<a) && (x<a))
      printf("Too Late\n");
    else
      printf("Too Early\n");
	}
	return 0;
  }
