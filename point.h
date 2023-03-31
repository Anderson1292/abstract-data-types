//Point structure creation
typedef struct point Point;

/*function that creates a point with coordinates (x,y)*/
Point* create_pt(float x, float y);

/*function that frees the memory of a created point*/
void free_memory(Point *pp);

/* function that accesses the coordinates of a point*/
void access_pt(Point *pp,float *x, float *y);

/* function that assings new values the coordinates (x,y)*/
void assing_pt(Point *pp,float x,float y);

/* function that calculates the distance between two points*/
float distance(Point *p1,Point *p2);


