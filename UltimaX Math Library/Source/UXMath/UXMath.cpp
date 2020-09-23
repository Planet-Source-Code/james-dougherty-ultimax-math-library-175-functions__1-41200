//    |¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶|
//    |¶¶                ©2002 Ariel Productions              ¶¶|
//    |¶¶                  All Rights Reserved                ¶¶|
//    |¶¶¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¶¶|
//    |                                                         |
//    |¶¶¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¶¶|
//    |¶¶             Programmer - James Dougherty            ¶¶|
//    |¶¶             First Compile - 11.21.02                ¶¶|
//    |¶¶             Source - UXMath.cpp                     ¶¶|
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


#include "stdafx.h"
#include "UXMath.h"


//    |œœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœ|
//    |œœ                         Entry                          œœ|
//    |œœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœ|


bool _stdcall DllMain(HANDLE hModule, DWORD  ul_reason_for_call, LPVOID lpReserved)
{
    switch (ul_reason_for_call)
	{
		case DLL_PROCESS_ATTACH:
		case DLL_THREAD_ATTACH: 
		case DLL_THREAD_DETACH: 
		case DLL_PROCESS_DETACH: break;
    }

    return true;
}


//    |œœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœ|
//    |œœ                   Vector 2 Functions                   œœ|
//    |œœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœ|


