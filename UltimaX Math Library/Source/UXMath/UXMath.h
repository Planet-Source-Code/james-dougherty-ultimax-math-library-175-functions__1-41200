//    |¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶|
//    |¶¶                ©2002 Ariel Productions              ¶¶|
//    |¶¶                  All Rights Reserved                ¶¶|
//    |¶¶¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¶¶|
//    |                                                         |
//    |¶¶¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¶¶|
//    |¶¶             Programmer - James Dougherty            ¶¶|
//    |¶¶             First Compile - 11.21.02                ¶¶|
//    |¶¶             Source - UXMath.h                       ¶¶|
//    |¶¶             Object - UXMath.dll                     ¶¶|
//    |¶¶             Version - 1.1                           ¶¶|
//    |¶¶¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¶¶|
//    |                                                         |
//    |¶¶¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¶¶|
//    |¶¶                                                     ¶¶|
//    |¶¶ XMeshOps is free software; you can redistribute     ¶¶|
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


#include "XMath.h"


//    |œœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœ|
//    |œœ                  Vector 2 Prototypes                   œœ|
//    |œœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœ|


_declspec(dllexport) bool  _stdcall V2_Zero(D3DVECTOR2& Vector);
_declspec(dllexport) bool  _stdcall V2_Negate(D3DVECTOR2& Vector);
_declspec(dllexport) float _stdcall V2_Magnitude(D3DVECTOR2& Vector);
_declspec(dllexport) bool  _stdcall V2_Normalize(D3DVECTOR2& Vector);
_declspec(dllexport) float _stdcall V2_MagnitudeSquared(D3DVECTOR2& Vector);
_declspec(dllexport) bool  _stdcall V2_Copy(D3DVECTOR2& retVector, D3DVECTOR2& Vector);
_declspec(dllexport) bool  _stdcall V2_Scale(D3DVECTOR2& retVector, D3DVECTOR2& Vector, float ScaleAmount);
_declspec(dllexport) bool  _stdcall V2_Minimize(D3DVECTOR2& retVector, D3DVECTOR2& Vector1, D3DVECTOR2& Vector2);
_declspec(dllexport) bool  _stdcall V2_Maximize(D3DVECTOR2& retVector, D3DVECTOR2& Vector1, D3DVECTOR2& Vector2);
_declspec(dllexport) float _stdcall V2_Distance(D3DVECTOR2& Vector1, D3DVECTOR2& Vector2);
_declspec(dllexport) int   _stdcall V2_FastDistance(D3DVECTOR2& Vector1, D3DVECTOR2& Vector2);
_declspec(dllexport) bool  _stdcall V2_TwoVectorsAreNearlyEqual(D3DVECTOR2& Vector1, D3DVECTOR2& Vector2);
_declspec(dllexport) bool  _stdcall V2_ComputeBoundingBox(D3DVECTOR2 *Vertices, long NumVertices, D3DVECTOR2& retBox_Min, D3DVECTOR2& retBox_Max);
_declspec(dllexport) bool  _stdcall V2_ComputeBoundingSphere(D3DVECTOR2 *Vertices, long NumVertices, D3DVECTOR2& retSphereCenter, float retSphereRadius);
_declspec(dllexport) bool  _stdcall V2_VectorContainedInBoundingBox(D3DVECTOR2& Vector, D3DVECTOR2& Box_Min, D3DVECTOR2& Box_Max);
_declspec(dllexport) bool  _stdcall V2_IsCollision(D3DVECTOR2& Collider_Position, float Collider_Radius, D3DVECTOR2& Object_Position, float Object_Radius);
_declspec(dllexport) bool  _stdcall V2_IsCollisionEX(D3DVECTOR2& Collider_Position, float Collider_Radius, D3DVECTOR2& Object_Position, float Object_Radius);
_declspec(dllexport) bool  _stdcall V2_Interpolate_Linear(D3DVECTOR2 *retVector, float Time, D3DVECTOR2 *KeyFrame1, D3DVECTOR2 *KeyFrame2);
_declspec(dllexport) bool  _stdcall V2_Interpolate_LinearEX(D3DVECTOR2 *retVertices, long NumVertices, float Time, D3DVECTOR2 *KeyFrame1, D3DVECTOR2 *KeyFrame2);
_declspec(dllexport) bool  _stdcall V2_Interpolate_HermitSpline(D3DVECTOR2 *retVector, float Time, D3DVECTOR2 *KeyFrame1, D3DVECTOR2 *KeyFrame2, D3DVECTOR2 *KeyFrame3, D3DVECTOR2 *KeyFrame4);
_declspec(dllexport) bool  _stdcall V2_Interpolate_HermitSplineEX(D3DVECTOR2 *retVertices, long NumVertices, float Time, D3DVECTOR2 *KeyFrame1, D3DVECTOR2 *KeyFrame2, D3DVECTOR2 *KeyFrame3, D3DVECTOR2 *KeyFrame4);
_declspec(dllexport) bool  _stdcall V2_Add(D3DVECTOR2& retVector, D3DVECTOR2& Vector1, D3DVECTOR2& Vector2);
_declspec(dllexport) bool  _stdcall V2_Average(D3DVECTOR2& retVector, D3DVECTOR2& Vector1, D3DVECTOR2& Vector2);
_declspec(dllexport) float _stdcall V2_DotProduct(D3DVECTOR2& Vector1, D3DVECTOR2& Vector2);
_declspec(dllexport) bool  _stdcall V2_Subtract(D3DVECTOR2& retVector, D3DVECTOR2& Vector1, D3DVECTOR2& Vector2);
_declspec(dllexport) bool  _stdcall V2_DivideSV(D3DVECTOR2& retVector, float Scalar, D3DVECTOR2& Vector);
_declspec(dllexport) bool  _stdcall V2_DivideVS(D3DVECTOR2& retVector, D3DVECTOR2& Vector, float Scalar);
_declspec(dllexport) bool  _stdcall V2_DivideVV(D3DVECTOR2& retVector, D3DVECTOR2& Vector1, D3DVECTOR2& Vector2);
_declspec(dllexport) bool  _stdcall V2_MultiplySV(D3DVECTOR2& retVector, float Scalar, D3DVECTOR2& Vector);
_declspec(dllexport) bool  _stdcall V2_MultiplyVS(D3DVECTOR2& retVector, D3DVECTOR2& Vector, float Scalar);
_declspec(dllexport) float _stdcall V2_MultiplyVV(D3DVECTOR2& Vector1, D3DVECTOR2& Vector2);


