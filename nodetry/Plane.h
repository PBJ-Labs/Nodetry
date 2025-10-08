#ifndef PLANE_
#define PLANE_

#include "Vector.h"

auto constexpr PLANE_EPSILON_ 0.01

class Plane {
public:
   Plane(Vector3 a, Vector3 b, Vector3 c, bool bInvert);
   virtual ~Plane();

   const Vector3 pVA;
   const Vector3 pVB;
   const Vector3 pVC;

   Vector3 origin = { 0.0f, 0.0f, 0.0f };

   virtual void ConstructPlane(Plane* plane, Vector3 a, Vector3 b, Vector3 c, bool bInvert) = 0;
   virtual void GetPlane(Plane& plane) = 0;
   virtual bool InvertPlane(Plane& plane) = 0;

}

#endif
