//    |¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶|
//    |¶¶                ©2002 Ariel Productions              ¶¶|
//    |¶¶                  All Rights Reserved                ¶¶|
//    |¶¶¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¶¶|
//    |                                                         |
//    |¶¶¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¶¶|
//    |¶¶             Programmer - James Dougherty            ¶¶|
//    |¶¶             First Compile - 11.21.02                ¶¶|
//    |¶¶             Source - XMath.h                        ¶¶|
//    |¶¶             Object - UXMath.dll                     ¶¶|
//    |¶¶             Version - 1.1                           ¶¶|
//    |¶¶¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¶¶|
//    |                                                         |
//    |¶¶¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¶¶|
//    |¶¶                                                     ¶¶|
//    |¶¶ UXMath is free software; you can redistribute       ¶¶|
//    |¶¶ it and/or modify it under the terms of the GNU      ¶¶|
//    |¶¶ General Public License as published by the Free     ¶¶|
//    |¶¶ Software Foundation; either version 2 of the        ¶¶|
//    |¶¶ License, or (at your option) any later version.     ¶¶|
//    |¶¶                                                     ¶¶|
//    |¶¶ This program is distributed in the hope that it     ¶¶|
//    |¶¶ will be useful, but WITHOUT ANY WARRANTY; without   ¶¶|
//    |¶¶ even the implied warranty of MERCHANTABILITY or     ¶¶|
//    |¶¶ FITNESS FOR A PARTICULAR PURPOSE.  See the GNU      ¶¶|
//    |¶¶ General Public License for more details.            ¶¶|
//    |¶¶                                                     ¶¶|
//    |¶¶¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¶¶|
//    |                                                         |
//    |¶¶¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¶¶|
//    |¶¶        http://www.gnu.org/copyleft/gpl.html         ¶¶|
//    |¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶|

//    |¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶|
//    |¶¶             Special Thanks To: DigiBen              ¶¶|
//    |¶¶             Special Thanks To: Adrian Perez         ¶¶|
//    |¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶|

#ifndef  XMATH_H
#define  XMATH_H


//    |œœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœ|
//    |œœ                  Vector 2 Prototypes                   œœ|
//    |œœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœ|


typedef struct D3DVECTOR2
{
	float X;
	float Y;
} _D3DVECTOR2;