//    |œœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœ|
//    |œœ                  Vector 3 Prototypes                   œœ|
//    |œœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœ|


_declspec(dllexport) bool   _stdcall V3_Zero(D3DVECTOR& Vector);
_declspec(dllexport) bool   _stdcall V3_Negate(D3DVECTOR& Vector);
_declspec(dllexport) float  _stdcall V3_Magnitude(D3DVECTOR& Vector);
_declspec(dllexport) bool   _stdcall V3_Normalize(D3DVECTOR& Vector);
_declspec(dllexport) float  _stdcall V3_MagnitudeSquared(D3DVECTOR& Vector);
_declspec(dllexport) bool   _stdcall V3_Copy(D3DVECTOR& retVector, D3DVECTOR& Vector);
_declspec(dllexport) bool   _stdcall V3_Scale(D3DVECTOR& retVector, D3DVECTOR& Vector, float ScaleAmount);
_declspec(dllexport) bool   _stdcall V3_Minimize(D3DVECTOR& retVector, D3DVECTOR& Vector1, D3DVECTOR& Vector2);
_declspec(dllexport) bool   _stdcall V3_Maximize(D3DVECTOR& retVector, D3DVECTOR& Vector1, D3DVECTOR& Vector2);
_declspec(dllexport) float  _stdcall V3_Distance(D3DVECTOR& Vector1, D3DVECTOR& Vector2);
_declspec(dllexport) float  _stdcall V3_FastDistance(D3DVECTOR& Vector1, D3DVECTOR& Vector2);
_declspec(dllexport) bool   _stdcall V3_TwoVectorsAreNearlyEqual(D3DVECTOR2& Vector1, D3DVECTOR2& Vector2);
_declspec(dllexport) bool  _stdcall  V3_ComputeBoundingBox(D3DVECTOR *Vertices, long NumVertices, D3DVECTOR& retBox_Min, D3DVECTOR& retBox_Max);
_declspec(dllexport) bool  _stdcall  V3_ComputeBoundingSphere(D3DVECTOR *Vertices, long NumVertices, D3DVECTOR& retSphereCenter, float retSphereRadius);
_declspec(dllexport) bool  _stdcall  V3_VectorContainedInBoundingBox(D3DVECTOR& Vector, D3DVECTOR& Box_Min, D3DVECTOR& Box_Max);
_declspec(dllexport) bool   _stdcall V3_IsCollision(D3DVECTOR& Collider_Position, float Collider_Radius, D3DVECTOR& Object_Position, float Object_Radius);
_declspec(dllexport) bool   _stdcall V3_IsCollisionEX(D3DVECTOR& Collider_Position, float Collider_Radius, D3DVECTOR& Object_Position, float Object_Radius);
_declspec(dllexport) bool   _stdcall V3_Interpolate_Linear(D3DVECTOR *retVector, float Time, D3DVECTOR *KeyFrame1, D3DVECTOR *KeyFrame2);
_declspec(dllexport) bool   _stdcall V3_Interpolate_LinearEX(D3DVECTOR *retVertices, long NumVertices, float Time, D3DVECTOR *KeyFrame1, D3DVECTOR2 *KeyFrame2);
_declspec(dllexport) bool   _stdcall V3_Interpolate_HermitSpline(D3DVECTOR *retVector, float Time, D3DVECTOR *KeyFrame1, D3DVECTOR *KeyFrame2, D3DVECTOR *KeyFrame3, D3DVECTOR *KeyFrame4);
_declspec(dllexport) bool   _stdcall V3_Interpolate_HermitSplineEX(D3DVECTOR *retVertices, long NumVertices, float Time, D3DVECTOR *KeyFrame1, D3DVECTOR *KeyFrame2, D3DVECTOR *KeyFrame3, D3DVECTOR *KeyFrame4);
_declspec(dllexport) bool   _stdcall V3_Add(D3DVECTOR& retVector, D3DVECTOR& Vector1, D3DVECTOR& Vector2);
_declspec(dllexport) bool   _stdcall V3_Average(D3DVECTOR& retVector, D3DVECTOR& Vector1, D3DVECTOR& Vector2);
_declspec(dllexport) float  _stdcall V3_DotProduct(D3DVECTOR& Vector1, D3DVECTOR& Vector2);
_declspec(dllexport) bool   _stdcall V3_Subtract(D3DVECTOR& retVector, D3DVECTOR& Vector1, D3DVECTOR& Vector2);
_declspec(dllexport) bool   _stdcall V3_DivideSV(D3DVECTOR& retVector, float Scalar, D3DVECTOR& Vector);
_declspec(dllexport) bool   _stdcall V3_DivideVS(D3DVECTOR& retVector, D3DVECTOR& Vector, float Scalar);
_declspec(dllexport) bool   _stdcall V3_DivideVV(D3DVECTOR& retVector, D3DVECTOR& Vector1, D3DVECTOR& Vector2);
_declspec(dllexport) bool   _stdcall V3_MultiplySV(D3DVECTOR& retVector, float Scalar, D3DVECTOR2& Vector);
_declspec(dllexport) bool   _stdcall V3_MultiplyVS(D3DVECTOR& retVector, D3DVECTOR& Vector, float Scalar);
_declspec(dllexport) float  _stdcall V3_MultiplyVV(D3DVECTOR& Vector1, D3DVECTOR& Vector2);
_declspec(dllexport) float  _stdcall V3_ScalarProduct(D3DVECTOR& Vector1, D3DVECTOR& Vector2, D3DVECTOR& Vector3);
_declspec(dllexport) bool   _stdcall V3_Spherical(D3DVECTOR& retVector, float Theta, float Rho, float Phi);
_declspec(dllexport) bool   _stdcall V3_CrossProduct(D3DVECTOR& retVector, D3DVECTOR& Vector1, D3DVECTOR& Vector2);
_declspec(dllexport) bool   _stdcall V3_Power(D3DVECTOR& retVector, D3DVECTOR& Vector1, D3DVECTOR& Vector2);
_declspec(dllexport) double _stdcall V3_AngleBetweenVectors(D3DVECTOR& Vector1, D3DVECTOR& Vector2);
_declspec(dllexport) bool   _stdcall V3_IntersectedPolygon(D3DVECTOR *Polygon, long NumVertices, D3DVECTOR& RayStart, D3DVECTOR& RayEnd);
_declspec(dllexport) bool   _stdcall V3_SpherePolygonCollision(D3DVECTOR *Vertices, long NumVertices, D3DVECTOR& SphereCenter, float SphereRadius);
_declspec(dllexport) bool   _stdcall V3_ClosestPointOnLine(D3DVECTOR& retVector, D3DVECTOR& LineStart, D3DVECTOR& LineEnd, D3DVECTOR& Point);
_declspec(dllexport) bool   _stdcall V3_PolygonNormal(D3DVECTOR& retVector, D3DVECTOR& Polygon1, D3DVECTOR& Polygon2, D3DVECTOR& Polygon3);


