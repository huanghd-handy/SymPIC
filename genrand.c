#include <stdlib.h>
#include <math.h>
double  rand01 (double  x0 ,double  x1 ){
	return  	(  	(  	(  	(  x1 - x0 ) * 	(  5.00000000000000000e-01 + 	rand (  ) ) ) / 	(  ((double )RAND_MAX) + 1.00000000000000000e+00 ) ) + x0 ) ;}
double  maxwell_dist (double  ava ,double  sig ){
	return  	(  	(  	(  sig * 	sqrt ( 	(  	(  -1 * 2.00000000000000000e+00 ) * 	log ( 	rand01 ( 0 , 1 ) ) ) ) ) * 	cos ( 	(  	(  M_PI * 2.00000000000000000e+00 ) * 	rand01 ( 0 , 1 ) ) ) ) + ava ) ;}
int  lost_cone_dist (double  mu ,double  mu0 ,double  delta ){
	double  r01 = 	rand01 ( 0 , 1 ) ;
	if (  	(  r01 > 	(  5.00000000000000000e-01 * 	(  1 - 	tanh ( 	(  	(  mu - mu0 ) / delta ) ) ) ) )  ){  
			return  0 ;
	}else{
			return  1 ;
	 }
}
