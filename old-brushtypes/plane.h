//
//plane.h
//

#ifndef PLANE_H
#define PLANE_H

//#define PLANE_EPSILON 00.1

typedef float vec_t;
typedef vec_t vec3_t[3];
typedef vec_t vec4_t[4];

typedef struct plane_s{
   plane_s** next;
   plane_s* prev;
   plane_s owner;
   int points[3];
   int plnsize;
   double dist;
   vec3_t normal;
   vec3_t va;
   vec3_t vb;
   vec3_t vc;
   bool bInvert;
   bool bChkOkay;
   const char* texture;
}plane_t;

plane_t* Alloc_Plane();
plane_t* Create_Plane(vec3_t a, vec3_t b, vec3_t c, bool bOk, bool bInvert);

void Free_Plane(plane_t * p);

#endif