//    |œœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœ|
//    |œœ                  Vector 4 Prototypes                   œœ|
//    |œœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœ|


_declspec(dllexport) bool  _stdcall V4_Zero(D3DVECTOR4& Vector);
_declspec(dllexport) bool  _stdcall V4_Negate(D3DVECTOR4& Vector);
_declspec(dllexport) float _stdcall V4_Magnitude(D3DVECTOR4& Vector);
_declspec(dllexport) bool  _stdcall V4_Normalize(D3DVECTOR4& Vector);
_declspec(dllexport) float _stdcall V4_MagnitudeSquared(D3DVECTOR4& Vector);
_declspec(dllexport) bool  _stdcall V4_Copy(D3DVECTOR4& retVector, D3DVECTOR4& Vector);
_declspec(dllexport) bool  _stdcall V4_Scale(D3DVECTOR4& retVector, D3DVECTOR4& Vector, float ScaleAmount);
_declspec(dllexport) bool  _stdcall V4_Minimize(D3DVECTOR4& retVector, D3DVECTOR4& Vector1, D3DVECTOR4& Vector2);
_declspec(dllexport) bool  _stdcall V4_Maximize(D3DVECTOR4& retVector, D3DVECTOR4& Vector1, D3DVECTOR4& Vector2);
_declspec(dllexport) float _stdcall V4_Distance(D3DVECTOR4& Vector1, D3DVECTOR4& Vector2);
_declspec(dllexport) int   _stdcall V4_FastDistance(D3DVECTOR4& Vector1, D3DVECTOR4& Vector2);
_declspec(dllexport) bool  _stdcall V4_TwoVectorsAreNearlyEqual(D3DVECTOR4& Vector1, D3DVECTOR4& Vector2);
_declspec(dllexport) bool  _stdcall V4_ComputeBoundingBox(D3DVECTOR4 *Vertices, long NumVertices, D3DVECTOR4& retBox_Min, D3DVECTOR4& retBox_Max);
_declspec(dllexport) bool  _stdcall V4_ComputeBoundingSphere(D3DVECTOR4 *Vertices, long NumVertices, D3DVECTOR4& retSphereCenter, float retSphereRadius);
_declspec(dllexport) bool  _stdcall V4_VectorContainedInBoundingBox(D3DVECTOR4& Vector, D3DVECTOR4& Box_Min, D3DVECTOR4& Box_Max);
_declspec(dllexport) bool  _stdcall V4_IsCollision(D3DVECTOR4& Collider_Position, float Collider_Radius, D3DVECTOR4& Object_Position, float Object_Radius);
_declspec(dllexport) bool  _stdcall V4_IsCollisionEX(D3DVECTOR4& Collider_Position, float Collider_Radius, D3DVECTOR4& Object_Position, float Object_Radius);
_declspec(dllexport) bool  _stdcall V4_Interpolate_Linear(D3DVECTOR4 *retVector, float Time, D3DVECTOR4 *KeyFrame1, D3DVECTOR4 *KeyFrame2);
_declspec(dllexport) bool  _stdcall V4_Interpolate_LinearEX(D3DVECTOR4 *retVertices, long NumVertices, float Time, D3DVECTOR2 *KeyFrame1, D3DVECTOR2 *KeyFrame2);
_declspec(dllexport) bool  _stdcall V4_Interpolate_HermitSpline(D3DVECTOR4 *retVector, float Time, D3DVECTOR4 *KeyFrame1, D3DVECTOR2 *KeyFrame2, D3DVECTOR4 *KeyFrame3, D3DVECTOR4 *KeyFrame4);
_declspec(dllexport) bool  _stdcall V4_Interpolate_HermitSplineEX(D3DVECTOR4 *retVertices, long NumVertices, float Time, D3DVECTOR2 *KeyFrame1, D3DVECTOR4 *KeyFrame2, D3DVECTOR4 *KeyFrame3, D3DVECTOR4 *KeyFrame4);
_declspec(dllexport) bool  _stdcall V4_Add(D3DVECTOR2& retVector, D3DVECTOR4& Vector1, D3DVECTOR4& Vector2);
_declspec(dllexport) bool  _stdcall V4_Average(D3DVECTOR4& retVector, D3DVECTOR4& Vector1, D3DVECTOR4& Vector2);
_declspec(dllexport) float _stdcall V4_DotProduct(D3DVECTOR4& Vector1, D3DVECTOR4& Vector2);
_declspec(dllexport) bool  _stdcall V4_Subtract(D3DVECTOR4& retVector, D3DVECTOR4& Vector1, D3DVECTOR4& Vector2);
_declspec(dllexport) bool  _stdcall V4_DivideSV(D3DVECTOR4& retVector, float Scalar, D3DVECTOR4& Vector);
_declspec(dllexport) bool  _stdcall V4_DivideVS(D3DVECTOR4& retVector, D3DVECTOR4& Vector, float Scalar);
_declspec(dllexport) bool  _stdcall V4_DivideVV(D3DVECTOR4& retVector, D3DVECTOR4& Vector1, D3DVECTOR4& Vector2);
_declspec(dllexport) bool  _stdcall V4_MultiplySV(D3DVECTOR4& retVector, float Scalar, D3DVECTOR4& Vector);
_declspec(dllexport) bool  _stdcall V4_MultiplyVS(D3DVECTOR4& retVector, D3DVECTOR4& Vector, float Scalar);
_declspec(dllexport) float _stdcall V4_MultiplyVV(D3DVECTOR4& Vector1, D3DVECTOR4& Vector2);