void  V2Zero(D3DVECTOR2& Vector);
void  V2Negate(D3DVECTOR2& Vector);
float V2Magnitude(D3DVECTOR2& Vector);
void  V2Normalize(D3DVECTOR2& Vector);
float V2MagnitudeSquared(D3DVECTOR2& Vector);
void  V2Copy(D3DVECTOR2& retVector, D3DVECTOR2& Vector);
void  V2Scale(D3DVECTOR2& retVector, D3DVECTOR2& Vector, float ScaleAmount);
void  V2Minimize(D3DVECTOR2& retVector, D3DVECTOR2& Vector1, D3DVECTOR2& Vector2);
void  V2Maximize(D3DVECTOR2& retVector, D3DVECTOR2& Vector1, D3DVECTOR2& Vector2);
float V2Distance(D3DVECTOR2& Vector1, D3DVECTOR2& Vector2);
int   V2FastDistance(int X, int Y); 
bool  V2TwoVectorsAreNearlyEqual(D3DVECTOR2& Vector1, D3DVECTOR2& Vector2);
void  V2ComputeBoundingBox(D3DVECTOR2 *Vertices, long NumVertices, D3DVECTOR2& retBox_Min, D3DVECTOR2& retBox_Max);
void  V2ComputeBoundingSphere(D3DVECTOR2 *Vertices, long NumVertices, D3DVECTOR2& retSphereCenter, float retSphereRadius);
bool  V2VectorContainedInBoundingBox(D3DVECTOR2& Vector, D3DVECTOR2& Box_Min, D3DVECTOR2& Box_Max);
bool  V2IsCollision(D3DVECTOR2& Collider_Position, float Collider_Radius, D3DVECTOR2& Object_Position, float Object_Radius);
bool  V2IsCollisionEX(D3DVECTOR2& Collider_Position, float Collider_Radius, D3DVECTOR2& Object_Position, float Object_Radius);
void  V2Interpolate_Linear(D3DVECTOR2 *retVector, float Time, D3DVECTOR2 *KeyFrame1, D3DVECTOR2 *KeyFrame2);
void  V2Interpolate_LinearEX(D3DVECTOR2 *retVertices, long NumVertices, float Time, D3DVECTOR2 *KeyFrame1, D3DVECTOR2 *KeyFrame2);
void  V2Interpolate_HermitSpline(D3DVECTOR2 *retVector, float Time, D3DVECTOR2 *KeyFrame1, D3DVECTOR2 *KeyFrame2, D3DVECTOR2 *KeyFrame3, D3DVECTOR2 *KeyFrame4);
void  V2Interpolate_HermitSplineEX(D3DVECTOR2 *retVertices, long NumVertices, float Time, D3DVECTOR2 *KeyFrame1, D3DVECTOR2 *KeyFrame2, D3DVECTOR2 *KeyFrame3, D3DVECTOR2 *KeyFrame4);
void  V2Add(D3DVECTOR2& retVector, D3DVECTOR2& Vector1, D3DVECTOR2& Vector2);
void  V2Average(D3DVECTOR2& retVector, D3DVECTOR2& Vector1, D3DVECTOR2& Vector2);
float V2DotProduct(D3DVECTOR2& Vector1, D3DVECTOR2& Vector2);
void  V2Subtract(D3DVECTOR2& retVector, D3DVECTOR2& Vector1, D3DVECTOR2& Vector2);
void  V2Divide(D3DVECTOR2& retVector, float Scalar, D3DVECTOR2& Vector);
void  V2Divide(D3DVECTOR2& retVector, D3DVECTOR2& Vector, float Scalar);
void  V2Divide(D3DVECTOR2& retVector, D3DVECTOR2& Vector1, D3DVECTOR2& Vector2);
void  V2Multiply(D3DVECTOR2& retVector, float Scalar, D3DVECTOR2& Vector);
void  V2Multiply(D3DVECTOR2& retVector, D3DVECTOR2& Vector, float Scalar);
float V2Multiply(D3DVECTOR2& Vector1, D3DVECTOR2& Vector2);


//    |œœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœ|
//    |œœ                  Vector 3 Prototypes                   œœ|
//    |œœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœ|


typedef struct D3DVECTOR
{
	float X;
	float Y;
	float Z;
} _D3DVECTOR;


