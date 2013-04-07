
/* start of motion  variables */
#ifndef M_PI
#define M_PI 3.141592654
#endif

GLUquadricObj *qobj;
char *string;
char leg = 0;
int flag=1;
int shoulder1 = 0, shoulder2 = 0, shoulder3 = 0, shoulder4 = 0, lat1 = 20, lat2 = 20,
  elbow1 = 0, elbow2 = 0, pivot = 0, tilt = 10, ankle1 = 0, ankle2 = 0, heel1 = 0,
  heel2 = 0, hip11 = 0, hip12 = 10, hip21 = 0, hip22 = 10, fire = 0, solid_part = 0,
  anim = 0, turn = 0, turn1 = 0, lightturn = 0, lightturn1 = 0;

float elevation = 0.0, distance = 0.0, frame = 3.0
 /* foot1v[] = {} foot2v[] = {} */ ;
int i,j;
float x,y;
/* end of motion variables */