//    |œœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœ|
//    |œœ                    Color Prototypes                    œœ|
//    |œœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœ|


_declspec(dllexport) bool  _stdcall CLR_Black(D3DCOLORVALUE& retColor);
_declspec(dllexport) bool  _stdcall CLR_LightGray(D3DCOLORVALUE& retColor);
_declspec(dllexport) bool  _stdcall CLR_MediumGray(D3DCOLORVALUE& retColor);
_declspec(dllexport) bool  _stdcall CLR_DarkGray(D3DCOLORVALUE& retColor);
_declspec(dllexport) bool  _stdcall CLR_White(D3DCOLORVALUE& retColor);
_declspec(dllexport) bool  _stdcall CLR_Red(D3DCOLORVALUE& retColor);
_declspec(dllexport) bool  _stdcall CLR_Green(D3DCOLORVALUE& retColor);
_declspec(dllexport) bool  _stdcall CLR_Blue(D3DCOLORVALUE& retColor);
_declspec(dllexport) bool  _stdcall CLR_Magenta(D3DCOLORVALUE& retColor);
_declspec(dllexport) bool  _stdcall CLR_Cyan(D3DCOLORVALUE& retColor);
_declspec(dllexport) bool  _stdcall CLR_Yellow(D3DCOLORVALUE& retColor);
_declspec(dllexport) bool  _stdcall CLR_Negate(D3DCOLORVALUE& retColor);
_declspec(dllexport) bool  _stdcall CLR_CapColor(D3DCOLORVALUE& Color);
_declspec(dllexport) bool  _stdcall CLR_Scale(D3DCOLORVALUE& retColor, D3DCOLORVALUE& Color, float ScaleAmount);
_declspec(dllexport) bool  _stdcall CLR_TwoColorsAreNearlyEqual(D3DCOLORVALUE& Color1, D3DCOLORVALUE& Color2);
_declspec(dllexport) bool  _stdcall CLR_Interpolate_Linear(D3DCOLORVALUE *retColor, float Time, D3DCOLORVALUE *Color1, D3DCOLORVALUE *Color2);
_declspec(dllexport) bool  _stdcall CLR_Interpolate_HermitSpline(D3DCOLORVALUE *retColor, float Time, D3DCOLORVALUE *Color1, D3DCOLORVALUE *Color2, D3DCOLORVALUE *Color3, D3DCOLORVALUE *Color4);
_declspec(dllexport) bool  _stdcall CLR_Add(D3DCOLORVALUE& retColor, D3DCOLORVALUE& Color1, D3DCOLORVALUE& Color2);
_declspec(dllexport) bool  _stdcall CLR_Average(D3DCOLORVALUE& retColor, D3DCOLORVALUE& Color1, D3DCOLORVALUE& Color2);
_declspec(dllexport) bool  _stdcall CLR_Subtract(D3DCOLORVALUE& retColor, D3DCOLORVALUE& Color1, D3DCOLORVALUE& Color2);
_declspec(dllexport) bool  _stdcall CLR_DivideSC(D3DCOLORVALUE& retColor, float Scalar, D3DCOLORVALUE& Color);
_declspec(dllexport) bool  _stdcall CLR_DivideCS(D3DCOLORVALUE& retColor, D3DCOLORVALUE& Color, float Scalar);
_declspec(dllexport) bool  _stdcall CLR_DivideCC(D3DCOLORVALUE& retColor, D3DCOLORVALUE& Color1, D3DCOLORVALUE& Color2);
_declspec(dllexport) bool  _stdcall CLR_MultiplySC(D3DCOLORVALUE& retColor, float Scalar, D3DCOLORVALUE& Color);
_declspec(dllexport) bool  _stdcall CLR_MultiplyCS(D3DCOLORVALUE& retColor, D3DCOLORVALUE& Color, float Scalar);
_declspec(dllexport) float _stdcall CLR_MultiplyCC(D3DCOLORVALUE& Color1, D3DCOLORVALUE& Color2);