void   V3Zero(D3DVECTOR& Vector);
void   V3Negate(D3DVECTOR& Vector);
float  V3Magnitude(D3DVECTOR& Vector);
void   V3Normalize(D3DVECTOR& retVector);
float  V3MagnitudeSquared(D3DVECTOR& Vector);
void   V3Copy(D3DVECTOR& retVector, D3DVECTOR& Vector);
void   V3Scale(D3DVECTOR& retVector, D3DVECTOR& Vector, float ScaleAmount);
void   V3Minimize(D3DVECTOR& retVector, D3DVECTOR& Vector1, D3DVECTOR& Vector2);
void   V3Maximize(D3DVECTOR& retVector, D3DVECTOR& Vector1, D3DVECTOR& Vector2);
float  V3Distance(D3DVECTOR& Vector1, D3DVECTOR& Vector2);
float  V3FastDistance(float X, float Y, float Z);
bool   V3TwoVectorsAreNearlyEqual(D3DVECTOR& Vector1, D3DVECTOR& Vector2);
void   V3ComputeBoundingBox(D3DVECTOR *Vertices, long NumVertices, D3DVECTOR& retBox_Min, D3DVECTOR& retBox_Max);
void   V3ComputeBoundingSphere(D3DVECTOR *Vertices, long NumVertices, D3DVECTOR& retSphereCenter, float retSphereRadius);
bool   V3VectorContainedInBoundingBox(D3DVECTOR& Vector, D3DVECTOR& Box_Min, D3DVECTOR& Box_Max);
bool   V3IsCollision(D3DVECTOR& Collider_Position, float Collider_Radius, D3DVECTOR& Object_Position, float Object_Radius);
bool   V3IsCollisionEX(D3DVECTOR& Collider_Position, float Collider_Radius, D3DVECTOR& Object_Position, float Object_Radius);
void   V3Interpolate_Linear(D3DVECTOR *retVector, float Time, D3DVECTOR *KeyFrame1, D3DVECTOR *KeyFrame2);
void   V3Interpolate_LinearEX(D3DVECTOR *retVertices, long NumVertices, float Time, D3DVECTOR *KeyFrame1, D3DVECTOR *KeyFrame2);
void   V3Interpolate_HermitSpline(D3DVECTOR *retVector, float Time, D3DVECTOR *KeyFrame1, D3DVECTOR *KeyFrame2, D3DVECTOR *KeyFrame3, D3DVECTOR *KeyFrame4);
void   V3Interpolate_HermitSplineEX(D3DVECTOR *retVertices, long NumVertices, float Time, D3DVECTOR *KeyFrame1, D3DVECTOR *KeyFrame2, D3DVECTOR *KeyFrame3, D3DVECTOR *KeyFrame4);
void   V3Add(D3DVECTOR& retVector, D3DVECTOR& Vector1, D3DVECTOR& Vector2);
void   V3Average(D3DVECTOR& retVector, D3DVECTOR& Vector1, D3DVECTOR& Vector2);
float  V3DotProduct(D3DVECTOR& Vector1, D3DVECTOR& Vector2);
void   V3Subtract(D3DVECTOR& retVector, D3DVECTOR& Vector1, D3DVECTOR& Vector2);
void   V3Divide(D3DVECTOR& retVector, float Scalar, D3DVECTOR& Vector);
void   V3Divide(D3DVECTOR& retVector, D3DVECTOR& Vector, float Scalar);
void   V3Divide(D3DVECTOR& retVector, D3DVECTOR& Vector1, D3DVECTOR& Vector2);
void   V3Multiply(D3DVECTOR& retVector, float Scalar, D3DVECTOR& Vector);
void   V3Multiply(D3DVECTOR& retVector, D3DVECTOR& Vector, float Scalar);
float  V3Multiply(D3DVECTOR& Vector1, D3DVECTOR& Vector2);
void   V3CrossProduct(D3DVECTOR& retVector, D3DVECTOR& Vector1, D3DVECTOR& Vector2);
void   V3Power(D3DVECTOR& retVector, D3DVECTOR& Vector1, D3DVECTOR& Vector2);
float  V3ScalarProduct(D3DVECTOR& Vector1, D3DVECTOR& Vector2, D3DVECTOR& Vector3);
void   V3Spherical(D3DVECTOR& retVector, float Theta, float Rho, float Phi);
double V3AngleBetweenVectors(D3DVECTOR& Vector1, D3DVECTOR& Vector2);
bool   V3InsidePolygon(D3DVECTOR *Polygon, long NumVertices, D3DVECTOR Intersection);
bool   V3IntersectedPolygon(D3DVECTOR *Polygon, long NumVertices, D3DVECTOR& RayStart, D3DVECTOR& RayEnd);
bool   V3EdgeSphereCollision(D3DVECTOR *Vertices, long NumVertices, D3DVECTOR &SphereCenter, float SphereRadius);
bool   V3SpherePolygonCollision(D3DVECTOR *Vertices, long NumVertices, D3DVECTOR& SphereCenter, float SphereRadius);
int    V3ClassifySphere(D3DVECTOR &Normal, D3DVECTOR &Point, D3DVECTOR &SphereCenter, float SphereRadius, float &Distance);
void   V3IntersectionPoint(D3DVECTOR& retVector, D3DVECTOR Normal, D3DVECTOR RayStart, D3DVECTOR RayEnd, double Distance);
void   V3ClosestPointOnLine(D3DVECTOR& retVector, D3DVECTOR& LineStart, D3DVECTOR& LineEnd, D3DVECTOR& Point);
void   V3PolygonNormal(D3DVECTOR& retVector, D3DVECTOR& Polygon1, D3DVECTOR& Polygon2, D3DVECTOR& Polygon3);

