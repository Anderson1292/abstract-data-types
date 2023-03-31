#include "point.h"

typedef struct circle Circle;

/* function that creates and returns a circle wiht center (x,y)  */
Circle* create_c(float x,float y, float r);

/*  function that frees the memory of a created circle*/
void free_c(Circle *cc);

/*  function that calculates the area of a circle*/
float area_c(Circle *cc);

/*  function that checks if a points is inside the circle*/
int check_c(Circle *cc,Point *pp);