//    |œœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœ|
//    |œœ                  Matrix 3 Prototypes                   œœ|
//    |œœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœ|


_declspec(dllexport) bool  _stdcall M3_Zero(D3DMATRIX3& retMatrix);
_declspec(dllexport) bool  _stdcall M3_Identity(D3DMATRIX3& retMatrix);
_declspec(dllexport) bool  _stdcall M3_IsIdentity(D3DMATRIX3& Matrix);
_declspec(dllexport) float _stdcall M3_Determinate(D3DMATRIX3& Matrix);
_declspec(dllexport) bool  _stdcall M3_Copy(D3DMATRIX3& retMatrix, D3DMATRIX3& Matrix);
_declspec(dllexport) bool  _stdcall M3_Inverse(D3DMATRIX3& retMatrix, D3DMATRIX3& Matrix);
_declspec(dllexport) bool  _stdcall M3_Transpose(D3DMATRIX3& retMatrix, D3DMATRIX3& Matrix);	
_declspec(dllexport) bool  _stdcall M3_Add(D3DMATRIX3& retMatrix, D3DMATRIX3& Matrix1, D3DMATRIX3& Matrix2);
_declspec(dllexport) bool  _stdcall M3_Subtract(D3DMATRIX3& retMatrix, D3DMATRIX3& Matrix1, D3DMATRIX3& Matrix2);
_declspec(dllexport) bool  _stdcall M3_DivideMS(D3DMATRIX3& retMatrix, D3DMATRIX3& Matrix, float Scalar);
_declspec(dllexport) bool  _stdcall M3_DivideSM(D3DMATRIX3& retMatrix, float Scalar, D3DMATRIX3& Matrix);
_declspec(dllexport) bool  _stdcall M3_DivideMM(D3DMATRIX3& retMatrix, D3DMATRIX3& Matrix1, D3DMATRIX3& Matrix2);
_declspec(dllexport) bool  _stdcall M3_MultiplyMM(D3DMATRIX3& retMatrix, D3DMATRIX3& Matrix1, D3DMATRIX3& Matrix2);
_declspec(dllexport) bool  _stdcall M3_MultiplyMS(D3DMATRIX3& retMatrix, D3DMATRIX3& Matrix, float Scalar);
_declspec(dllexport) bool  _stdcall M3_MultiplySM(D3DMATRIX3& retMatrix, float Scalar, D3DMATRIX3& Matrix);
_declspec(dllexport) bool  _stdcall M3_MultiplyMV(D3DVECTOR& retVector, D3DMATRIX3& Matrix, D3DVECTOR& Vector);
_declspec(dllexport) bool  _stdcall M3_MultiplyVM(D3DVECTOR& retVector, D3DVECTOR& Vector, D3DMATRIX3& Matrix);