inline const D3DVECTOR operator^(D3DVECTOR const &Vector1, D3DVECTOR const &Vector2);

//    |œœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœ|
//    |œœ                  Vector 4 Prototypes                   œœ|
//    |œœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœ|


typedef struct D3DVECTOR4
{
	float X;
	float Y;
	float Z;
	float W;
} _D3DVECTOR4;


void  V4Zero(D3DVECTOR4& Vector);
void  V4Negate(D3DVECTOR4& Vector);
float V4Magnitude(D3DVECTOR4& Vector);
void  V4Normalize(D3DVECTOR4& Vector);
float V4MagnitudeSquared(D3DVECTOR4& Vector);
void  V4Add(D3DVECTOR4& retVector, D3DVECTOR4& Vector1, D3DVECTOR4& Vector2);
void  V4Average(D3DVECTOR4& retVector, D3DVECTOR4& Vector1, D3DVECTOR4& Vector2);
float V4DotProduct(D3DVECTOR4& Vector1, D3DVECTOR4& Vector2);
void  V4Subtract(D3DVECTOR4& retVector, D3DVECTOR4& Vector1, D3DVECTOR4& Vector2);
void  V4Divide(D3DVECTOR4& retVector, float Scalar, D3DVECTOR4& Vector);
void  V4Divide(D3DVECTOR4& retVector, D3DVECTOR4& Vector, float Scalar);
void  V4Divide(D3DVECTOR4& retVector, D3DVECTOR4& Vector1, D3DVECTOR4& Vector2);
void  V4Multiply(D3DVECTOR4& retVector, float Scalar, D3DVECTOR4& Vector);
void  V4Multiply(D3DVECTOR4& retVector, D3DVECTOR4& Vector, float Scalar);
float V4Multiply(D3DVECTOR4& Vector1, D3DVECTOR4& Vector2);
void  V4Minimize(D3DVECTOR4& retVector, D3DVECTOR4& Vector1, D3DVECTOR4& Vector2);
void  V4Maximize(D3DVECTOR4& retVector, D3DVECTOR4& Vector1, D3DVECTOR4& Vector2);
float V4Distance(D3DVECTOR4& Vector1, D3DVECTOR4& Vector2);
void  V4Copy(D3DVECTOR4& retVector, D3DVECTOR4& Vector);
void  V4Scale(D3DVECTOR4& retVector, D3DVECTOR4& Vector, float ScaleAmount);
bool  V4TwoVectorsAreNearlyEqual(D3DVECTOR4& Vector1, D3DVECTOR4& Vector2);
void  V4ComputeBoundingBox(D3DVECTOR4 *Vertices, long NumVertices, D3DVECTOR4& retBox_Min, D3DVECTOR4& retBox_Max);
void  V4ComputeBoundingSphere(D3DVECTOR4 *Vertices, long NumVertices, D3DVECTOR4& retSphereCenter, float retSphereRadius);
bool  V4VectorContainedInBoundingBox(D3DVECTOR4& Vector, D3DVECTOR4& Box_Min, D3DVECTOR4& Box_Max);
bool  V4IsCollision(D3DVECTOR4& Collider_Position, float Collider_Radius, D3DVECTOR4& Object_Position, float Object_Radius);
bool  V4IsCollisionEX(D3DVECTOR4& Collider_Position, float Collider_Radius, D3DVECTOR4& Object_Position, float Object_Radius);
void  V4Interpolate_Linear(D3DVECTOR4 *retVector, float Time, D3DVECTOR4 *KeyFrame1, D3DVECTOR4 *KeyFrame2);
void  V4Interpolate_LinearEX(D3DVECTOR4 *retVertices, long NumVertices, float Time, D3DVECTOR4 *KeyFrame1, D3DVECTOR4 *KeyFrame2);
void  V4Interpolate_HermitSpline(D3DVECTOR4 *retVector, float Time, D3DVECTOR4 *KeyFrame1, D3DVECTOR4 *KeyFrame2, D3DVECTOR4 *KeyFrame3, D3DVECTOR4 *KeyFrame4);
void  V4Interpolate_HermitSplineEX(D3DVECTOR4 *retVertices, long NumVertices, float Time, D3DVECTOR4 *KeyFrame1, D3DVECTOR4 *KeyFrame2, D3DVECTOR4 *KeyFrame3, D3DVECTOR4 *KeyFrame4);


