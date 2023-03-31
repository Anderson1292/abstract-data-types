#include<stdlib.h>
#include "circle.h"
#define PI 3.14159

struct circle{
	Point *pp;
	float r;
};

Circle* create_c(float x, float y, float r){
	Circle* cc = (Circle*)malloc(sizeof(Circle));
	cc->pp = create_pt(x,y);
	cc->r = r;
	return cc;
}
void free_c(Circle *cc){
	free_memory(cc->pp);
	free(cc);
	
}
float area_c(Circle *cc){
	return PI*cc->r*cc->r;
}
int check_c(Circle *cc, Point *pp){
	float dist = distance(cc->pp,pp);
	return (dist < cc->r);
}