_declspec(dllexport) bool  _stdcall V2_Add(D3DVECTOR2& retVector, D3DVECTOR2& Vector1, D3DVECTOR2& Vector2)
{
	try{
		V2Add(retVector, Vector1, Vector2);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V2_Average(D3DVECTOR2& retVector, D3DVECTOR2& Vector1, D3DVECTOR2& Vector2)
{
	try{
		V2Average(retVector, Vector1, Vector2);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) float _stdcall V2_DotProduct(D3DVECTOR2& Vector1, D3DVECTOR2& Vector2)
{
	try{
		return V2DotProduct(Vector1, Vector2);
	}catch(...){
		return 0;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V2_Subtract(D3DVECTOR2& retVector, D3DVECTOR2& Vector1, D3DVECTOR2& Vector2)
{
	try{
		V2Subtract(retVector, Vector1, Vector2);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V2_DivideSV(D3DVECTOR2& retVector, float Scalar, D3DVECTOR2& Vector)
{
	try{
		V2Divide(retVector, Scalar, Vector);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V2_DivideVS(D3DVECTOR2& retVector, D3DVECTOR2& Vector, float Scalar)
{
	try{
		V2Divide(retVector, Vector, Scalar);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V2_DivideVV(D3DVECTOR2& retVector, D3DVECTOR2& Vector1, D3DVECTOR2& Vector2)
{
	try{
		V2Divide(retVector, Vector1, Vector2);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V2_MultiplySV(D3DVECTOR2& retVector, float Scalar, D3DVECTOR2& Vector)
{
	try{
		V2Multiply(retVector, Scalar, Vector);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V2_MultiplyVS(D3DVECTOR2& retVector, D3DVECTOR2& Vector, float Scalar)
{
	try{
		V2Multiply(retVector, Vector, Scalar);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) float _stdcall V2_MultiplyVV(D3DVECTOR2& Vector1, D3DVECTOR2& Vector2)
{
	try{
		return V2Multiply(Vector1, Vector2);
	}catch(...){
		return 0;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V2_Zero(D3DVECTOR2& Vector)
{
	try{
		V2Zero(Vector);
		return true;
	}catch(...){
		return false;
	}
}	

//========================================================================

_declspec(dllexport) bool  _stdcall V2_Negate(D3DVECTOR2& Vector)
{
	try{
		V2Negate(Vector);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) float _stdcall V2_Magnitude(D3DVECTOR2& Vector)
{
	try{
		return V2Magnitude(Vector);
	}catch(...){
		return 0;
	}
}

//========================================================================

_declspec(dllexport) float _stdcall V2_MagnitudeSquared(D3DVECTOR2& Vector)
{
	try{
		return V2MagnitudeSquared(Vector);
	}catch(...){
		return 0;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V2_Normalize(D3DVECTOR2& Vector)
{
	try{
		V2Normalize(Vector);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V2_Copy(D3DVECTOR2& retVector, D3DVECTOR2& Vector)
{
	try{
		V2Copy(retVector, Vector);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V2_Scale(D3DVECTOR2& retVector, D3DVECTOR2& Vector, float ScaleAmount)
{
	try{
		V2Scale(retVector, Vector, ScaleAmount);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V2_Minimize(D3DVECTOR2& retVector, D3DVECTOR2& Vector1, D3DVECTOR2& Vector2)
{
	try{
		V2Minimize(retVector, Vector1, Vector2);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V2_Maximize(D3DVECTOR2& retVector, D3DVECTOR2& Vector1, D3DVECTOR2& Vector2)
{
	try{
		V2Maximize(retVector, Vector1, Vector2);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) float _stdcall V2_Distance(D3DVECTOR2& Vector1, D3DVECTOR2& Vector2)
{
	try{
		return V2Distance(Vector1, Vector2);
	}catch(...){
		return 0;
	}
}

//========================================================================

_declspec(dllexport) int   _stdcall V2_FastDistance(D3DVECTOR2& Vector1, D3DVECTOR2& Vector2)
{
	try{
		return V2FastDistance((int)Vector1.X - (int)Vector2.X, (int)Vector1.Y - (int)Vector2.Y);
	}catch(...){
		return 0;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V2_TwoVectorsAreNearlyEqual(D3DVECTOR2& Vector1, D3DVECTOR2& Vector2)
{
	try{
		return V2TwoVectorsAreNearlyEqual(Vector1, Vector2);
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V2_ComputeBoundingBox(D3DVECTOR2 *Vertices, long NumVertices, D3DVECTOR2& retBox_Min, D3DVECTOR2& retBox_Max)
{
	try{
		V2ComputeBoundingBox(Vertices, NumVertices, retBox_Min, retBox_Max);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V2_ComputeBoundingSphere(D3DVECTOR2 *Vertices, long NumVertices, D3DVECTOR2& retSphereCenter, float retSphereRadius)
{
	try{
		V2ComputeBoundingSphere(Vertices, NumVertices, retSphereCenter, retSphereRadius);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V2_VectorContainedInBoundingBox(D3DVECTOR2& Vector, D3DVECTOR2& Box_Min, D3DVECTOR2& Box_Max)
{
	try{
		return V2VectorContainedInBoundingBox(Vector, Box_Min, Box_Max);
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V2_IsCollision(D3DVECTOR2& Collider_Position, float Collider_Radius, D3DVECTOR2& Object_Position, float Object_Radius)
{
	try{
		return V2IsCollision(Collider_Position, Collider_Radius, Object_Position, Object_Radius);
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V2_IsCollisionEX(D3DVECTOR2& Collider_Position, float Collider_Radius, D3DVECTOR2& Object_Position, float Object_Radius)
{
	try{
		return V2IsCollisionEX(Collider_Position, Collider_Radius, Object_Position, Object_Radius);
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V2_Interpolate_Linear(D3DVECTOR2 *retVector, float Time, D3DVECTOR2 *KeyFrame1, D3DVECTOR2 *KeyFrame2)
{
	try{
		V2Interpolate_Linear(retVector, Time, KeyFrame1, KeyFrame2);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V2_Interpolate_LinearEX(D3DVECTOR2 *retVertices, long NumVertices, float Time, D3DVECTOR2 *KeyFrame1, D3DVECTOR2 *KeyFrame2)
{
	try{
		V2Interpolate_LinearEX(retVertices, NumVertices, Time, KeyFrame1, KeyFrame2);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V2_Interpolate_HermitSpline(D3DVECTOR2 *retVector, float Time, D3DVECTOR2 *KeyFrame1, D3DVECTOR2 *KeyFrame2, D3DVECTOR2 *KeyFrame3, D3DVECTOR2 *KeyFrame4)
{
	try{
		V2Interpolate_HermitSpline(retVector, Time, KeyFrame1, KeyFrame2, KeyFrame3, KeyFrame4);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V2_Interpolate_HermitSplineEX(D3DVECTOR2 *retVertices, long NumVertices, float Time, D3DVECTOR2 *KeyFrame1, D3DVECTOR2 *KeyFrame2, D3DVECTOR2 *KeyFrame3, D3DVECTOR2 *KeyFrame4)
{
	try{
		V2Interpolate_HermitSplineEX(retVertices, NumVertices, Time, KeyFrame1, KeyFrame2, KeyFrame3, KeyFrame4);
		return true;
	}catch(...){
		return false;
	}
}


//    |œœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœ|
//    |œœ                   Vector 3 Functions                   œœ|
//    |œœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœ|


_declspec(dllexport) bool  _stdcall V3_Add(D3DVECTOR& retVector, D3DVECTOR& Vector1, D3DVECTOR& Vector2)
{
	try{
		V3Add(retVector, Vector1, Vector2);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V3_Average(D3DVECTOR& retVector, D3DVECTOR& Vector1, D3DVECTOR& Vector2)
{
	try{
		V3Average(retVector, Vector1, Vector2);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) float _stdcall V3_DotProduct(D3DVECTOR& Vector1, D3DVECTOR& Vector2)
{
	try{
		return V3DotProduct(Vector1, Vector2);
	}catch(...){
		return 0;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V3_Subtract(D3DVECTOR& retVector, D3DVECTOR& Vector1, D3DVECTOR& Vector2)
{
	try{
		V3Subtract(retVector, Vector1, Vector2);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V3_DivideSV(D3DVECTOR& retVector, float Scalar, D3DVECTOR& Vector)
{
	try{
		V3Divide(retVector, Scalar, Vector);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V3_CrossProduct(D3DVECTOR& retVector, D3DVECTOR& Vector1, D3DVECTOR& Vector2)
{
	try{
		V3CrossProduct(retVector, Vector1, Vector2);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) double _stdcall V3_AngleBetweenVectors(D3DVECTOR& Vector1, D3DVECTOR& Vector2)
{
	try{
		return V3AngleBetweenVectors(Vector1, Vector2);
	}catch(...){
		return 0;
	}
}

//========================================================================

_declspec(dllexport) bool   _stdcall V3_IntersectedPolygon(D3DVECTOR *Polygon, long NumVertices, D3DVECTOR& RayStart, D3DVECTOR& RayEnd)
{
	try{
		return V3IntersectedPolygon(Polygon, NumVertices, RayStart, RayEnd);
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool   _stdcall V3_ClosestPointOnLine(D3DVECTOR& retVector, D3DVECTOR& LineStart, D3DVECTOR& LineEnd, D3DVECTOR& Point)
{
	try{
		V3ClosestPointOnLine(retVector, LineStart, LineEnd, Point);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool   _stdcall V3_PolygonNormal(D3DVECTOR& retVector, D3DVECTOR& Polygon1, D3DVECTOR& Polygon2, D3DVECTOR& Polygon3)
{
	try{
		V3PolygonNormal(retVector, Polygon1, Polygon2, Polygon3);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool   _stdcall V3_SpherePolygonCollision(D3DVECTOR *Vertices, long NumVertices, D3DVECTOR& SphereCenter, float SphereRadius)
{
	try{
		return V3SpherePolygonCollision(Vertices, NumVertices, SphereCenter, SphereRadius);
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V3_Power(D3DVECTOR& retVector, D3DVECTOR& Vector1, D3DVECTOR& Vector2)
{
	try{
		V3Power(retVector, Vector1, Vector2);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) float _stdcall V3_ScalarProduct(D3DVECTOR& Vector1, D3DVECTOR& Vector2, D3DVECTOR& Vector3)
{
	try{
		return V3ScalarProduct(Vector1, Vector2, Vector3);
	}catch(...){
		return 0;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V3_Spherical(D3DVECTOR& retVector, float Theta, float Rho, float Phi)
{
	try{
		V3Spherical(retVector, Theta, Rho, Phi);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V3_DivideVS(D3DVECTOR& retVector, D3DVECTOR& Vector, float Scalar)
{
	try{
		V3Divide(retVector, Vector, Scalar);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V3_DivideVV(D3DVECTOR& retVector, D3DVECTOR& Vector1, D3DVECTOR& Vector2)
{
	try{
		V3Divide(retVector, Vector1, Vector2);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V3_MultiplySV(D3DVECTOR& retVector, float Scalar, D3DVECTOR& Vector)
{
	try{
		V3Multiply(retVector, Scalar, Vector);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V3_MultiplyVS(D3DVECTOR& retVector, float Scalar, D3DVECTOR& Vector)
{
	try{
		V3Multiply(retVector, Vector, Scalar);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) float _stdcall V3_MultiplyVV(D3DVECTOR& Vector1, D3DVECTOR& Vector2)
{
	try{
		return V3Multiply(Vector1, Vector2);
	}catch(...){
		return 0;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V3_Zero(D3DVECTOR& Vector)
{
	try{
		V3Zero(Vector);
		return true;
	}catch(...){
		return false;
	}
}	

//========================================================================

_declspec(dllexport) bool  _stdcall V3_Negate(D3DVECTOR& Vector)
{
	try{
		V3Negate(Vector);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) float _stdcall V3_Magnitude(D3DVECTOR& Vector)
{
	try{
		return V3Magnitude(Vector);
	}catch(...){
		return 0;
	}
}

//========================================================================

_declspec(dllexport) float _stdcall V3_MagnitudeSquared(D3DVECTOR& Vector)
{
	try{
		return V3MagnitudeSquared(Vector);
	}catch(...){
		return 0;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V3_Normalize(D3DVECTOR& Vector)
{
	try{
		V3Normalize(Vector);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V3_Copy(D3DVECTOR& retVector, D3DVECTOR& Vector)
{
	try{
		V3Copy(retVector, Vector);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V3_Scale(D3DVECTOR& retVector, D3DVECTOR& Vector, float ScaleAmount)
{
	try{
		V3Scale(retVector, Vector, ScaleAmount);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V3_Minimize(D3DVECTOR& retVector, D3DVECTOR& Vector1, D3DVECTOR& Vector2)
{
	try{
		V3Minimize(retVector, Vector1, Vector2);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V3_Maximize(D3DVECTOR& retVector, D3DVECTOR& Vector1, D3DVECTOR& Vector2)
{
	try{
		V3Maximize(retVector, Vector1, Vector2);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) float _stdcall V3_Distance(D3DVECTOR& Vector1, D3DVECTOR& Vector2)
{
	try{
		return V3Distance(Vector1, Vector2);
	}catch(...){
		return 0;
	}
}

//========================================================================

_declspec(dllexport) float   _stdcall V3_FastDistance(D3DVECTOR& Vector1, D3DVECTOR& Vector2)
{
	try{
		return V3FastDistance(Vector1.X - Vector2.X, Vector1.Y - Vector2.Y,  Vector1.Z - Vector2.Z);
	}catch(...){
		return 0;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V3_TwoVectorsAreNearlyEqual(D3DVECTOR& Vector1, D3DVECTOR& Vector2)
{
	try{
		return V3TwoVectorsAreNearlyEqual(Vector1, Vector2);
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V3_ComputeBoundingBox(D3DVECTOR *Vertices, long NumVertices, D3DVECTOR& retBox_Min, D3DVECTOR& retBox_Max)
{
	try{
		V3ComputeBoundingBox(Vertices, NumVertices, retBox_Min, retBox_Max);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V3_ComputeBoundingSphere(D3DVECTOR *Vertices, long NumVertices, D3DVECTOR& retSphereCenter, float retSphereRadius)
{
	try{
		V3ComputeBoundingSphere(Vertices, NumVertices, retSphereCenter, retSphereRadius);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V3_VectorContainedInBoundingBox(D3DVECTOR& Vector, D3DVECTOR& Box_Min, D3DVECTOR& Box_Max)
{
	try{
		return V3VectorContainedInBoundingBox(Vector, Box_Min, Box_Max);
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V3_IsCollision(D3DVECTOR& Collider_Position, float Collider_Radius, D3DVECTOR& Object_Position, float Object_Radius)
{
	try{
		return V3IsCollision(Collider_Position, Collider_Radius, Object_Position, Object_Radius);
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V3_IsCollisionEX(D3DVECTOR& Collider_Position, float Collider_Radius, D3DVECTOR& Object_Position, float Object_Radius)
{
	try{
		return V3IsCollisionEX(Collider_Position, Collider_Radius, Object_Position, Object_Radius);
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V3_Interpolate_Linear(D3DVECTOR *retVector, float Time, D3DVECTOR *KeyFrame1, D3DVECTOR *KeyFrame2)
{
	try{
		V3Interpolate_Linear(retVector, Time, KeyFrame1, KeyFrame2);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V3_Interpolate_LinearEX(D3DVECTOR *retVertices, long NumVertices, float Time, D3DVECTOR *KeyFrame1, D3DVECTOR *KeyFrame2)
{
	try{
		V3Interpolate_LinearEX(retVertices, NumVertices, Time, KeyFrame1, KeyFrame2);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V3_Interpolate_HermitSpline(D3DVECTOR *retVector, float Time, D3DVECTOR *KeyFrame1, D3DVECTOR *KeyFrame2, D3DVECTOR *KeyFrame3, D3DVECTOR *KeyFrame4)
{
	try{
		V3Interpolate_HermitSpline(retVector, Time, KeyFrame1, KeyFrame2, KeyFrame3, KeyFrame4);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V3_Interpolate_HermitSplineEX(D3DVECTOR *retVertices, long NumVertices, float Time, D3DVECTOR *KeyFrame1, D3DVECTOR *KeyFrame2, D3DVECTOR *KeyFrame3, D3DVECTOR *KeyFrame4)
{
	try{
		V3Interpolate_HermitSplineEX(retVertices, NumVertices, Time, KeyFrame1, KeyFrame2, KeyFrame3, KeyFrame4);
		return true;
	}catch(...){
		return false;
	}
}


//    |œœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœ|
//    |œœ                   Vector 4 Functions                   œœ|
//    |œœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœ|


_declspec(dllexport) bool  _stdcall V4_Add(D3DVECTOR4& retVector, D3DVECTOR4& Vector1, D3DVECTOR4& Vector2)
{
	try{
		V4Add(retVector, Vector1, Vector2);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V4_Average(D3DVECTOR4& retVector, D3DVECTOR4& Vector1, D3DVECTOR4& Vector2)
{
	try{
		V4Average(retVector, Vector1, Vector2);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) float _stdcall V4_DotProduct(D3DVECTOR4& Vector1, D3DVECTOR4& Vector2)
{
	try{
		return V4DotProduct(Vector1, Vector2);
	}catch(...){
		return 0;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V4_Subtract(D3DVECTOR4& retVector, D3DVECTOR4& Vector1, D3DVECTOR4& Vector2)
{
	try{
		V4Subtract(retVector, Vector1, Vector2);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V4_DivideSV(D3DVECTOR4& retVector, float Scalar, D3DVECTOR4& Vector)
{
	try{
		V4Divide(retVector, Scalar, Vector);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V4_DivideVS(D3DVECTOR4& retVector, D3DVECTOR4& Vector, float Scalar)
{
	try{
		V4Divide(retVector, Vector, Scalar);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V4_DivideVV(D3DVECTOR4& retVector, D3DVECTOR4& Vector1, D3DVECTOR4& Vector2)
{
	try{
		V4Divide(retVector, Vector1, Vector2);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V4_MultiplySV(D3DVECTOR4& retVector, float Scalar, D3DVECTOR4& Vector)
{
	try{
		V4Multiply(retVector, Scalar, Vector);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V4_MultiplyVS(D3DVECTOR4& retVector, D3DVECTOR4& Vector, float Scalar)
{
	try{
		V4Multiply(retVector, Vector, Scalar);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) float _stdcall V4_MultiplyVV(D3DVECTOR4& Vector1, D3DVECTOR4& Vector2)
{
	try{
		return V4Multiply(Vector1, Vector2);
	}catch(...){
		return 0;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V4_Zero(D3DVECTOR4& Vector)
{
	try{
		V4Zero(Vector);
		return true;
	}catch(...){
		return false;
	}
}	

//========================================================================

_declspec(dllexport) bool  _stdcall V4_Negate(D3DVECTOR4& Vector)
{
	try{
		V4Negate(Vector);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) float _stdcall V4_Magnitude(D3DVECTOR4& Vector)
{
	try{
		return V4Magnitude(Vector);
	}catch(...){
		return 0;
	}
}

//========================================================================

_declspec(dllexport) float _stdcall V4_MagnitudeSquared(D3DVECTOR4& Vector)
{
	try{
		return V4MagnitudeSquared(Vector);
	}catch(...){
		return 0;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V4_Normalize(D3DVECTOR4& Vector)
{
	try{
		V4Normalize(Vector);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V4_Copy(D3DVECTOR4& retVector, D3DVECTOR4& Vector)
{
	try{
		V4Copy(retVector, Vector);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V4_Scale(D3DVECTOR4& retVector, D3DVECTOR4& Vector, float ScaleAmount)
{
	try{
		V4Scale(retVector, Vector, ScaleAmount);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V4_Minimize(D3DVECTOR4& retVector, D3DVECTOR4& Vector1, D3DVECTOR4& Vector2)
{
	try{
		V4Minimize(retVector, Vector1, Vector2);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V4_Maximize(D3DVECTOR4& retVector, D3DVECTOR4& Vector1, D3DVECTOR4& Vector2)
{
	try{
		V4Maximize(retVector, Vector1, Vector2);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) float _stdcall V4_Distance(D3DVECTOR4& Vector1, D3DVECTOR4& Vector2)
{
	try{
		return V4Distance(Vector1, Vector2);
	}catch(...){
		return 0;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V4_TwoVectorsAreNearlyEqual(D3DVECTOR4& Vector1, D3DVECTOR4& Vector2)
{
	try{
		return V4TwoVectorsAreNearlyEqual(Vector1, Vector2);
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V4_ComputeBoundingBox(D3DVECTOR4 *Vertices, long NumVertices, D3DVECTOR4& retBox_Min, D3DVECTOR4& retBox_Max)
{
	try{
		V4ComputeBoundingBox(Vertices, NumVertices, retBox_Min, retBox_Max);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V4_ComputeBoundingSphere(D3DVECTOR4 *Vertices, long NumVertices, D3DVECTOR4& retSphereCenter, float retSphereRadius)
{
	try{
		V4ComputeBoundingSphere(Vertices, NumVertices, retSphereCenter, retSphereRadius);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V4_VectorContainedInBoundingBox(D3DVECTOR4& Vector, D3DVECTOR4& Box_Min, D3DVECTOR4& Box_Max)
{
	try{
		return V4VectorContainedInBoundingBox(Vector, Box_Min, Box_Max);
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V4_IsCollision(D3DVECTOR4& Collider_Position, float Collider_Radius, D3DVECTOR4& Object_Position, float Object_Radius)
{
	try{
		return V4IsCollision(Collider_Position, Collider_Radius, Object_Position, Object_Radius);
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V4_IsCollisionEX(D3DVECTOR4& Collider_Position, float Collider_Radius, D3DVECTOR4& Object_Position, float Object_Radius)
{
	try{
		return V4IsCollisionEX(Collider_Position, Collider_Radius, Object_Position, Object_Radius);
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V4_Interpolate_Linear(D3DVECTOR4 *retVector, float Time, D3DVECTOR4 *KeyFrame1, D3DVECTOR4 *KeyFrame2)
{
	try{
		V4Interpolate_Linear(retVector, Time, KeyFrame1, KeyFrame2);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V4_Interpolate_LinearEX(D3DVECTOR4 *retVertices, long NumVertices, float Time, D3DVECTOR4 *KeyFrame1, D3DVECTOR4 *KeyFrame2)
{
	try{
		V4Interpolate_LinearEX(retVertices, NumVertices, Time, KeyFrame1, KeyFrame2);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V4_Interpolate_HermitSpline(D3DVECTOR4 *retVector, float Time, D3DVECTOR4 *KeyFrame1, D3DVECTOR4 *KeyFrame2, D3DVECTOR4 *KeyFrame3, D3DVECTOR4 *KeyFrame4)
{
	try{
		V4Interpolate_HermitSpline(retVector, Time, KeyFrame1, KeyFrame2, KeyFrame3, KeyFrame4);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall V4_Interpolate_HermitSplineEX(D3DVECTOR4 *retVertices, long NumVertices, float Time, D3DVECTOR4 *KeyFrame1, D3DVECTOR4 *KeyFrame2, D3DVECTOR4 *KeyFrame3, D3DVECTOR4 *KeyFrame4)
{
	try{
		V4Interpolate_HermitSplineEX(retVertices, NumVertices, Time, KeyFrame1, KeyFrame2, KeyFrame3, KeyFrame4);
		return true;
	}catch(...){
		return false;
	}
}


//    |œœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœ|
//    |œœ                     Color Functions                    œœ|
//    |œœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœ|


_declspec(dllexport) bool  _stdcall CLR_Black(D3DCOLORVALUE& retColor)
{
	try{
		CLRBlack(retColor);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall CLR_LightGray(D3DCOLORVALUE& retColor)
{
	try{
		CLRLightGray(retColor);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall CLR_MediumGray(D3DCOLORVALUE& retColor)
{
	try{
		CLRMediumGray(retColor);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall CLR_DarkGray(D3DCOLORVALUE& retColor)
{
	try{
		CLRDarkGray(retColor);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall CLR_White(D3DCOLORVALUE& retColor)
{
	try{
		CLRWhite(retColor);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall CLR_Red(D3DCOLORVALUE& retColor)
{
	try{
		CLRRed(retColor);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall CLR_Green(D3DCOLORVALUE& retColor)
{
	try{
		CLRGreen(retColor);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall CLR_Blue(D3DCOLORVALUE& retColor)
{
	try{
		CLRBlue(retColor);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall CLR_Magenta(D3DCOLORVALUE& retColor)
{
	try{
		CLRMagenta(retColor);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall CLR_Cyan(D3DCOLORVALUE& retColor)
{
	try{
		CLRCyan(retColor);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall CLR_Yellow(D3DCOLORVALUE& retColor)
{
	try{
		CLRYellow(retColor);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall CLR_Negate(D3DCOLORVALUE& retColor)
{
	try{
		CLRNegate(retColor);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall CLR_CapColor(D3DCOLORVALUE& Color)
{
	try{
		CLRCapColor(Color);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall CLR_Scale(D3DCOLORVALUE& Color, float ScaleAmount)
{
	try{
		CLRScale(Color, ScaleAmount);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall CLR_TwoColorsAreNearlyEqual(D3DCOLORVALUE& Color1, D3DCOLORVALUE& Color2)
{
	try{
		return CLRTwoColorsAreNearlyEqual(Color1, Color2);
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall CLR_Interpolate_Linear(D3DCOLORVALUE *retColor, float Time, D3DCOLORVALUE *Color1, D3DCOLORVALUE *Color2)
{
	try{
		CLRInterpolate_Linear(retColor, Time, Color1, Color2);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall CLR_Interpolate_HermitSpline(D3DCOLORVALUE *retColor, float Time, D3DCOLORVALUE *Color1, D3DCOLORVALUE *Color2, D3DCOLORVALUE *Color3, D3DCOLORVALUE *Color4)
{
	try{
		CLRInterpolate_HermitSpline(retColor, Time, Color1, Color2, Color3, Color4);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall CLR_Add(D3DCOLORVALUE& retColor, D3DCOLORVALUE& Color1, D3DCOLORVALUE& Color2)
{
	try{
		CLRAdd(retColor, Color1, Color2);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall CLR_Average(D3DCOLORVALUE& retColor, D3DCOLORVALUE& Color1, D3DCOLORVALUE& Color2)
{
	try{
		CLRAverage(retColor, Color1, Color2);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall CLR_Subtract(D3DCOLORVALUE& retColor, D3DCOLORVALUE& Color1, D3DCOLORVALUE& Color2)
{
	try{
		CLRSubtract(retColor, Color1, Color2);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall CLR_DivideSC(D3DCOLORVALUE& retColor, float Scalar, D3DCOLORVALUE& Color)
{
	try{
		CLRDivideSC(retColor, Scalar, Color);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall CLR_DivideCS(D3DCOLORVALUE& retColor, D3DCOLORVALUE& Color, float Scalar)
{
	try{
		CLRDivideCS(retColor, Color, Scalar);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall CLR_DivideCC(D3DCOLORVALUE& retColor, D3DCOLORVALUE& Color1, D3DCOLORVALUE& Color2)
{
	try{
		CLRDivideCC(retColor, Color1, Color2);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall CLR_MultiplySC(D3DCOLORVALUE& retColor, float Scalar, D3DCOLORVALUE& Color)
{
	try{
		CLRMultiplySC(retColor, Scalar, Color);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall CLR_MultiplyCS(D3DCOLORVALUE& retColor, D3DCOLORVALUE& Color, float Scalar)
{
	try{
		CLRMultiplyCS(retColor, Color, Scalar);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) float _stdcall CLR_MultiplyCC(D3DCOLORVALUE& Color1, D3DCOLORVALUE& Color2)
{
	try{
		return CLRMultiplyCC(Color1, Color2);
	}catch(...){
		return 0;
	}
}


//    |œœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœ|
//    |œœ                   Matrix 3 Functions                   œœ|
//    |œœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœ|


_declspec(dllexport) bool  _stdcall M3_Zero(D3DMATRIX3& retMatrix)
{
	try{
		M3Zero(retMatrix);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall M3_Identity(D3DMATRIX3& retMatrix)
{
	try{
		M3Identity(retMatrix);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall M3_IsIdentity(D3DMATRIX3& Matrix)
{
	try{
		return M3IsIdentity(Matrix);
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) float _stdcall M3_Determinate(D3DMATRIX3& Matrix)
{
	try{
		return M3_Determinate(Matrix);
	}catch(...){
		return 0;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall M3_Copy(D3DMATRIX3& retMatrix, D3DMATRIX3& Matrix)
{
	try{
		M3Copy(retMatrix, Matrix);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall M3_Inverse(D3DMATRIX3& retMatrix, D3DMATRIX3& Matrix)
{
	try{
		M3Inverse(retMatrix, Matrix);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall M3_Transpose(D3DMATRIX3& retMatrix, D3DMATRIX3& Matrix)	
{
	try{
		M3Transpose(retMatrix, Matrix);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall M3_Add(D3DMATRIX3& retMatrix, D3DMATRIX3& Matrix1, D3DMATRIX3& Matrix2)
{
	try{
		M3Add(retMatrix, Matrix1, Matrix2);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall M3_Subtract(D3DMATRIX3& retMatrix, D3DMATRIX3& Matrix1, D3DMATRIX3& Matrix2)
{
	try{
		M3Subtract(retMatrix, Matrix1, Matrix2);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall M3_DivideMS(D3DMATRIX3& retMatrix, D3DMATRIX3& Matrix, float Scalar)
{
	try{
		M3DivideMS(retMatrix, Matrix, Scalar);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall M3_DivideSM(D3DMATRIX3& retMatrix, float Scalar, D3DMATRIX3& Matrix)
{
	try{
		M3DivideSM(retMatrix, Scalar, Matrix);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall M3_DivideMM(D3DMATRIX3& retMatrix, D3DMATRIX3& Matrix1, D3DMATRIX3& Matrix2)
{
	try{
		M3DivideMM(retMatrix, Matrix1, Matrix2);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall M3_MultiplyMM(D3DMATRIX3& retMatrix, D3DMATRIX3& Matrix1, D3DMATRIX3& Matrix2)
{
	try{
		M3MultiplyMM(retMatrix, Matrix1, Matrix2);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall M3_MultiplyMS(D3DMATRIX3& retMatrix, D3DMATRIX3& Matrix, float Scalar)
{
	try{
		M3MultiplyMS(retMatrix, Matrix, Scalar);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall M3_MultiplySM(D3DMATRIX3& retMatrix, float Scalar, D3DMATRIX3& Matrix)
{
	try{
		M3MultiplySM(retMatrix, Scalar, Matrix);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall M3_MultiplyMV(D3DVECTOR& retVector, D3DMATRIX3& Matrix, D3DVECTOR& Vector)
{
	try{
		M3MultiplyMV(retVector, Matrix, Vector);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall M3_MultiplyVM(D3DVECTOR& retVector, D3DVECTOR& Vector, D3DMATRIX3& Matrix)
{
	try{
		M3MultiplyVM(retVector, Vector, Matrix);
		return true;
	}catch(...){
		return false;
	}
}


//    |œœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœ|
//    |œœ                   Matrix 4 Functions                   œœ|
//    |œœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœ|


_declspec(dllexport) bool  _stdcall M4_Zero(D3DMATRIX& retMatrix)
{
	try{
		M4Zero(retMatrix);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall M4_Identity(D3DMATRIX& retMatrix)
{
	try{
		M4Identity(retMatrix);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall M4_IsIdentity(D3DMATRIX& Matrix)
{
	try{
		return M4IsIdentity(Matrix);
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall M4_Copy(D3DMATRIX& retMatrix, D3DMATRIX& Matrix)
{
	try{
		M4Copy(retMatrix, Matrix);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall M4_Inverse(D3DMATRIX& retMatrix, D3DMATRIX& Matrix)
{
	try{
		M4Inverse(retMatrix, Matrix);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall M4_Transpose(D3DMATRIX& retMatrix, D3DMATRIX& Matrix)
{
	try{
		M4Transpose(retMatrix, Matrix);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall M4_GetLocation(D3DVECTOR& retVector, D3DMATRIX& Matrix)
{
	try{
		M4GetLocation(retVector, Matrix);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall M4_RotateX(D3DMATRIX& retMatrix, float Angle)
{
	try{
		M4RotateX(retMatrix, Angle);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall M4_RotateY(D3DMATRIX& retMatrix, float Angle)
{
	try{
		M4RotateY(retMatrix, Angle);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall M4_RotateZ(D3DMATRIX& retMatrix, float Angle)
{
	try{
		M4RotateZ(retMatrix, Angle);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall M4_Scale(D3DMATRIX& retMatrix, D3DVECTOR& Amount)
{
	try{
		M4Scale(retMatrix, Amount);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall M4_Position(D3DMATRIX& retMatrix, D3DVECTOR& Position)
{
	try{
		M4Position(retMatrix, Position);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall M4_Translate(D3DMATRIX& retMatrix, D3DVECTOR& Position)
{
	try{
		M4Translate(retMatrix, Position);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall M4_AxisAngle(D3DMATRIX& retMatrix, D3DVECTOR& Axis, float Angle)
{
	try{
		M4AxisAngle(retMatrix, Axis, Angle);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall M4_RotateEX(D3DMATRIX& retMatrix, D3DMATRIX& Matrix, float AngleX, float AngleY, float AngleZ)
{
	try{
		M4RotateEX(retMatrix, Matrix, AngleX, AngleY, AngleZ);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall M4_ObjectLookAt(D3DMATRIX& retMatrix, D3DVECTOR& Location, D3DVECTOR& LookAt, D3DVECTOR& Up)
{
	try{
		M4ObjectLookAt(retMatrix, Location, LookAt, Up);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall M4_CameraLookAt(D3DMATRIX& retMatrix, D3DVECTOR& Location, D3DVECTOR& LookAt, D3DVECTOR& Up)
{
	try{
		M4CameraLookAt(retMatrix, Location, LookAt, Up);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall M4_OpMatrix(D3DMATRIX& retMatrix, D3DVECTOR& Position, D3DVECTOR& Rotation, D3DVECTOR& ScaleAmount)
{
	try{
		M4OpMatrix(retMatrix, Position, Rotation, ScaleAmount);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall M4_Add(D3DMATRIX& retMatrix, D3DMATRIX& Matrix1, D3DMATRIX& Matrix2)
{
	try{
		M4Add(retMatrix, Matrix1, Matrix2);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall M4_Subtract(D3DMATRIX& retMatrix, D3DMATRIX& Matrix1, D3DMATRIX& Matrix2)
{
	try{
		M4Subtract(retMatrix, Matrix1, Matrix2);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall M4_DivideMS(D3DMATRIX& retMatrix, D3DMATRIX Matrix, float Scalar)
{
	try{
		M4DivideMS(retMatrix, Matrix, Scalar);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall M4_DivideSM(D3DMATRIX& retMatrix, float Scalar, D3DMATRIX& Matrix)
{
	try{
		M4DivideSM(retMatrix, Scalar, Matrix);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall M4_DivideMM(D3DMATRIX& retMatrix, D3DMATRIX& Matrix1, D3DMATRIX& Matrix2)
{
	try{
		M4DivideMM(retMatrix, Matrix1, Matrix2);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall M4_MultiplyMM(D3DMATRIX& retMatrix, D3DMATRIX& Matrix1, D3DMATRIX& Matrix2)
{
	try{
		M4MultiplyMM(retMatrix, Matrix1, Matrix2);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall M4_MultiplyMS(D3DMATRIX& retMatrix, D3DMATRIX& Matrix, float Scalar)
{
	try{
		M4MultiplyMS(retMatrix, Matrix, Scalar);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall M4_MultiplySM(D3DMATRIX& retMatrix, float Scalar, D3DMATRIX& Matrix)
{
	try{
		M4MultiplySM(retMatrix, Scalar, Matrix);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall M4_MultiplyMV(D3DVECTOR4& retVector, D3DMATRIX& Matrix, D3DVECTOR4& Vector)
{
	try{
		M4MultiplyMV(retVector, Matrix, Vector);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall M4_MultiplyVM(D3DVECTOR4& retVector, D3DVECTOR4& Vector, D3DMATRIX& Matrix)
{
	try{
		M4MultiplyVM(retVector, Vector, Matrix);
		return true;
	}catch(...){
		return false;
	}
}


//    |œœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœ|
//    |œœ                  Quaternion Functions                  œœ|
//    |œœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœ|


_declspec(dllexport) bool  _stdcall QT_Identity(D3DQUATERNION& retQuat)
{
	try{
		QTIdentity(retQuat);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall QT_IsIdentity(D3DQUATERNION& Quat)
{
	try{
		return QTIsIdentity(Quat);
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall QT_Zero(D3DQUATERNION& retQuat)
{
	try{
		QTZero(retQuat);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall QT_Negate(D3DQUATERNION& retQuat)
{
	try{
		QTNegate(retQuat);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall QT_Copy(D3DQUATERNION& retQuat, D3DQUATERNION& Quat)
{
	try{
		QTCopy(retQuat, Quat);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) float _stdcall QT_Magnitude(D3DQUATERNION& Quat)
{
	try{
		return QTMagnitude(Quat);
	}catch(...){
		return 0;
	}
}

//========================================================================

_declspec(dllexport) float _stdcall QT_GetScalar(D3DQUATERNION& Quat)
{
	try{
		return QT_GetScalar(Quat);
	}catch(...){
		return 0;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall QT_GetVector(D3DVECTOR& retVector, D3DQUATERNION& Quat)
{
	try{
		QTGetVector(retVector, Quat);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) float _stdcall QT_MagnitudeSquared(D3DQUATERNION& Quat)
{
	try{
		return QTMagnitudeSquared(Quat);
	}catch(...){
		return 0;
	}
}

//========================================================================

_declspec(dllexport) float _stdcall QT_QuaternionGetAngle(D3DQUATERNION& Quat)
{
	try{
		return QTQuaternionGetAngle(Quat);
	}catch(...){
		return 0;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall QT_QuaternionGetAxis(D3DVECTOR& retVector, D3DQUATERNION& Quat)
{
	try{
		QTQuaternionGetAxis(retVector, Quat);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall QT_QuaternionRotate(D3DQUATERNION& retQuat, D3DQUATERNION& Quat1, D3DQUATERNION& Quat2)
{
	try{
		QTQuaternionRotate(retQuat, Quat1, Quat2);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall QT_QuaternionVectorRotate(D3DVECTOR& retVector, D3DQUATERNION& Quat, D3DVECTOR& Vector)
{
	try{
		QTQuaternionVectorRotate(retVector, Quat, Vector);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall QT_CreateEularAnglesFromQuaternion(D3DVECTOR& retVector, D3DQUATERNION& Quat)
{
	try{
		QTCreateEularAnglesFromQuaternion(retVector, Quat);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall QT_CreateQuaternionFromEularAngles(D3DQUATERNION& retQuat, float X, float Y, float Z)
{
	try{
		QTCreateQuaternionFromEularAngles(retQuat, X, Y, Z);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall QT_CreateQuaternionFromAxisAngle(D3DQUATERNION& retQuat, float X, float Y, float Z, float Degrees)
{
	try{
		QTCreateQuaternionFromAxisAngle(retQuat, X, Y, Z, Degrees);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall QT_Add(D3DQUATERNION& retQuat, D3DQUATERNION& Quat1, D3DQUATERNION& Quat2)
{
	try{
		QTAdd(retQuat, Quat1, Quat2);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall QT_Average(D3DQUATERNION& retQuat, D3DQUATERNION& Quat1, D3DQUATERNION& Quat2)
{
	try{
		QTAverage(retQuat, Quat1, Quat2);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall QT_Subtract(D3DQUATERNION& retQuat, D3DQUATERNION& Quat1, D3DQUATERNION& Quat2)
{
	try{
		QTSubtract(retQuat, Quat1, Quat2);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall QT_DivideSQ(D3DQUATERNION& retQuat, float Scalar, D3DQUATERNION& Quat)
{
	try{
		QTDivideSQ(retQuat, Scalar, Quat);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall QT_DivideQS(D3DQUATERNION& retQuat, D3DQUATERNION& Quat, float Scalar)
{
	try{
		QTDivideQS(retQuat, Quat, Scalar);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall QT_DivideQQ(D3DQUATERNION& retQuat, D3DQUATERNION& Quat1, D3DQUATERNION& Quat2)
{
	try{
		QTDivideQQ(retQuat, Quat1, Quat2);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall QT_MultiplySQ(D3DQUATERNION& retQuat, float Scalar, D3DQUATERNION& Quat)
{
	try{
		QTMultiplySQ(retQuat, Scalar, Quat);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall QT_MultiplyQS(D3DQUATERNION& retQuat, D3DQUATERNION& Quat, float Scalar)
{
	try{
		QTMultiplyQS(retQuat, Quat, Scalar);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) float _stdcall QT_MultiplyQQ(D3DQUATERNION& Quat1, D3DQUATERNION& Quat2)
{
	try{
		return QT_MultiplyQQ(Quat1, Quat2);
	}catch(...){
		return 0;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall QT_MultiplyQV(D3DQUATERNION& retQuat, D3DQUATERNION& Quat, D3DVECTOR& Vector)
{
	try{
		QTMultiplyQV(retQuat, Quat, Vector);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall QT_MultiplyVQ(D3DQUATERNION& retQuat, D3DVECTOR& Vector, D3DQUATERNION& Quat)
{
	try{
		QTMultiplyVQ(retQuat, Vector, Quat);
		return true;
	}catch(...){
		return false;
	}
}

//========================================================================

_declspec(dllexport) bool  _stdcall QT_CreateMatrix(D3DQUATERNION& Quat, D3DMATRIX *Matrix)
{
	try{
		QTCreateMatrix(Quat, Matrix);
		return true;
	}catch(...){
		return false;
	}
}
