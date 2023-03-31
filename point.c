#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include "point.h"

typedef struct point{
	float x;
	float y;
} Point;

Point* create_pt(float x, float y){
	Point* pp = (Point*)malloc(sizeof(Point));
	if(pp == NULL){
		printf("Insufficient memory!\n");
		exit(1);
	}
	pp->x = x; pp->y = y;
	return pp;
}
void free_memory(Point *pp){
	free(pp);
}
void access_pt(Point *pp,float *x, float *y){
	*x = pp->x; *y = pp->y;
}
void assing_pt(Point *pp,float x, float y){
	pp->x = x; pp->y = y;
}
float distance(Point *p1, Point *p2){
	float dx = p2->x - p1->x;
	float dy = p2->y - p1->y;
	return sqrt(dx*dx + dy*dy);
}
