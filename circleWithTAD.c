#include<stdio.h>
#include "circle.h"

int main(void){
	
	Point *pp = create_pt(2.0,1.0);
	Circle *cc = create_c(3.4,2.1,2.0);
	
	float area = area_c(cc);
	printf("Circle area: %.2f\n",area);
	
	if(check_c(cc,pp)){
		printf("The point is inside the circle.\n");
	} else {
		printf("The point is not inside the circle.\n");
	}
	free_memory(pp); free_c(cc);
	return 0;
}
