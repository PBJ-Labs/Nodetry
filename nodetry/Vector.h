#ifndef VECTOR_H
#define VECTOR_H

using Vector = float;
using Vector3 = float[3];
using Vector4 = float[4];
using Vector6 = float[6];

template<typename T>
T AddVectors( T va, T vb, T vc ){
   return T(va + vb + vc);
}

template<typename T>
T ReturnVector(T v){
   return T(v);
}

#endif