//    |œœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœ|
//    |œœ                  Matrix 4 Prototypes                   œœ|
//    |œœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœ|


_declspec(dllexport) bool  _stdcall M4_Zero(D3DMATRIX& retMatrix);
_declspec(dllexport) bool  _stdcall M4_Identity(D3DMATRIX& retMatrix);
_declspec(dllexport) bool  _stdcall M4_IsIdentity(D3DMATRIX& Matrix);
_declspec(dllexport) bool  _stdcall M4_Copy(D3DMATRIX& retMatrix, D3DMATRIX& Matrix);
_declspec(dllexport) bool  _stdcall M4_Inverse(D3DMATRIX& retMatrix, D3DMATRIX& Matrix);
_declspec(dllexport) bool  _stdcall M4_Transpose(D3DMATRIX& retMatrix, D3DMATRIX& Matrix);
_declspec(dllexport) bool  _stdcall M4_GetLocation(D3DVECTOR& retVector, D3DMATRIX& Matrix);
_declspec(dllexport) bool  _stdcall M4_RotateX(D3DMATRIX& retMatrix, float Angle);
_declspec(dllexport) bool  _stdcall M4_RotateY(D3DMATRIX& retMatrix, float Angle);
_declspec(dllexport) bool  _stdcall M4_RotateZ(D3DMATRIX& retMatrix, float Angle);
_declspec(dllexport) bool  _stdcall M4_Scale(D3DMATRIX& retMatrix, D3DVECTOR& Amount);
_declspec(dllexport) bool  _stdcall M4_Position(D3DMATRIX& retMatrix, D3DVECTOR& Position);
_declspec(dllexport) bool  _stdcall M4_Translate(D3DMATRIX& retMatrix, D3DVECTOR& Position);
_declspec(dllexport) bool  _stdcall M4_AxisAngle(D3DMATRIX& retMatrix, D3DVECTOR& Axis, float Angle);
_declspec(dllexport) bool  _stdcall M4_RotateEX(D3DMATRIX& retMatrix, D3DMATRIX& Matrix, float AngleX, float AngleY, float AngleZ);
_declspec(dllexport) bool  _stdcall M4_ObjectLookAt(D3DMATRIX& retMatrix, D3DVECTOR& Location, D3DVECTOR& LookAt, D3DVECTOR& Up);
_declspec(dllexport) bool  _stdcall M4_CameraLookAt(D3DMATRIX& retMatrix, D3DVECTOR& Location, D3DVECTOR& LookAt, D3DVECTOR& Up);
_declspec(dllexport) bool  _stdcall M4_OpMatrix(D3DMATRIX& retMatrix, D3DVECTOR& Position, D3DVECTOR& Rotation, D3DVECTOR& ScaleAmount);
_declspec(dllexport) bool  _stdcall M4_Add(D3DMATRIX& retMatrix, D3DMATRIX& Matrix1, D3DMATRIX& Matrix2);
_declspec(dllexport) bool  _stdcall M4_Subtract(D3DMATRIX& retMatrix, D3DMATRIX& Matrix1, D3DMATRIX& Matrix2);
_declspec(dllexport) bool  _stdcall M4_DivideMS(D3DMATRIX& retMatrix, D3DMATRIX Matrix, float Scalar);
_declspec(dllexport) bool  _stdcall M4_DivideSM(D3DMATRIX& retMatrix, float Scalar, D3DMATRIX& Matrix);
_declspec(dllexport) bool  _stdcall M4_DivideMM(D3DMATRIX& retMatrix, D3DMATRIX& Matrix1, D3DMATRIX& Matrix2);
_declspec(dllexport) bool  _stdcall M4_MultiplyMM(D3DMATRIX& retMatrix, D3DMATRIX& Matrix1, D3DMATRIX& Matrix2);
_declspec(dllexport) bool  _stdcall M4_MultiplyMS(D3DMATRIX& retMatrix, D3DMATRIX& Matrix, float Scalar);
_declspec(dllexport) bool  _stdcall M4_MultiplySM(D3DMATRIX& retMatrix, float Scalar, D3DMATRIX& Matrix);
_declspec(dllexport) bool  _stdcall M4_MultiplyMV(D3DVECTOR4& retVector, D3DMATRIX& Matrix, D3DVECTOR4& Vector);
_declspec(dllexport) bool  _stdcall M4_MultiplyVM(D3DVECTOR4& retVector, D3DVECTOR4& Vector, D3DMATRIX& Matrix);


