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

// b correct because [a = functionM] can call function but didnt return value
// c wrong because [functionN(a,b)] is int and double but a,b is int
// d correct brcause [functionO(r,a,s,t)] r,a,s,t is correct type
// e wrong because [functionP(a,b,c,d,e)] call 5 value but functionP receive 4 value
// f correct because this function return double and u value is double 
// g wrong because [functionN(r,s)] value is int,double but r is int
// h correct because [functionO(r,a,r,a)] is correct type
// i wrong because [functionP(r,s,t,t)] is all double type but functionP is all int
// j wrong because [functionP(functionN(a,a),s,t,t+r)] functionN the second a should be double type and functionP should be all int type value
// k wrong because [functionP(functionN(a, a), s, t, t+r)] same with question j
