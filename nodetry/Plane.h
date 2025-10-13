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

template<typename Plane3>
const Plane3 ReturnPlane(Plane3 plane)const {
   return plane;
};

template<typename Plane3>
const Plane3 IteratePlaneNormal(Plane3& plane, const Plane3& Normal)const {
   typedef std::set<Normal&> IterateNormal;
         for( int i = 0; i >= 0; i++ ){
              IterateNormal.begin(); 
              IterateNormal.insert(plane);
              IterateNormal.end();
         }
 return plane;
};

#endif