//    |œœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœ|
//    |œœ                  Quaternion Prototypes                 œœ|
//    |œœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœ|


_declspec(dllexport) bool  _stdcall QT_Identity(D3DQUATERNION& retQuat);
_declspec(dllexport) bool  _stdcall QT_IsIdentity(D3DQUATERNION& Quat);
_declspec(dllexport) bool  _stdcall QT_Zero(D3DQUATERNION& retQuat);
_declspec(dllexport) bool  _stdcall QT_Negate(D3DQUATERNION& retQuat);
_declspec(dllexport) bool  _stdcall QT_Copy(D3DQUATERNION& retQuat, D3DQUATERNION& Quat);
_declspec(dllexport) float _stdcall QT_Magnitude(D3DQUATERNION& Quat);
_declspec(dllexport) float _stdcall QT_GetScalar(D3DQUATERNION& Quat);
_declspec(dllexport) bool  _stdcall QT_GetVector(D3DVECTOR& retVector, D3DQUATERNION& Quat);
_declspec(dllexport) float _stdcall QT_MagnitudeSquared(D3DQUATERNION& Quat);
_declspec(dllexport) float _stdcall QT_QuaternionGetAngle(D3DQUATERNION& Quat);
_declspec(dllexport) bool  _stdcall QT_QuaternionGetAxis(D3DVECTOR& retVector, D3DQUATERNION& Quat);
_declspec(dllexport) bool  _stdcall QT_QuaternionRotate(D3DQUATERNION& retQuat, D3DQUATERNION& Quat1, D3DQUATERNION& Quat2);
_declspec(dllexport) bool  _stdcall QT_QuaternionVectorRotate(D3DVECTOR& retVector, D3DQUATERNION& Quat, D3DVECTOR& Vector);
_declspec(dllexport) bool  _stdcall QT_CreateEularAnglesFromQuaternion(D3DVECTOR& retVector, D3DQUATERNION& Quat);
_declspec(dllexport) bool  _stdcall QT_CreateQuaternionFromEularAngles(D3DQUATERNION& retQuat, float X, float Y, float Z);
_declspec(dllexport) bool  _stdcall QT_CreateQuaternionFromAxisAngle(D3DQUATERNION& retQuat, float X, float Y, float Z, float Degrees);
_declspec(dllexport) bool  _stdcall QT_Add(D3DQUATERNION& retQuat, D3DQUATERNION& Quat1, D3DQUATERNION& Quat2);
_declspec(dllexport) bool  _stdcall QT_Average(D3DQUATERNION& retQuat, D3DQUATERNION& Quat1, D3DQUATERNION& Quat2);
_declspec(dllexport) bool  _stdcall QT_Subtract(D3DQUATERNION& retQuat, D3DQUATERNION& Quat1, D3DQUATERNION& Quat2);
_declspec(dllexport) bool  _stdcall QT_DivideSQ(D3DQUATERNION& retQuat, float Scalar, D3DQUATERNION& Quat);
_declspec(dllexport) bool  _stdcall QT_DivideQS(D3DQUATERNION& retQuat, D3DQUATERNION& Quat, float Scalar);
_declspec(dllexport) bool  _stdcall QT_DivideQQ(D3DQUATERNION& retQuat, D3DQUATERNION& Quat1, D3DQUATERNION& Quat2);
_declspec(dllexport) bool  _stdcall QT_MultiplySQ(D3DQUATERNION& retQuat, float Scalar, D3DQUATERNION& Quat);
_declspec(dllexport) bool  _stdcall QT_MultiplyQS(D3DQUATERNION& retQuat, D3DQUATERNION& Quat, float Scalar);
_declspec(dllexport) float _stdcall QT_MultiplyQQ(D3DQUATERNION& Quat1, D3DQUATERNION& Quat2);
_declspec(dllexport) bool  _stdcall QT_MultiplyQV(D3DQUATERNION& retQuat, D3DQUATERNION& Quat, D3DVECTOR& Vector);
_declspec(dllexport) bool  _stdcall QT_MultiplyVQ(D3DQUATERNION& retQuat, D3DVECTOR& Vector, D3DQUATERNION& Quat);
_declspec(dllexport) bool  _stdcall QT_CreateMatrix(D3DQUATERNION& Quat, D3DMATRIX *Matrix);