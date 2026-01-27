#include <stdio.h>

double functionM(void);
int functionN(int n, double x);
double functionO(double, int, double, int);
double functionP(int a, int n, int b, int c);
 
int main(void) {
  	int a, b, c, d, e;
  	double r, s, t, u, v;
  	//function calling (a-k)
    functionM();
    
    //func a no problem
//	a = functionM();
//	printf("\n%d", a);
	
	//func b 
	b = functionN(a, b);
	printf("\n%d", a, b);
	
	//
//	r = functionO(r,a,s,b);
//	s = functionP(a,b,c,d,e);
//	u = functionM();
//	c = d + functionN(r,s);
//	t = s * functionO(r, a, r, a);
//	a = v + functionP(r, s, t, t);
//	functionP(functionN(a, a), s, t, t+r);
//	v = functionP(functionN(a, a), s, t, t+r);

}

double functionM(void){
	return 5.1;
}

int functionN(int a, double b){
	return 2, 5.1;
}