//    |œœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœ|
//    |œœ                    Color Prototypes                    œœ|
//    |œœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœ|


typedef struct D3DCOLORVALUE
{
	float R;
	float G;
	float B;
	float A;
} _D3DCOLORVALUE;


void  CLRBlack(D3DCOLORVALUE& retColor);
void  CLRLightGray(D3DCOLORVALUE& retColor);
void  CLRMediumGray(D3DCOLORVALUE& retColor);
void  CLRDarkGray(D3DCOLORVALUE& retColor);
void  CLRWhite(D3DCOLORVALUE& retColor);
void  CLRRed(D3DCOLORVALUE& retColor);
void  CLRGreen(D3DCOLORVALUE& retColor);
void  CLRBlue(D3DCOLORVALUE& retColor);
void  CLRMagenta(D3DCOLORVALUE& retColor);
void  CLRCyan(D3DCOLORVALUE& retColor);
void  CLRYellow(D3DCOLORVALUE& retColor);
void  CLRNegate(D3DCOLORVALUE& retColor);
void  CLRCapColor(D3DCOLORVALUE& Color);
void  CLRScale(D3DCOLORVALUE& Color, float ScaleAmount);
bool  CLRTwoColorsAreNearlyEqual(D3DCOLORVALUE& Color1, D3DCOLORVALUE& Color2);
void  CLRInterpolate_Linear(D3DCOLORVALUE *retColor, float Time, D3DCOLORVALUE *Color1, D3DCOLORVALUE *Color2);
void  CLRInterpolate_HermitSpline(D3DCOLORVALUE *retColor, float Time, D3DCOLORVALUE *Color1, D3DCOLORVALUE *Color2, D3DCOLORVALUE *Color3, D3DCOLORVALUE *Color4);
void  CLRAdd(D3DCOLORVALUE& retColor, D3DCOLORVALUE& Color1, D3DCOLORVALUE& Color2);
void  CLRAverage(D3DCOLORVALUE& retColor, D3DCOLORVALUE& Color1, D3DCOLORVALUE& Color2);
void  CLRSubtract(D3DCOLORVALUE& retColor, D3DCOLORVALUE& Color1, D3DCOLORVALUE& Color2);
void  CLRDivideSC(D3DCOLORVALUE& retColor, float Scalar, D3DCOLORVALUE& Color);
void  CLRDivideCS(D3DCOLORVALUE& retColor, D3DCOLORVALUE& Color, float Scalar);
void  CLRDivideCC(D3DCOLORVALUE& retColor, D3DCOLORVALUE& Color1, D3DCOLORVALUE& Color2);
void  CLRMultiplySC(D3DCOLORVALUE& retColor, float Scalar, D3DCOLORVALUE& Color);
void  CLRMultiplyCS(D3DCOLORVALUE& retColor, D3DCOLORVALUE& Color, float Scalar);
float CLRMultiplyCC(D3DCOLORVALUE& Color1, D3DCOLORVALUE& Color2);


//    |œœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœ|
//    |œœ                  Matrix 3 Prototypes                   œœ|
//    |œœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœ|


typedef struct D3DMATRIX3
{
	float m11, m12, m13, 
		  m21, m22, m23, 
		  m31, m32, m33;
} _D3DMATRIX3;


