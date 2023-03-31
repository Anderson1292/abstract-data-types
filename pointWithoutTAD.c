#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct point{
	float x;
	float y;
} Point;

Point* create_pt(float x,float y){
	Point* pp = (Point*)malloc(sizeof(Point));
	if(pp == NULL){
		printf("Memory Insufficient!\n");
		exit(1);
	}
	pp->x = x; pp->y = y;
	return pp;
}
void free_memory(Point *pp){
	free(pp);
}
void accsses_pt(Point *pp,float *x,float *y){
	*x = pp->x; *y = pp->y;
}
void assing_pt(Point *pp,float x,float y){
	pp->x = x; pp->y = y;
}
float distance(Point *p1,Point *p2){
	float dx = p2->x - p1->x; float dy = p2->y - p1->y;
	return sqrt(dx*dx + dy*dy);
}
int main(int argc, char *argv[]) {
	Point *p1 = create_pt(2.0,1.0);
	Point *p2 = create_pt(3.4,2.1);
	float dist = distance(p1,p2);
	printf("Distance between points:%.2f\n",dist);
	free_memory(p1); free_memory(p2);
	return 0;
}
