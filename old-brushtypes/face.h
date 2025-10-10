//
//face.h
//

#include "plane.h"

#ifndef FACE_H
#define FACE_H

typedef struct face_s{
   face_s** next;
   face_s* prev;
   face_s owner;

   int facesize;
   int points[4];

   const char* texture;

   bool bFlip;
   bool bChkOkay;

   void* buffer;

   vec3_t fVecs[6];

   plane_t* p1;
   plane_t* p2;

   bool bSplit;

}face_t;

face_t* Alloc_Face();
face_t* Create_Face(plane_t* p1, plane_t* p2);
face_t* Add_Plane(plane_t* p);

void Free_Face(face_t* f);
void MakeFace_Plane(face_t* f);

#endif