void  M3Zero(D3DMATRIX3& retMatrix);
void  M3Identity(D3DMATRIX3& retMatrix);
bool  M3IsIdentity(D3DMATRIX3& Matrix);
float M3Determinate(D3DMATRIX3& Matrix);
void  M3Copy(D3DMATRIX3& retMatrix, D3DMATRIX3& Matrix);
void  M3Inverse(D3DMATRIX3& retMatrix, D3DMATRIX3& Matrix);
void  M3Transpose(D3DMATRIX3& retMatrix, D3DMATRIX3& Matrix);	
void  M3Add(D3DMATRIX3& retMatrix, D3DMATRIX3& Matrix1, D3DMATRIX3& Matrix2);
void  M3Subtract(D3DMATRIX3& retMatrix, D3DMATRIX3& Matrix1, D3DMATRIX3& Matrix2);
void  M3DivideMS(D3DMATRIX3& retMatrix, D3DMATRIX3& Matrix, float Scalar);
void  M3DivideSM(D3DMATRIX3& retMatrix, float Scalar, D3DMATRIX3& Matrix);
void  M3DivideMM(D3DMATRIX3& retMatrix, D3DMATRIX3& Matrix1, D3DMATRIX3& Matrix2);
void  M3MultiplyMM(D3DMATRIX3& retMatrix, D3DMATRIX3& Matrix1, D3DMATRIX3& Matrix2);
void  M3MultiplyMS(D3DMATRIX3& retMatrix, D3DMATRIX3& Matrix, float Scalar);
void  M3MultiplySM(D3DMATRIX3& retMatrix, float Scalar, D3DMATRIX3& Matrix);
void  M3MultiplyMV(D3DVECTOR& retVector, D3DMATRIX3& Matrix, D3DVECTOR& Vector);
void  M3MultiplyVM(D3DVECTOR& retVector, D3DVECTOR& Vector, D3DMATRIX3& Matrix);


//    |œœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœ|
//    |œœ                  Matrix 4 Prototypes                   œœ|
//    |œœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœ|


typedef struct D3DMATRIX
{
	float m11, m12, m13, m14, 
		  m21, m22, m23, m24, 
		  m31, m32, m33, m34,
		  m41, m42, m43, m44;
} _D3DMATRIX;


void M4Zero(D3DMATRIX& retMatrix);
void M4Identity(D3DMATRIX& retMatrix);
bool M4IsIdentity(D3DMATRIX& Matrix);
void M4Copy(D3DMATRIX& retMatrix, D3DMATRIX& Matrix);
void M4Inverse(D3DMATRIX& retMatrix, D3DMATRIX& Matrix);
void M4Transpose(D3DMATRIX& retMatrix, D3DMATRIX& Matrix);
void M4GetLocation(D3DVECTOR& retVector, D3DMATRIX& Matrix);
void M4RotateX(D3DMATRIX& retMatrix, float Angle);
void M4RotateY(D3DMATRIX& retMatrix, float Angle);
void M4RotateZ(D3DMATRIX& retMatrix, float Angle);
void M4Scale(D3DMATRIX& retMatrix, D3DVECTOR& Amount);
void M4Position(D3DMATRIX& retMatrix, D3DVECTOR& Position);
void M4Translate(D3DMATRIX& retMatrix, D3DVECTOR& Position);
void M4AxisAngle(D3DMATRIX& retMatrix, D3DVECTOR& Axis, float Angle);
void M4RotateEX(D3DMATRIX& retMatrix, D3DMATRIX& Matrix, float AngleX, float AngleY, float AngleZ);
void M4ObjectLookAt(D3DMATRIX& retMatrix, D3DVECTOR& Location, D3DVECTOR& LookAt, D3DVECTOR& Up);
void M4CameraLookAt(D3DMATRIX& retMatrix, D3DVECTOR& Location, D3DVECTOR& LookAt, D3DVECTOR& Up);
void M4OpMatrix(D3DMATRIX& retMatrix, D3DVECTOR& Position, D3DVECTOR& Rotation, D3DVECTOR& ScaleAmount);
void M4Add(D3DMATRIX& retMatrix, D3DMATRIX& Matrix1, D3DMATRIX& Matrix2);
void M4Subtract(D3DMATRIX& retMatrix, D3DMATRIX& Matrix1, D3DMATRIX& Matrix2);
void M4DivideMS(D3DMATRIX& retMatrix, D3DMATRIX Matrix, float Scalar);
void M4DivideSM(D3DMATRIX& retMatrix, float Scalar, D3DMATRIX& Matrix);
void M4DivideMM(D3DMATRIX& retMatrix, D3DMATRIX& Matrix1, D3DMATRIX& Matrix2);
void M4MultiplyMM(D3DMATRIX& retMatrix, D3DMATRIX& Matrix1, D3DMATRIX& Matrix2);
void M4MultiplyMS(D3DMATRIX& retMatrix, D3DMATRIX& Matrix, float Scalar);
void M4MultiplySM(D3DMATRIX& retMatrix, float Scalar, D3DMATRIX& Matrix);
void M4MultiplyMV(D3DVECTOR4& retVector, D3DMATRIX& Matrix, D3DVECTOR4& Vector);
void M4MultiplyVM(D3DVECTOR4& retVector, D3DVECTOR4& Vector, D3DMATRIX& Matrix);


