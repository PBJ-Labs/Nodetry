//
//plane.h
//

#ifndef PLANE
#define PLANE

#define PLANE_EPSILON 00.1

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

#endif
