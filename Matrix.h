using FloatType = float;

template<int N>
using FloatArray = FloatType[N];

template<int N, int J>
using MatrixArray = FloatType[N][J]; 

using Vector2 = FloatArray<2>;
using Vector3 = FloatArray<3>;
using Vector4 = FloatArray<4>;
using Matrix4 = MatrixArray<4,4>;


//struct Vector3 {
//	FloatType x,y,z;
//};
//struct Vector4 {
//	FloatType x,y,z,w;
//};
//struct Matrix {
//	FloatType matrix[4][4] = {{0,0,0,0}, {0,0,0,0}, {0,0,0,0}, {0,0,0,0}};
//};