//    |œœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœ|
//    |œœ                Quaternion Prototypes                   œœ|
//    |œœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœ|


typedef struct D3DQUATERNION
{
	float X;
	float Y;
	float Z;
	float W;
} _D3DQUATERNION;


void  QTIdentity(D3DQUATERNION& retQuat);
bool  QTIsIdentity(D3DQUATERNION& Quat);
void  QTZero(D3DQUATERNION& retQuat);
void  QTNegate(D3DQUATERNION& retQuat);
void  QTCopy(D3DQUATERNION& retQuat, D3DQUATERNION& Quat);
float QTMagnitude(D3DQUATERNION& Quat);
float QTGetScalar(D3DQUATERNION& Quat);
void  QTGetVector(D3DVECTOR& retVector, D3DQUATERNION& Quat);
float QTMagnitudeSquared(D3DQUATERNION& Quat);
float QTQuaternionGetAngle(D3DQUATERNION& Quat);
void  QTQuaternionGetAxis(D3DVECTOR& retVector, D3DQUATERNION& Quat);
void  QTQuaternionRotate(D3DQUATERNION& retQuat, D3DQUATERNION& Quat1, D3DQUATERNION& Quat2);
void  QTQuaternionVectorRotate(D3DVECTOR& retVector, D3DQUATERNION& Quat, D3DVECTOR& Vector);
void  QTCreateEularAnglesFromQuaternion(D3DVECTOR& retVector, D3DQUATERNION& Quat);
void  QTCreateQuaternionFromEularAngles(D3DQUATERNION& retQuat, float X, float Y, float Z);
void  QTCreateQuaternionFromAxisAngle(D3DQUATERNION& retQuat, float X, float Y, float Z, float Degrees);
void  QTCreateMatrix(D3DQUATERNION& Quat, D3DMATRIX *Matrix);
void  QTAdd(D3DQUATERNION& retQuat, D3DQUATERNION& Quat1, D3DQUATERNION& Quat2);
void  QTAverage(D3DQUATERNION& retQuat, D3DQUATERNION& Quat1, D3DQUATERNION& Quat2);
void  QTSubtract(D3DQUATERNION& retQuat, D3DQUATERNION& Quat1, D3DQUATERNION& Quat2);
void  QTDivideSQ(D3DQUATERNION& retQuat, float Scalar, D3DQUATERNION& Quat);
void  QTDivideQS(D3DQUATERNION& retQuat, D3DQUATERNION& Quat, float Scalar);
void  QTDivideQQ(D3DQUATERNION& retQuat, D3DQUATERNION& Quat1, D3DQUATERNION& Quat2);
void  QTMultiplySQ(D3DQUATERNION& retQuat, float Scalar, D3DQUATERNION& Quat);
void  QTMultiplyQS(D3DQUATERNION& retQuat, D3DQUATERNION& Quat, float Scalar);
float QTMultiplyQQ(D3DQUATERNION& Quat1, D3DQUATERNION& Quat2);
void  QTMultiplyQV(D3DQUATERNION& retQuat, D3DQUATERNION& Quat, D3DVECTOR& Vector);
void  QTMultiplyVQ(D3DQUATERNION& retQuat, D3DVECTOR& Vector, D3DQUATERNION& Quat);


#endif