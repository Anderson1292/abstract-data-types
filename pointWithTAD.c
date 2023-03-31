#include<stdio.h>
#include "point.h"

int main(){
	Point *p1 = create_pt(2.0,1.0);
	Point *p2 = create_pt(3.4,2.1);
	float dist = distance(p1,p2);
	printf("Distance between points:%.2f\n",distance);
	free_memory(p1); free_memory(p2);
	return 0;
}
