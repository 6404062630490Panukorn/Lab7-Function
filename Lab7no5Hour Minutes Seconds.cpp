#include <stdio.h>

long convert(long h, long m, long s); 

int main(void){
	long h,m,s;
	scanf("%d %d %d", &h, &m, &s);
	convert(h,m,s);
	
	return 0;
}

long convert(long h, long m, long s){
	h = h * 3600;
	m = m * 60;
	printf("%d", h+m+s);
}
