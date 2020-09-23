//    |¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶|
//    |¶¶                ©2002 Ariel Productions              ¶¶|
//    |¶¶                  All Rights Reserved                ¶¶|
//    |¶¶¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¶¶|
//    |                                                         |
//    |¶¶¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¶¶| 
//    |¶¶             Programmer - James Dougherty            ¶¶|
//    |¶¶             First Compile - 11.21.02                ¶¶|
//    |¶¶             Source - XMath.cpp                      ¶¶|
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


#include "stdafx.h"
#include "XMath.h"
#include <Math.h>
#include <float.h>


#define MIN(a,b)     (((a) < (b)) ? (a) : (b)) 
#define MAX(a,b)     (((a) > (b)) ? (b) : (a)) 
#define SWAP(a,b,t)  {t = a; a = b; b = t;}
#define EPSILON      0.0001f
#define Radiant      1.74532925199433E-02f;
#define PI           3.1415926535897932384626433832795f
#define BEHIND		 0	
#define INTERSECTS	 1	
#define FRONT		 2


inline double FFabs(const double &Value)
{
	int* tValue = (int*)&Value;
	int  VReturn = *tValue & 0x7FFFFFFF;
	return *(&VReturn);
}

float Absolute(float Value)
{
	if(Value < 0){return (0 - Value);};
	return Value;
}

float DegreesToRadians(float Degrees)
{
	return Degrees * PI / 180.0f;
}

float RadiansToDegrees(float Radians)
{
	return Radians * 180.0f / PI;
}


//šššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššš
//    |œœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœ|
//    |œœ                   Vector 2 Functions                   œœ|
//    |œœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœ|
//šššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššš


void V2Add(D3DVECTOR2& retVector, D3DVECTOR2& Vector1, D3DVECTOR2& Vector2)
{
	retVector.X = Vector1.X + Vector2.X;
	retVector.Y = Vector1.Y + Vector2.Y;
}

//========================================================================

void V2Average(D3DVECTOR2& retVector, D3DVECTOR2& Vector1, D3DVECTOR2& Vector2)
{
	D3DVECTOR2 Sum;
	V2Add(Sum, Vector1, Vector2);

	retVector.X = Sum.X /= 2;
	retVector.Y = Sum.Y /= 2;
}

//========================================================================

float V2DotProduct(D3DVECTOR2& Vector1, D3DVECTOR2& Vector2)
{
	return ((Vector1.X * Vector2.X) + (Vector1.Y * Vector2.Y));
}

//========================================================================

void  V2Subtract(D3DVECTOR2& retVector, D3DVECTOR2& Vector1, D3DVECTOR2& Vector2)
{
	retVector.X = Vector1.X - Vector2.X;
	retVector.Y = Vector1.Y - Vector2.Y;
}

//========================================================================

void  V2Divide(D3DVECTOR2& retVector, float Scalar, D3DVECTOR2& Vector)
{
	retVector.X = Vector.X / Scalar;
	retVector.Y = Vector.Y / Scalar;
}

//========================================================================

void  V2Divide(D3DVECTOR2& retVector, D3DVECTOR2& Vector, float Scalar)
{
	retVector.X = Vector.X / Scalar;
	retVector.Y = Vector.Y / Scalar;
}

//========================================================================

void  V2Divide(D3DVECTOR2& retVector, D3DVECTOR2& Vector1, D3DVECTOR2& Vector2)
{
	retVector.X = Vector1.X / Vector2.X;
	retVector.Y = Vector1.Y / Vector2.Y;
}

//========================================================================

void  V2Multiply(D3DVECTOR2& retVector, float Scalar, D3DVECTOR2& Vector)
{
	retVector.X = Vector.X * Scalar;
	retVector.Y = Vector.Y * Scalar;
}

//========================================================================

void  V2Multiply(D3DVECTOR2& retVector, D3DVECTOR2& Vector, float Scalar)
{
	retVector.X = Vector.X * Scalar;
	retVector.Y = Vector.Y * Scalar;
}

//========================================================================

float V2Multiply(D3DVECTOR2& Vector1, D3DVECTOR2& Vector2)
{
	return (Vector1.X * Vector2.X + Vector1.Y * Vector2.Y);
}

//========================================================================

void V2Zero(D3DVECTOR2& Vector)
{
	Vector.X = Vector.Y = 0.0f;
}

//========================================================================

void V2Negate(D3DVECTOR2& Vector)
{
	Vector.X = -Vector.X;
	Vector.Y = -Vector.Y;
}

//========================================================================

float V2Magnitude(D3DVECTOR2& Vector)
{
	return sqrtf(Vector.X * Vector.X + Vector.Y * Vector.Y); 
}

//========================================================================

void V2Normalize(D3DVECTOR2& Vector)
{
	float Mag = V2Magnitude(Vector);
	if(Mag <= EPSILON){Mag = 1;};
	Vector.X /= Mag;
	Vector.Y /= Mag;

	if(FFabs(Vector.X) < EPSILON) Vector.X = 0.0f;
    if(FFabs(Vector.Y) < EPSILON) Vector.Y = 0.0f;
}

//========================================================================

float V2MagnitudeSquared(D3DVECTOR2& Vector)
{
	return ((Vector.X * Vector.X) + (Vector.Y * Vector.Y));
}

//========================================================================

void V2Minimize(D3DVECTOR2& retVector, D3DVECTOR2& Vector1, D3DVECTOR2& Vector2)
{
	retVector.X = MIN(Vector1.X, Vector2.X);
	retVector.Y = MIN(Vector1.Y, Vector2.Y);
}

//========================================================================

void V2Maximize(D3DVECTOR2& retVector, D3DVECTOR2& Vector1, D3DVECTOR2& Vector2)
{
	retVector.X = MAX(Vector1.X, Vector2.X);
	retVector.Y = MAX(Vector1.Y, Vector2.Y);
}

//========================================================================

float V2Distance(D3DVECTOR2& Vector1, D3DVECTOR2& Vector2)
{
	return sqrtf((Vector2.X - Vector1.X) * (Vector2.X - Vector1.X) +
	    	     (Vector2.Y - Vector1.Y) * (Vector2.Y - Vector1.Y));
}

//========================================================================

int V2FastDistance(int X, int Y)
{
	X = abs(X);
	Y = abs(Y);
	int DistanceMin = MIN(X, Y);
	return (X + Y - (DistanceMin>>1) - (DistanceMin>>2) + (DistanceMin>>4));
}

//========================================================================

void V2Copy(D3DVECTOR2& retVector, D3DVECTOR2& Vector)
{
	retVector.X = Vector.X;
	retVector.Y = Vector.Y;
}

//========================================================================

void V2Scale(D3DVECTOR2& retVector, D3DVECTOR2& Vector, float ScaleAmount)
{
	retVector.X = Vector.X * ScaleAmount;
	retVector.Y = Vector.Y * ScaleAmount;
}

//========================================================================

bool V2TwoVectorsAreNearlyEqual(D3DVECTOR2& Vector1, D3DVECTOR2& Vector2)
{
	if(FFabs(Vector1.X - Vector2.X) < EPSILON)
	{
		if(FFabs(Vector1.Y - Vector2.Y) < EPSILON)
		{
			return true;
		}
	}
	return false;
}

//========================================================================

void V2ComputeBoundingBox(D3DVECTOR2 *Vertices, long NumVertices, D3DVECTOR2& retBox_Min, D3DVECTOR2& retBox_Max)
{
	D3DVECTOR2 Min;
	D3DVECTOR2 Max;

	Min.X = Min.Y =  999999999999999999999.0f;
	Max.X = Max.Y = -999999999999999999999.0f;
	for(long i = 0; i < NumVertices; i++)
	{
		if(Vertices[i].X > Max.X){Max.X = Vertices[i].X;};
		if(Vertices[i].Y > Max.Y){Max.Y = Vertices[i].Y;};
		if(Vertices[i].X < Min.X){Min.X = Vertices[i].X;};
		if(Vertices[i].Y < Min.Y){Min.Y = Vertices[i].Y;};
	}

	retBox_Min = Min;
	retBox_Max = Max;
}

//========================================================================

void V2ComputeBoundingSphere(D3DVECTOR2 *Vertices, long NumVertices, D3DVECTOR2& retSphereCenter, float retSphereRadius)
{
	D3DVECTOR2 Min;
	D3DVECTOR2 Max;
	float RadiusMax;
	
	Min.X = Min.Y =  999999999999999999999.0f;
	Max.X = Max.Y = -999999999999999999999.0f;
	for(long i = 0; i < NumVertices; i++)
	{
		if(Vertices[i].X > Max.X){Max.X = Vertices[i].X;};
		if(Vertices[i].Y > Max.Y){Max.Y = Vertices[i].Y;};
		if(Vertices[i].X < Min.X){Min.X = Vertices[i].X;};
		if(Vertices[i].Y < Min.Y){Min.Y = Vertices[i].Y;};
	}

	RadiusMax = MAX(Max.X - Min.X, Max.Y - Min.Y);
	retSphereRadius = (RadiusMax / 2) + 20;
    V2Average(retSphereCenter, Max, Min);

}

//========================================================================

bool V2VectorContainedInBoundingBox(D3DVECTOR2& Vector, D3DVECTOR2& Box_Min, D3DVECTOR2& Box_Max)
{
	if((Vector.X >= Box_Min.X) | (Vector.Y >= Box_Min.Y))
	{
		if((Vector.X <= Box_Max.X) | (Vector.Y <= Box_Max.Y))	
		{
			return true;
		}
	}
	return false;
}

//========================================================================

bool V2IsCollision(D3DVECTOR2& Collider_Position, float Collider_Radius, D3DVECTOR2& Object_Position, float Object_Radius)
{
	float Distance = Object_Radius + (Collider_Radius / 2);
    
	if((sqrtf(((Collider_Position.X - Object_Position.X) * (Collider_Position.X - Object_Position.X)) +
		      ((Collider_Position.Y - Object_Position.Y) * (Collider_Position.Y - Object_Position.Y)))) < Distance) 
	{
		return true;
	}else{
		return false;
	}
}

//========================================================================

bool V2IsCollisionEX(D3DVECTOR2& Collider_Position, float Collider_Radius, D3DVECTOR2& Object_Position, float Object_Radius)
{
	float Mag;
	D3DVECTOR2 Calculation;
		
	Calculation.X = Collider_Position.X - Object_Position.X;
	Calculation.Y = Collider_Position.Y - Object_Position.Y;
	Mag = Collider_Radius * Collider_Radius + Object_Radius * Object_Radius;

	if(V2MagnitudeSquared(Calculation) < Mag)
	{
		return true;
	}else{
		return false;
	}
}

//========================================================================

void V2Interpolate_Linear(D3DVECTOR2 *retVector, float Time, D3DVECTOR2 *KeyFrame1, D3DVECTOR2 *KeyFrame2)
{
	retVector->X = KeyFrame1->X + Time * (KeyFrame2->X - KeyFrame1->X);
	retVector->Y = KeyFrame1->Y + Time * (KeyFrame2->Y - KeyFrame1->Y);
}

//========================================================================

void V2Interpolate_LinearEX(D3DVECTOR2 *retVertices, long NumVertices, float Time, D3DVECTOR2 *KeyFrame1, D3DVECTOR2 *KeyFrame2)
{
	for(long i = 0; i < NumVertices; i++)
	{
		retVertices->X = KeyFrame1->X + Time * (KeyFrame2->X - KeyFrame1->X);
	    retVertices->Y = KeyFrame1->Y + Time * (KeyFrame2->Y - KeyFrame1->Y);
		retVertices++;
	}
}

//========================================================================

void V2Interpolate_HermitSpline(D3DVECTOR2 *retVector, float Time, D3DVECTOR2 *KeyFrame1, D3DVECTOR2 *KeyFrame2, D3DVECTOR2 *KeyFrame3, D3DVECTOR2 *KeyFrame4)
{
	D3DVECTOR2 Lerp1;
	D3DVECTOR2 Lerp2;
	float Alpha	 = 0.1f;
	float TimeX2 = Time * Time;
	float TimeX3 = TimeX2 * Time;

	Lerp1.X = ((1 - Alpha) / 2.0f) * ((KeyFrame2->X - KeyFrame1->X) + KeyFrame3->X - KeyFrame2->X);
	Lerp1.Y = ((1 - Alpha) / 2.0f) * ((KeyFrame2->Y - KeyFrame1->Y) + KeyFrame3->Y - KeyFrame2->Y);
	
	Lerp2.X = ((1 - Alpha) / 2.0f) * ((KeyFrame3->X - KeyFrame2->X) + KeyFrame4->X - KeyFrame3->X);
	Lerp2.Y = ((1 - Alpha) / 2.0f) * ((KeyFrame3->Y - KeyFrame2->Y) + KeyFrame4->Y - KeyFrame3->Y);
	
	retVector->X = (((2 * TimeX3) - (3 * TimeX2) + 1) * KeyFrame2->X) + ((TimeX3 - (2 * TimeX2) + Time) * Lerp1.X) + ((TimeX3 - TimeX2) * Lerp2.X) + (((-2 * TimeX3) + (3 * TimeX2)) * KeyFrame3->X);
	retVector->Y = (((2 * TimeX3) - (3 * TimeX2) + 1) * KeyFrame2->Y) + ((TimeX3 - (2 * TimeX2) + Time) * Lerp1.Y) + ((TimeX3 - TimeX2) * Lerp2.Y) + (((-2 * TimeX3) + (3 * TimeX2)) * KeyFrame3->Y);
}

//========================================================================

void V2Interpolate_HermitSplineEX(D3DVECTOR2 *retVertices, long NumVertices, float Time, D3DVECTOR2 *KeyFrame1, D3DVECTOR2 *KeyFrame2, D3DVECTOR2 *KeyFrame3, D3DVECTOR2 *KeyFrame4)
{
	D3DVECTOR2 Lerp1;
	D3DVECTOR2 Lerp2;
	float Alpha	 = 0.1f;
	float TimeX2 = Time * Time;
	float TimeX3 = TimeX2 * Time;
		
	for(long i = 0; i < NumVertices; i++)
	{
		Lerp1.X = ((1 - Alpha) / 2.0f) * ((KeyFrame2->X - KeyFrame1->X) + KeyFrame3->X - KeyFrame2->X);
		Lerp1.Y = ((1 - Alpha) / 2.0f) * ((KeyFrame2->Y - KeyFrame1->Y) + KeyFrame3->Y - KeyFrame2->Y);
		
		Lerp2.X = ((1 - Alpha) / 2.0f) * ((KeyFrame3->X - KeyFrame2->X) + KeyFrame4->X - KeyFrame3->X);
		Lerp2.Y = ((1 - Alpha) / 2.0f) * ((KeyFrame3->Y - KeyFrame2->Y) + KeyFrame4->Y - KeyFrame3->Y);

		retVertices->X = (((2 * TimeX3) - (3 * TimeX2) + 1) * KeyFrame2->X) + ((TimeX3 - (2 * TimeX2) + Time) * Lerp1.X) + ((TimeX3 - TimeX2) * Lerp2.X) + (((-2 * TimeX3) + (3 * TimeX2)) * KeyFrame3->X);
		retVertices->Y = (((2 * TimeX3) - (3 * TimeX2) + 1) * KeyFrame2->Y) + ((TimeX3 - (2 * TimeX2) + Time) * Lerp1.Y) + ((TimeX3 - TimeX2) * Lerp2.Y) + (((-2 * TimeX3) + (3 * TimeX2)) * KeyFrame3->Y);
		retVertices++;
	}
}


//šššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššš
//    |œœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœ|
//    |œœ                   Vector 3 Functions                   œœ|
//    |œœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœ|
//šššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššš


inline const D3DVECTOR operator^(D3DVECTOR const &Vector1, D3DVECTOR const &Vector2)
{
	D3DVECTOR Result;
	Result.X = (Vector1.Y * Vector2.Z - Vector1.Z * Vector2.Y);
	Result.Y = (Vector1.Z * Vector2.X - Vector1.X * Vector2.Z);
	Result.Z = (Vector1.X * Vector2.Y - Vector1.Y * Vector2.X);
	return Result;
}

//========================================================================

void V3Add(D3DVECTOR& retVector, D3DVECTOR& Vector1, D3DVECTOR& Vector2)
{
	retVector.X = Vector1.X + Vector2.X;
	retVector.Y = Vector1.Y + Vector2.Y;
	retVector.Z = Vector1.Z + Vector2.Z;
}

//========================================================================

void V3Average(D3DVECTOR& retVector, D3DVECTOR& Vector1, D3DVECTOR& Vector2)
{
	D3DVECTOR Sum;
	V3Add(Sum, Vector1, Vector2);

	retVector.X = Sum.X /= 2;
	retVector.Y = Sum.Y /= 2;
	retVector.Z = Sum.Z /= 2;
}

//========================================================================

void V3Power(D3DVECTOR& retVector, D3DVECTOR& Vector1, D3DVECTOR& Vector2)
{
	//Saying Vector1 ^ Vector2
	retVector.X =  Vector1.Y * Vector2.Z - Vector1.Z * Vector2.Y;
	retVector.Y = -Vector1.X * Vector2.Z + Vector1.Z * Vector2.X;
	retVector.Z =  Vector1.X * Vector2.Y - Vector1.Y * Vector2.X;
}

//========================================================================

void V3CrossProduct(D3DVECTOR& retVector, D3DVECTOR& Vector1, D3DVECTOR& Vector2)
{
	retVector.X = ((Vector1.Y * Vector2.Z) - (Vector1.Z * Vector2.Y));
	retVector.Y = ((Vector1.Z * Vector2.X) - (Vector1.X * Vector2.Z));
	retVector.Z = ((Vector1.X * Vector2.Y) - (Vector1.Y * Vector2.X));
}

//========================================================================

float V3ScalarProduct(D3DVECTOR& Vector1, D3DVECTOR& Vector2, D3DVECTOR& Vector3)
{
	return float((Vector1.X * (Vector2.Y * Vector3.Z - Vector2.Z * Vector3.Y)) +
		         (Vector1.Y * (Vector2.X * Vector3.Z - Vector2.Z * Vector3.X)) +
				 (Vector1.Z * (Vector2.X * Vector3.Y - Vector2.Y * Vector3.X)));
}

//========================================================================

float V3PlaneDistance(D3DVECTOR& Normal, D3DVECTOR& Vector)
{
	return - ((Normal.X * Vector.X) + (Normal.Y * Vector.Y) + (Normal.Z * Vector.Z));
}

//========================================================================

void V3IntersectionPoint(D3DVECTOR& retVector, D3DVECTOR Normal, D3DVECTOR RayStart, D3DVECTOR RayEnd, double Distance)
{
	D3DVECTOR LineDirection;
	double Numerator = 0.0;
	double Denominator = 0.0;
	double Dist = 0.0;
	
	V3Subtract(LineDirection, RayEnd, RayStart);	
	V3Normalize(LineDirection);				
	
	Numerator = -(Normal.X * RayStart.X + Normal.Y * RayStart.Y + Normal.Z * RayStart.Z + Distance);
	Denominator = V3DotProduct(Normal, LineDirection);	 
				  
	if(Denominator == 0.0){retVector = RayStart; return;};						
	Dist = Numerator / Denominator;			
	
	retVector.X = (float)(RayStart.X + (LineDirection.X * Dist));
	retVector.Y = (float)(RayStart.Y + (LineDirection.Y * Dist));
	retVector.Z = (float)(RayStart.Z + (LineDirection.Z * Dist));					
}

//========================================================================

bool V3EdgeSphereCollision(D3DVECTOR *Vertices, long NumVertices, D3DVECTOR &SphereCenter, float SphereRadius)
{
	D3DVECTOR Point;
	float Distance;

	for(long i = 0; i < NumVertices; i++)
	{
		V3ClosestPointOnLine(Point, Vertices[i], Vertices[(i + 1) % NumVertices], SphereCenter);
		Distance = V3FastDistance(Point.X - SphereCenter.X, Point.Y - SphereCenter.Y, Point.Z - SphereCenter.Z);
		if(Distance < SphereRadius){return true;};
	}
	return false;
}

//========================================================================

bool V3SpherePolygonCollision(D3DVECTOR *Vertices, long NumVertices, D3DVECTOR& SphereCenter, float SphereRadius)
{
	int Classification;
	D3DVECTOR Position;
	D3DVECTOR Normal; 
	D3DVECTOR Offset;
	float Distance;

	V3PolygonNormal(Normal, Vertices[0], Vertices[1], Vertices[2]);
	Classification = V3ClassifySphere(Normal, Vertices[0], SphereCenter, SphereRadius, Distance);
	if(Classification == INTERSECTS) 
	{
		V3Multiply(Offset, Normal, Distance);
		V3Subtract(Position, SphereCenter, Offset);

		if(V3InsidePolygon(Vertices, NumVertices, Position))
		{
			return true;	
		}else{
			if(V3EdgeSphereCollision(Vertices, NumVertices, SphereCenter, SphereRadius)){return true;};
		}
	}
	return false;
}

//========================================================================

void V3ClosestPointOnLine(D3DVECTOR& retVector, D3DVECTOR& LineStart, D3DVECTOR& LineEnd, D3DVECTOR& Point)
{
	D3DVECTOR Vector1; 
    D3DVECTOR Vector2; 
	D3DVECTOR Vector3;
	float Distance;
	float Dot;

	V3Subtract(Vector1, Point, LineStart);
	V3Subtract(Vector2, LineEnd, LineStart);
	V3Normalize(Vector2);

	Distance = V3FastDistance(LineStart.X - LineEnd.X, LineStart.Y - LineEnd.Y, LineStart.Z - LineEnd.Z);
    Dot = V3DotProduct(Vector2, Vector1);

    if(Dot <= EPSILON){retVector = LineStart; return;};
    if(Dot >= Distance){retVector = LineEnd; return;};
	
	V3Multiply(Vector3, Vector2, Dot);
    V3Add(retVector, LineStart, Vector3);
}

//========================================================================

bool V3IntersectedPlane(D3DVECTOR *Vertices, D3DVECTOR RayStart, D3DVECTOR RayEnd, D3DVECTOR& Normal, float OriginDistance)
{
	float Distance1 = 0;
	float Distance2 = 0;
			
	V3PolygonNormal(Normal, Vertices[0], Vertices[1], Vertices[2]);						
	OriginDistance = V3PlaneDistance(Normal, Vertices[0]);
	Distance1 = ((Normal.X * RayStart.X) + (Normal.Y * RayStart.Y) + (Normal.Z * RayStart.Z)) + OriginDistance;
	Distance2 = ((Normal.X * RayEnd.X) + (Normal.Y * RayEnd.Y) + (Normal.Z * RayEnd.Z)) + OriginDistance;

	if(Distance1 * Distance2 <= EPSILON)
	{
	    return true;
	}else{
		return false;
	}
}

//========================================================================

bool V3InsidePolygon(D3DVECTOR *Polygon, long NumVertices, D3DVECTOR Intersection)
{
	double Angle;						
	D3DVECTOR Vector1;
	D3DVECTOR Vector2;						
	
	for(int i = 0; i < NumVertices; i++)	
	{	
		V3Subtract(Vector1, Polygon[i], Intersection);											
		V3Subtract(Vector2, Polygon[i + 1 % NumVertices], Intersection);										
		Angle += V3AngleBetweenVectors(Vector1, Vector2);
		Polygon++;
	}
												
	if(Angle >= (0.9999 * (2.0 * PI)))
	{
		return true;
	}else{		
		return false;
	}
}

//========================================================================

bool V3IntersectedPolygon(D3DVECTOR *Polygon, long NumVertices, D3DVECTOR& RayStart, D3DVECTOR& RayEnd)
{
	D3DVECTOR Normal;
	D3DVECTOR Intersection;
	float OriginDistance = 0.0f;

	if(!V3IntersectedPlane(Polygon, RayStart, RayEnd, Normal, OriginDistance)){return false;};
	V3IntersectionPoint(Intersection, Normal, RayStart, RayEnd, OriginDistance);
	
	if(V3InsidePolygon(Polygon, NumVertices, Intersection))
	{
		return true;
	}else{
		return false;
	}						
}

//========================================================================

int V3ClassifySphere(D3DVECTOR &Normal, D3DVECTOR &Point, D3DVECTOR &SphereCenter, float SphereRadius, float &Distance)
{
	float PlaneDistance; 

	PlaneDistance = V3PlaneDistance(Normal, Point);
	Distance = (Normal.X * SphereCenter.X + Normal.Y * SphereCenter.Y + Normal.Z * SphereCenter.Z + PlaneDistance);

	if(Absolute(Distance) < SphereRadius)
	{
		return INTERSECTS;
	}else if(Distance >= SphereRadius){
		return FRONT;
	}
	return BEHIND;
}

//========================================================================

float V3DotProduct(D3DVECTOR& Vector1, D3DVECTOR& Vector2)
{
	return ((Vector1.X * Vector2.X) + (Vector1.Y * Vector2.Y) + (Vector1.Z * Vector2.Z));
}

//========================================================================

void V3Subtract(D3DVECTOR& retVector, D3DVECTOR& Vector1, D3DVECTOR& Vector2)
{
	retVector.X = Vector1.X - Vector2.X;
	retVector.Y = Vector1.Y - Vector2.Y;
	retVector.Z = Vector1.Z - Vector2.Z;
}

//========================================================================

void V3Divide(D3DVECTOR& retVector, float Scalar, D3DVECTOR& Vector)
{
	retVector.X = Vector.X / Scalar;
	retVector.Y = Vector.Y / Scalar;
	retVector.Z = Vector.Z / Scalar;
}

//========================================================================

void V3Divide(D3DVECTOR& retVector, D3DVECTOR& Vector, float Scalar)
{
	retVector.X = Vector.X / Scalar;
	retVector.Y = Vector.Y / Scalar;
	retVector.Z = Vector.Z / Scalar;
}

//========================================================================

void V3Divide(D3DVECTOR& retVector, D3DVECTOR& Vector1, D3DVECTOR& Vector2)
{
	retVector.X = Vector1.X / Vector2.X;
	retVector.Y = Vector1.Y / Vector2.Y;
	retVector.Z = Vector1.Z / Vector2.Z;
}

//========================================================================

void V3Multiply(D3DVECTOR& retVector, float Scalar, D3DVECTOR& Vector)
{
	retVector.X = Vector.X * Scalar;
	retVector.Y = Vector.Y * Scalar;
	retVector.Z = Vector.Z * Scalar;
}

//========================================================================

void V3Multiply(D3DVECTOR& retVector, D3DVECTOR& Vector, float Scalar)
{
	retVector.X = Vector.X * Scalar;
	retVector.Y = Vector.Y * Scalar;
	retVector.Z = Vector.Z * Scalar;
}

//========================================================================

float V3Multiply(D3DVECTOR& Vector1, D3DVECTOR& Vector2)
{
	return (Vector1.X * Vector2.X + Vector1.Y * Vector2.Y + Vector1.Z * Vector2.Z);
}

//========================================================================

void V3Zero(D3DVECTOR& Vector)
{
	Vector.X = Vector.Y = Vector.Z = 0.0f;
}

//========================================================================

void V3Negate(D3DVECTOR& Vector)
{
	Vector.X = -Vector.X;
	Vector.Y = -Vector.Y;
	Vector.Z = -Vector.Z;
}

//========================================================================

float V3Magnitude(D3DVECTOR& Vector)
{
	return sqrtf(Vector.X * Vector.X + Vector.Y * Vector.Y + Vector.Z * Vector.Z); 
}

//========================================================================

void V3Normalize(D3DVECTOR& Vector)
{
	float Mag = V3Magnitude(Vector);
	if(Mag <= EPSILON){Mag = 1;};
	Vector.X /= Mag;
	Vector.Y /= Mag;
	Vector.Z /= Mag;

	if(FFabs(Vector.X) < EPSILON) Vector.X = 0.0f;
    if(FFabs(Vector.Y) < EPSILON) Vector.Y = 0.0f;
	if(FFabs(Vector.Z) < EPSILON) Vector.Z = 0.0f;
}

//========================================================================

float V3MagnitudeSquared(D3DVECTOR& Vector)
{
	return ((Vector.X * Vector.X) + (Vector.Y * Vector.Y) + (Vector.Z * Vector.Z));
}

//========================================================================

void V3Minimize(D3DVECTOR& retVector, D3DVECTOR& Vector1, D3DVECTOR& Vector2)
{
	retVector.X = MIN(Vector1.X, Vector2.X);
	retVector.Y = MIN(Vector1.Y, Vector2.Y);
	retVector.Z = MIN(Vector1.Z, Vector2.Z);
}

//========================================================================

void V3Maximize(D3DVECTOR& retVector, D3DVECTOR& Vector1, D3DVECTOR& Vector2)
{
	retVector.X = MAX(Vector1.X, Vector2.X);
	retVector.Y = MAX(Vector1.Y, Vector2.Y);
	retVector.Z = MAX(Vector1.Z, Vector2.Z);
}

//========================================================================

float V3Distance(D3DVECTOR& Vector1, D3DVECTOR& Vector2)
{
	return sqrtf((Vector2.X - Vector1.X) * (Vector2.X - Vector1.X) +
				 (Vector2.Y - Vector1.Y) * (Vector2.Y - Vector1.Y) + 
	    	     (Vector2.Z - Vector1.Z) * (Vector2.Z - Vector1.Z));
}

//========================================================================

float V3FastDistance(float X, float Y, float Z)
{
	int SwapValue; 
    int fX,fY,fZ; 
    int Distance;

    fX = (int)fabs(X) * 1024;
    fY = (int)fabs(Y) * 1024;
    fZ = (int)fabs(Z) * 1024;

    if(fY < fX) SWAP(fX, fY, SwapValue)
    if(fZ < fY) SWAP(fY, fZ, SwapValue)
    if(fY < fX) SWAP(fX, fY, SwapValue)

    Distance = (fZ + 11 * (fY >> 5) + (fX >> 2));
    return((float)(Distance >> 10));
}

//========================================================================

void V3Copy(D3DVECTOR& retVector, D3DVECTOR& Vector)
{
	retVector.X = Vector.X;
	retVector.Y = Vector.Y;
	retVector.Z = Vector.Z;
}

//========================================================================

void V3Scale(D3DVECTOR& retVector, D3DVECTOR& Vector, float ScaleAmount)
{
	retVector.X = Vector.X * ScaleAmount;
	retVector.Y = Vector.Y * ScaleAmount;
	retVector.Z = Vector.Z * ScaleAmount;
}

//========================================================================

void V3PolygonNormal(D3DVECTOR& retVector, D3DVECTOR& Polygon1, D3DVECTOR& Polygon2, D3DVECTOR& Polygon3)
{
	D3DVECTOR vCalculate1;
	D3DVECTOR vCalculate2;

	vCalculate1.X = (Polygon2.X - Polygon1.X);
	vCalculate1.Y = (Polygon2.Y - Polygon1.Y);
	vCalculate1.Z = (Polygon2.Z - Polygon1.Z);

	vCalculate2.X = (Polygon3.X - Polygon1.X);
	vCalculate2.Y = (Polygon3.Y - Polygon1.Y);
	vCalculate2.Z = (Polygon3.Z - Polygon1.Z);
	
	V3CrossProduct(retVector, vCalculate1, vCalculate2);
}

//========================================================================

bool V3TwoVectorsAreNearlyEqual(D3DVECTOR& Vector1, D3DVECTOR& Vector2)
{
	if(FFabs(Vector1.X - Vector2.X) < EPSILON)
	{
		if(FFabs(Vector1.Y - Vector2.Y) < EPSILON)
		{
			if(FFabs(Vector1.Z - Vector2.Z) < EPSILON)
			{
				return true;
			}
		}
	}
	return false;
}

//========================================================================

void V3Spherical(D3DVECTOR& retVector, float Theta, float Rho, float Phi)
{
	retVector.X = (Phi * cosf(Rho) * sinf(Theta));
	retVector.Y = (Phi * sinf(Rho));
	retVector.Z = (Phi * cosf(Rho) * cosf(Theta));
}

//========================================================================

double V3AngleBetweenVectors(D3DVECTOR& Vector1, D3DVECTOR& Vector2)
{							
	float  Dot;
	float  Mag;
	double Angle;
		
	Dot = V3DotProduct(Vector1, Vector2);
	Mag = V3Magnitude(Vector1) * V3Magnitude(Vector2);
	Angle = acos(Dot / Mag);

	if(_isnan(Angle))
	{
		return 0;
	}else{
		return(Angle * (PI / 180));
	}
}

//========================================================================

void V3ComputeBoundingBox(D3DVECTOR *Vertices, long NumVertices, D3DVECTOR& retBox_Min, D3DVECTOR& retBox_Max)
{
	D3DVECTOR Min;
	D3DVECTOR Max;

	Min.X = Min.Y = Min.Z =  999999999999999999999.0f;
	Max.X = Max.Y = Max.Z = -999999999999999999999.0f;
	for(long i = 0; i < NumVertices; i++)
	{
		if(Vertices[i].X > Max.X){Max.X = Vertices[i].X;};
		if(Vertices[i].Y > Max.Y){Max.Y = Vertices[i].Y;};
		if(Vertices[i].Z > Max.Z){Max.Z = Vertices[i].Z;};
		if(Vertices[i].X < Min.X){Min.X = Vertices[i].X;};
		if(Vertices[i].Y < Min.Y){Min.Y = Vertices[i].Y;};
		if(Vertices[i].Z < Min.Z){Min.Z = Vertices[i].Z;};
	}

	retBox_Min = Min;
	retBox_Max = Max;
}

//========================================================================

void V3ComputeBoundingSphere(D3DVECTOR *Vertices, long NumVertices, D3DVECTOR& retSphereCenter, float retSphereRadius)
{
	D3DVECTOR Min;
	D3DVECTOR Max;
	float RadiusMax1;
	float RadiusMax2;
	
	Min.X = Min.Y = Min.Z =  999999999999999999999.0f;
	Max.X = Max.Y = Max.Z = -999999999999999999999.0f;
	for(long i = 0; i < NumVertices; i++)
	{
		if(Vertices[i].X > Max.X){Max.X = Vertices[i].X;};
		if(Vertices[i].Y > Max.Y){Max.Y = Vertices[i].Y;};
		if(Vertices[i].Z > Max.Z){Max.Z = Vertices[i].Z;};
		if(Vertices[i].X < Min.X){Min.X = Vertices[i].X;};
		if(Vertices[i].Y < Min.Y){Min.Y = Vertices[i].Y;};
		if(Vertices[i].Z < Min.Z){Min.Z = Vertices[i].Z;};
	}

	RadiusMax1 = MAX(Max.X - Min.X, Max.Y - Min.Y);
	RadiusMax2 = MAX(RadiusMax1, Max.Z - Min.Z);

	retSphereRadius = (RadiusMax2 / 2) + 20;
    V3Average(retSphereCenter, Max, Min);

}

//========================================================================

bool V3VectorContainedInBoundingBox(D3DVECTOR& Vector, D3DVECTOR& Box_Min, D3DVECTOR& Box_Max)
{
	if((Vector.X >= Box_Min.X) | (Vector.Y >= Box_Min.Y) | (Vector.Z >= Box_Min.Z))
	{
		if((Vector.X <= Box_Max.X) | (Vector.Y <= Box_Max.Y) | (Vector.Z <= Box_Max.Z))	
		{
			return true;
		}
	}
	return false;
}

//========================================================================

bool V3IsCollision(D3DVECTOR& Collider_Position, float Collider_Radius, D3DVECTOR& Object_Position, float Object_Radius)
{
	float Distance = Object_Radius + (Collider_Radius / 2);
    
	if((sqrtf(((Collider_Position.X - Object_Position.X) * (Collider_Position.X - Object_Position.X)) +
		      ((Collider_Position.Y - Object_Position.Y) * (Collider_Position.Y - Object_Position.Y)) + 
			  ((Collider_Position.Z - Object_Position.Z) * (Collider_Position.Z - Object_Position.Z)))) < Distance) 
	{
		return true;
	}else{
		return false;
	}
}

//========================================================================

bool V3IsCollisionEX(D3DVECTOR& Collider_Position, float Collider_Radius, D3DVECTOR& Object_Position, float Object_Radius)
{
	float Magnitude;
	D3DVECTOR Calculation;
		
	Calculation.X = Collider_Position.X - Object_Position.X;
	Calculation.Y = Collider_Position.Y - Object_Position.Y;
	Calculation.Z = Collider_Position.Z - Object_Position.Z;
	Magnitude = Collider_Radius * Collider_Radius + Object_Radius * Object_Radius;

	if(V3MagnitudeSquared(Calculation) < Magnitude)
	{
		return true;
	}else{
		return false;
	}
}

//========================================================================

void V3Interpolate_Linear(D3DVECTOR *retVector, float Time, D3DVECTOR *KeyFrame1, D3DVECTOR *KeyFrame2)
{
	retVector->X = KeyFrame1->X + Time * (KeyFrame2->X - KeyFrame1->X);
	retVector->Y = KeyFrame1->Y + Time * (KeyFrame2->Y - KeyFrame1->Y);
	retVector->Z = KeyFrame1->Z + Time * (KeyFrame2->Z - KeyFrame1->Z);
}

//========================================================================

void V3Interpolate_LinearEX(D3DVECTOR *retVertices, long NumVertices, float Time, D3DVECTOR *KeyFrame1, D3DVECTOR *KeyFrame2)
{
	for(long i = 0; i < NumVertices; i++)
	{
		retVertices->X = KeyFrame1->X + Time * (KeyFrame2->X - KeyFrame1->X);
	    retVertices->Y = KeyFrame1->Y + Time * (KeyFrame2->Y - KeyFrame1->Y);
		retVertices->Z = KeyFrame1->Z + Time * (KeyFrame2->Z - KeyFrame1->Z);
		retVertices++;
	}
}

//========================================================================

void V3Interpolate_HermitSpline(D3DVECTOR *retVector, float Time, D3DVECTOR *KeyFrame1, D3DVECTOR *KeyFrame2, D3DVECTOR *KeyFrame3, D3DVECTOR *KeyFrame4)
{
	D3DVECTOR Lerp1;
	D3DVECTOR Lerp2;
	float Alpha	 = 0.1f;
	float TimeX2 = Time * Time;
	float TimeX3 = TimeX2 * Time;

	Lerp1.X = ((1 - Alpha) / 2.0f) * ((KeyFrame2->X - KeyFrame1->X) + KeyFrame3->X - KeyFrame2->X);
	Lerp1.Y = ((1 - Alpha) / 2.0f) * ((KeyFrame2->Y - KeyFrame1->Y) + KeyFrame3->Y - KeyFrame2->Y);
	Lerp1.Z = ((1 - Alpha) / 2.0f) * ((KeyFrame2->Z - KeyFrame1->Z) + KeyFrame3->Z - KeyFrame2->Z);
	
	Lerp2.X = ((1 - Alpha) / 2.0f) * ((KeyFrame3->X - KeyFrame2->X) + KeyFrame4->X - KeyFrame3->X);
	Lerp2.Y = ((1 - Alpha) / 2.0f) * ((KeyFrame3->Y - KeyFrame2->Y) + KeyFrame4->Y - KeyFrame3->Y);
	Lerp2.Z = ((1 - Alpha) / 2.0f) * ((KeyFrame3->Z - KeyFrame2->Z) + KeyFrame4->Z - KeyFrame3->Z);
	
	retVector->X = (((2 * TimeX3) - (3 * TimeX2) + 1) * KeyFrame2->X) + ((TimeX3 - (2 * TimeX2) + Time) * Lerp1.X) + ((TimeX3 - TimeX2) * Lerp2.X) + (((-2 * TimeX3) + (3 * TimeX2)) * KeyFrame3->X);
	retVector->Y = (((2 * TimeX3) - (3 * TimeX2) + 1) * KeyFrame2->Y) + ((TimeX3 - (2 * TimeX2) + Time) * Lerp1.Y) + ((TimeX3 - TimeX2) * Lerp2.Y) + (((-2 * TimeX3) + (3 * TimeX2)) * KeyFrame3->Y);
	retVector->Z = (((2 * TimeX3) - (3 * TimeX2) + 1) * KeyFrame2->Z) + ((TimeX3 - (2 * TimeX2) + Time) * Lerp1.Z) + ((TimeX3 - TimeX2) * Lerp2.Z) + (((-2 * TimeX3) + (3 * TimeX2)) * KeyFrame3->Z);
}

//========================================================================

void V3Interpolate_HermitSplineEX(D3DVECTOR *retVertices, long NumVertices, float Time, D3DVECTOR *KeyFrame1, D3DVECTOR *KeyFrame2, D3DVECTOR *KeyFrame3, D3DVECTOR *KeyFrame4)
{
	D3DVECTOR Lerp1;
	D3DVECTOR Lerp2;
	float Alpha	 = 0.1f;
	float TimeX2 = Time * Time;
	float TimeX3 = TimeX2 * Time;
		
	for(long i = 0; i < NumVertices; i++)
	{
		Lerp1.X = ((1 - Alpha) / 2.0f) * ((KeyFrame2->X - KeyFrame1->X) + KeyFrame3->X - KeyFrame2->X);
		Lerp1.Y = ((1 - Alpha) / 2.0f) * ((KeyFrame2->Y - KeyFrame1->Y) + KeyFrame3->Y - KeyFrame2->Y);
		Lerp1.Z = ((1 - Alpha) / 2.0f) * ((KeyFrame2->Z - KeyFrame1->Z) + KeyFrame3->Z - KeyFrame2->Z);

		Lerp2.X = ((1 - Alpha) / 2.0f) * ((KeyFrame3->X - KeyFrame2->X) + KeyFrame4->X - KeyFrame3->X);
		Lerp2.Y = ((1 - Alpha) / 2.0f) * ((KeyFrame3->Y - KeyFrame2->Y) + KeyFrame4->Y - KeyFrame3->Y);
		Lerp2.Z = ((1 - Alpha) / 2.0f) * ((KeyFrame3->Z - KeyFrame2->Z) + KeyFrame4->Z - KeyFrame3->Z);

		retVertices->X = (((2 * TimeX3) - (3 * TimeX2) + 1) * KeyFrame2->X) + ((TimeX3 - (2 * TimeX2) + Time) * Lerp1.X) + ((TimeX3 - TimeX2) * Lerp2.X) + (((-2 * TimeX3) + (3 * TimeX2)) * KeyFrame3->X);
		retVertices->Y = (((2 * TimeX3) - (3 * TimeX2) + 1) * KeyFrame2->Y) + ((TimeX3 - (2 * TimeX2) + Time) * Lerp1.Y) + ((TimeX3 - TimeX2) * Lerp2.Y) + (((-2 * TimeX3) + (3 * TimeX2)) * KeyFrame3->Y);
		retVertices->Z = (((2 * TimeX3) - (3 * TimeX2) + 1) * KeyFrame2->Z) + ((TimeX3 - (2 * TimeX2) + Time) * Lerp1.Z) + ((TimeX3 - TimeX2) * Lerp2.Z) + (((-2 * TimeX3) + (3 * TimeX2)) * KeyFrame3->Z);
		retVertices++;
	}
}


//šššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššš
//    |œœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœ|
//    |œœ                   Vector 4 Functions                   œœ|
//    |œœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœ|
//šššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššš


void V4Add(D3DVECTOR4& retVector, D3DVECTOR4& Vector1, D3DVECTOR4& Vector2)
{
	retVector.X = Vector1.X + Vector2.X;
	retVector.Y = Vector1.Y + Vector2.Y;
	retVector.Z = Vector1.Z + Vector2.Z;
	retVector.W = Vector1.W + Vector2.W;
}

//========================================================================

void V4Average(D3DVECTOR4& retVector, D3DVECTOR4& Vector1, D3DVECTOR4& Vector2)
{
	D3DVECTOR4 Sum;
	V4Add(Sum, Vector1, Vector2);

	retVector.X = Sum.X /= 2;
	retVector.Y = Sum.Y /= 2;
	retVector.Z = Sum.Z /= 2;
	retVector.W = Sum.W /= 2;
}

//========================================================================

float V4DotProduct(D3DVECTOR4& Vector1, D3DVECTOR4& Vector2)
{
	return ((Vector1.X * Vector2.X) + (Vector1.Y * Vector2.Y) + (Vector1.Z * Vector2.Z) + (Vector1.W * Vector2.W));
}

//========================================================================

void  V4Subtract(D3DVECTOR4& retVector, D3DVECTOR4& Vector1, D3DVECTOR4& Vector2)
{
	retVector.X = Vector1.X - Vector2.X;
	retVector.Y = Vector1.Y - Vector2.Y;
	retVector.Z = Vector1.Z - Vector2.Z;
	retVector.W = Vector1.W - Vector2.W;
}

//========================================================================

void  V4Divide(D3DVECTOR4& retVector, float Scalar, D3DVECTOR4& Vector)
{
	retVector.X = Vector.X / Scalar;
	retVector.Y = Vector.Y / Scalar;
	retVector.Z = Vector.Z / Scalar;
	retVector.W = Vector.W / Scalar;
}

//========================================================================

void  V4Divide(D3DVECTOR4& retVector, D3DVECTOR4& Vector, float Scalar)
{
	retVector.X = Vector.X / Scalar;
	retVector.Y = Vector.Y / Scalar;
	retVector.Z = Vector.Z / Scalar;
	retVector.W = Vector.W / Scalar;
}

//========================================================================

void  V4Divide(D3DVECTOR4& retVector, D3DVECTOR4& Vector1, D3DVECTOR4& Vector2)
{
	retVector.X = Vector1.X / Vector2.X;
	retVector.Y = Vector1.Y / Vector2.Y;
	retVector.Z = Vector1.Z / Vector2.Z;
	retVector.W = Vector1.W / Vector2.W;
}

//========================================================================

void  V4Multiply(D3DVECTOR4& retVector, float Scalar, D3DVECTOR4& Vector)
{
	retVector.X = Vector.X * Scalar;
	retVector.Y = Vector.Y * Scalar;
	retVector.Z = Vector.Z * Scalar;
	retVector.W = Vector.W * Scalar;
}

//========================================================================

void  V4Multiply(D3DVECTOR4& retVector, D3DVECTOR4& Vector, float Scalar)
{
	retVector.X = Vector.X * Scalar;
	retVector.Y = Vector.Y * Scalar;
	retVector.Z = Vector.Z * Scalar;
	retVector.W = Vector.W * Scalar;
}

//========================================================================

float V4Multiply(D3DVECTOR4& Vector1, D3DVECTOR4& Vector2)
{
	return (Vector1.X * Vector2.X + Vector1.Y * Vector2.Y + Vector1.Z * Vector2.Z + Vector1.W * Vector2.W);
}

//========================================================================

void V4Zero(D3DVECTOR4& Vector)
{
	Vector.X = Vector.Y = Vector.Z = Vector.W = 0.0f;
}

//========================================================================

void V4Negate(D3DVECTOR4& Vector)
{
	Vector.X = -Vector.X;
	Vector.Y = -Vector.Y;
	Vector.Z = -Vector.Z;
	Vector.W = -Vector.W;
}

//========================================================================

float V4Magnitude(D3DVECTOR4& Vector)
{
	return sqrtf(Vector.X * Vector.X + Vector.Y * Vector.Y  + Vector.Z * Vector.Z  + Vector.W * Vector.W); 
}

//========================================================================


void V4Normalize(D3DVECTOR4& Vector)
{
	float Mag = V4Magnitude(Vector);
	if(Mag <= EPSILON){Mag = 1;};
	Vector.X /= Mag;
	Vector.Y /= Mag;
	Vector.Z /= Mag;
	Vector.W /= Mag;

	if(fabs(Vector.X) < EPSILON) Vector.X = 0.0f;
    if(fabs(Vector.Y) < EPSILON) Vector.Y = 0.0f;
	if(fabs(Vector.Z) < EPSILON) Vector.Z = 0.0f;
    if(fabs(Vector.W) < EPSILON) Vector.W = 0.0f;
}

//========================================================================

float V4MagnitudeSquared(D3DVECTOR4& Vector)
{
	return ((Vector.X * Vector.X) + (Vector.Y * Vector.Y) + (Vector.Z * Vector.Z) + (Vector.W * Vector.W));
}

//========================================================================

void V4Minimize(D3DVECTOR4& retVector, D3DVECTOR4& Vector1, D3DVECTOR4& Vector2)
{
	retVector.X = MIN(Vector1.X, Vector2.X);
	retVector.Y = MIN(Vector1.Y, Vector2.Y);
	retVector.Z = MIN(Vector1.Z, Vector2.Z);
	retVector.W = MIN(Vector1.W, Vector2.W);
}

//========================================================================

void V4Maximize(D3DVECTOR4& retVector, D3DVECTOR4& Vector1, D3DVECTOR4& Vector2)
{
	retVector.X = MIN(Vector1.X, Vector2.X);
	retVector.Y = MIN(Vector1.Y, Vector2.Y);
	retVector.Z = MAX(Vector1.Z, Vector2.Z);
	retVector.W = MAX(Vector1.W, Vector2.W);
}

//========================================================================

float V4Distance(D3DVECTOR4& Vector1, D3DVECTOR4& Vector2)
{
	return sqrtf((Vector2.X - Vector1.X) * (Vector2.X - Vector1.X) +
	    	     (Vector2.Y - Vector1.Y) * (Vector2.Y - Vector1.Y) + 
				 (Vector2.Z - Vector1.Z) * (Vector2.Z - Vector1.Z) + 
				 (Vector2.W - Vector1.W) * (Vector2.W - Vector1.W));
}

//========================================================================

void V4Copy(D3DVECTOR4& retVector, D3DVECTOR4& Vector)
{
	retVector.X = Vector.X;
	retVector.Y = Vector.Y;
	retVector.Z = Vector.Z;
	retVector.W = Vector.W;
}

//========================================================================

void V4Scale(D3DVECTOR4& retVector, D3DVECTOR4& Vector, float ScaleAmount)
{
	retVector.X = Vector.X * ScaleAmount;
	retVector.Y = Vector.Y * ScaleAmount;
	retVector.Z = Vector.Z * ScaleAmount;
	retVector.W = Vector.W * ScaleAmount;
}

//========================================================================

bool V4TwoVectorsAreNearlyEqual(D3DVECTOR4& Vector1, D3DVECTOR4& Vector2)
{
	if(FFabs(Vector1.X - Vector2.X) < EPSILON)
	{
		if(FFabs(Vector1.Y - Vector2.Y) < EPSILON)
		{
			if(FFabs(Vector1.Z - Vector2.Z) < EPSILON)
			{
				if(FFabs(Vector1.W - Vector2.W) < EPSILON)
				{
					return true;
				}		
			}
		}
	}
	return false;
}

//========================================================================

void V4ComputeBoundingBox(D3DVECTOR4 *Vertices, long NumVertices, D3DVECTOR4& retBox_Min, D3DVECTOR4& retBox_Max)
{
	D3DVECTOR4 Min;
	D3DVECTOR4 Max;

	Min.X = Min.Y = Min.Z = Min.W =  999999999999999999999.0f;
	Max.X = Max.Y = Max.Z = Max.W = -999999999999999999999.0f;
	for(long i = 0; i < NumVertices; i++)
	{
		if(Vertices[i].X > Max.X){Max.X = Vertices[i].X;};
		if(Vertices[i].Y > Max.Y){Max.Y = Vertices[i].Y;};
		if(Vertices[i].Z > Max.Z){Max.Z = Vertices[i].Z;};
		if(Vertices[i].W > Max.W){Max.W = Vertices[i].W;};
		if(Vertices[i].X < Min.X){Min.X = Vertices[i].X;};
		if(Vertices[i].Y < Min.Y){Min.Y = Vertices[i].Y;};
		if(Vertices[i].Z < Min.Z){Min.Z = Vertices[i].Z;};
		if(Vertices[i].W < Min.W){Min.W = Vertices[i].W;};
	}

	retBox_Min = Min;
	retBox_Max = Max;
}

//========================================================================

void V4ComputeBoundingSphere(D3DVECTOR4 *Vertices, long NumVertices, D3DVECTOR4& retSphereCenter, float retSphereRadius)
{
	D3DVECTOR4 Min;
	D3DVECTOR4 Max;
	float RadiusMax1;
	float RadiusMax2;
	float RadiusMax3;
	
	Min.X = Min.Y = Min.Z = Min.W =  999999999999999999999.0f;
	Max.X = Max.Y = Max.Z = Max.W = -999999999999999999999.0f;
	for(long i = 0; i < NumVertices; i++)
	{
		if(Vertices[i].X > Max.X){Max.X = Vertices[i].X;};
		if(Vertices[i].Y > Max.Y){Max.Y = Vertices[i].Y;};
		if(Vertices[i].Z > Max.Z){Max.Z = Vertices[i].Z;};
		if(Vertices[i].W > Max.W){Max.W = Vertices[i].W;};
		if(Vertices[i].X < Min.X){Min.X = Vertices[i].X;};
		if(Vertices[i].Y < Min.Y){Min.Y = Vertices[i].Y;};
		if(Vertices[i].Z < Min.Z){Min.Z = Vertices[i].Z;};
		if(Vertices[i].W < Min.W){Min.W = Vertices[i].W;};
	}

	RadiusMax1 = MAX(Max.X - Min.X, Max.Y - Min.Y);
	RadiusMax2 = MAX(Max.Z - Min.Z, Max.W - Min.W);
	RadiusMax3 = MAX(RadiusMax1, RadiusMax2);

	retSphereRadius = (RadiusMax2 / 2) + 20;
    V4Average(retSphereCenter, Max, Min);

}

//========================================================================

bool V4VectorContainedInBoundingBox(D3DVECTOR4& Vector, D3DVECTOR4& Box_Min, D3DVECTOR4& Box_Max)
{
	if((Vector.X >= Box_Min.X) | (Vector.Y >= Box_Min.Y) | (Vector.Z >= Box_Min.Z) | (Vector.W >= Box_Min.W))
	{
		if((Vector.X <= Box_Max.X) | (Vector.Y <= Box_Max.Y) | (Vector.Z <= Box_Max.Z) | (Vector.W <= Box_Max.W))	
		{
			return true;
		}
	}
	return false;
}

//========================================================================

bool V4IsCollision(D3DVECTOR4& Collider_Position, float Collider_Radius, D3DVECTOR4& Object_Position, float Object_Radius)
{
	float Distance = Object_Radius + (Collider_Radius / 2);
    
	if((sqrtf(((Collider_Position.X - Object_Position.X) * (Collider_Position.X - Object_Position.X)) +
		      ((Collider_Position.Y - Object_Position.Y) * (Collider_Position.Y - Object_Position.Y)) +
			  ((Collider_Position.Z - Object_Position.Z) * (Collider_Position.Z - Object_Position.Z)) + 
			  ((Collider_Position.W - Object_Position.W) * (Collider_Position.W - Object_Position.W)))) < Distance) 
	{
		return true;
	}else{
		return false;
	}
}

//========================================================================

bool V4IsCollisionEX(D3DVECTOR4& Collider_Position, float Collider_Radius, D3DVECTOR4& Object_Position, float Object_Radius)
{
	float Mag;
	D3DVECTOR4 Calculation;
		
	Calculation.X = Collider_Position.X - Object_Position.X;
	Calculation.Y = Collider_Position.Y - Object_Position.Y;
	Calculation.Z = Collider_Position.Z - Object_Position.Z;
	Calculation.W = Collider_Position.W - Object_Position.W;
	Mag = Collider_Radius * Collider_Radius + Object_Radius * Object_Radius;

	if(V4MagnitudeSquared(Calculation) < Mag)
	{
		return true;
	}else{
		return false;
	}
}

//========================================================================

void V4Interpolate_Linear(D3DVECTOR4 *retVector, float Time, D3DVECTOR4 *KeyFrame1, D3DVECTOR4 *KeyFrame2)
{
	retVector->X = KeyFrame1->X + Time * (KeyFrame2->X - KeyFrame1->X);
	retVector->Y = KeyFrame1->Y + Time * (KeyFrame2->Y - KeyFrame1->Y);
	retVector->Z = KeyFrame1->Z + Time * (KeyFrame2->Z - KeyFrame1->Z);
	retVector->W = KeyFrame1->W + Time * (KeyFrame2->W - KeyFrame1->W);
}

//========================================================================

void V4Interpolate_LinearEX(D3DVECTOR4 *retVertices, long NumVertices, float Time, D3DVECTOR4 *KeyFrame1, D3DVECTOR4 *KeyFrame2)
{
	for(long i = 0; i < NumVertices; i++)
	{
		retVertices->X = KeyFrame1->X + Time * (KeyFrame2->X - KeyFrame1->X);
	    retVertices->Y = KeyFrame1->Y + Time * (KeyFrame2->Y - KeyFrame1->Y);
	    retVertices->Z = KeyFrame1->Z + Time * (KeyFrame2->Z - KeyFrame1->Z);
		retVertices->W = KeyFrame1->W + Time * (KeyFrame2->W - KeyFrame1->W);
		retVertices++;
	}
}

//========================================================================

void V4Interpolate_HermitSpline(D3DVECTOR4 *retVector, float Time, D3DVECTOR4 *KeyFrame1, D3DVECTOR4 *KeyFrame2, D3DVECTOR4 *KeyFrame3, D3DVECTOR4 *KeyFrame4)
{
	D3DVECTOR4 Lerp1;
	D3DVECTOR4 Lerp2;
	float Alpha	 = 0.1f;
	float TimeX2 = Time * Time;
	float TimeX3 = TimeX2 * Time;

	Lerp1.X = ((1 - Alpha) / 2.0f) * ((KeyFrame2->X - KeyFrame1->X) + KeyFrame3->X - KeyFrame2->X);
	Lerp1.Y = ((1 - Alpha) / 2.0f) * ((KeyFrame2->Y - KeyFrame1->Y) + KeyFrame3->Y - KeyFrame2->Y);
	Lerp1.Z = ((1 - Alpha) / 2.0f) * ((KeyFrame2->Z - KeyFrame1->Z) + KeyFrame3->Z - KeyFrame2->Z);
	Lerp1.W = ((1 - Alpha) / 2.0f) * ((KeyFrame2->W - KeyFrame1->W) + KeyFrame3->W - KeyFrame2->W);

	Lerp2.X = ((1 - Alpha) / 2.0f) * ((KeyFrame3->X - KeyFrame2->X) + KeyFrame4->X - KeyFrame3->X);
	Lerp2.Y = ((1 - Alpha) / 2.0f) * ((KeyFrame3->Y - KeyFrame2->Y) + KeyFrame4->Y - KeyFrame3->Y);
	Lerp2.Z = ((1 - Alpha) / 2.0f) * ((KeyFrame3->Z - KeyFrame2->Z) + KeyFrame4->Z - KeyFrame3->Z);
	Lerp2.W = ((1 - Alpha) / 2.0f) * ((KeyFrame3->W - KeyFrame2->W) + KeyFrame4->W - KeyFrame3->W);
	
	retVector->X = (((2 * TimeX3) - (3 * TimeX2) + 1) * KeyFrame2->X) + ((TimeX3 - (2 * TimeX2) + Time) * Lerp1.X) + ((TimeX3 - TimeX2) * Lerp2.X) + (((-2 * TimeX3) + (3 * TimeX2)) * KeyFrame3->X);
	retVector->Y = (((2 * TimeX3) - (3 * TimeX2) + 1) * KeyFrame2->Y) + ((TimeX3 - (2 * TimeX2) + Time) * Lerp1.Y) + ((TimeX3 - TimeX2) * Lerp2.Y) + (((-2 * TimeX3) + (3 * TimeX2)) * KeyFrame3->Y);
	retVector->Z = (((2 * TimeX3) - (3 * TimeX2) + 1) * KeyFrame2->Z) + ((TimeX3 - (2 * TimeX2) + Time) * Lerp1.Z) + ((TimeX3 - TimeX2) * Lerp2.Z) + (((-2 * TimeX3) + (3 * TimeX2)) * KeyFrame3->Z);
	retVector->W = (((2 * TimeX3) - (3 * TimeX2) + 1) * KeyFrame2->W) + ((TimeX3 - (2 * TimeX2) + Time) * Lerp1.W) + ((TimeX3 - TimeX2) * Lerp2.W) + (((-2 * TimeX3) + (3 * TimeX2)) * KeyFrame3->W);
}

//========================================================================

void V4Interpolate_HermitSplineEX(D3DVECTOR4 *retVertices, long NumVertices, float Time, D3DVECTOR4 *KeyFrame1, D3DVECTOR4 *KeyFrame2, D3DVECTOR4 *KeyFrame3, D3DVECTOR4 *KeyFrame4)
{
	D3DVECTOR4 Lerp1;
	D3DVECTOR4 Lerp2;
	float Alpha	 = 0.1f;
	float TimeX2 = Time * Time;
	float TimeX3 = TimeX2 * Time;
		
	for(long i = 0; i < NumVertices; i++)
	{
		Lerp1.X = ((1 - Alpha) / 2.0f) * ((KeyFrame2->X - KeyFrame1->X) + KeyFrame3->X - KeyFrame2->X);
		Lerp1.Y = ((1 - Alpha) / 2.0f) * ((KeyFrame2->Y - KeyFrame1->Y) + KeyFrame3->Y - KeyFrame2->Y);
		Lerp1.Z = ((1 - Alpha) / 2.0f) * ((KeyFrame2->Z - KeyFrame1->Z) + KeyFrame3->Z - KeyFrame2->Z);
		Lerp1.W = ((1 - Alpha) / 2.0f) * ((KeyFrame2->W - KeyFrame1->W) + KeyFrame3->W - KeyFrame2->W);

		Lerp2.X = ((1 - Alpha) / 2.0f) * ((KeyFrame3->X - KeyFrame2->X) + KeyFrame4->X - KeyFrame3->X);
		Lerp2.Y = ((1 - Alpha) / 2.0f) * ((KeyFrame3->Y - KeyFrame2->Y) + KeyFrame4->Y - KeyFrame3->Y);
		Lerp2.Z = ((1 - Alpha) / 2.0f) * ((KeyFrame3->Z - KeyFrame2->Z) + KeyFrame4->Z - KeyFrame3->Z);
		Lerp2.W = ((1 - Alpha) / 2.0f) * ((KeyFrame3->W - KeyFrame2->W) + KeyFrame4->W - KeyFrame3->W);

		retVertices->X = (((2 * TimeX3) - (3 * TimeX2) + 1) * KeyFrame2->X) + ((TimeX3 - (2 * TimeX2) + Time) * Lerp1.X) + ((TimeX3 - TimeX2) * Lerp2.X) + (((-2 * TimeX3) + (3 * TimeX2)) * KeyFrame3->X);
		retVertices->Y = (((2 * TimeX3) - (3 * TimeX2) + 1) * KeyFrame2->Y) + ((TimeX3 - (2 * TimeX2) + Time) * Lerp1.Y) + ((TimeX3 - TimeX2) * Lerp2.Y) + (((-2 * TimeX3) + (3 * TimeX2)) * KeyFrame3->Y);
		retVertices->Z = (((2 * TimeX3) - (3 * TimeX2) + 1) * KeyFrame2->Z) + ((TimeX3 - (2 * TimeX2) + Time) * Lerp1.Z) + ((TimeX3 - TimeX2) * Lerp2.Z) + (((-2 * TimeX3) + (3 * TimeX2)) * KeyFrame3->Z);
		retVertices->W = (((2 * TimeX3) - (3 * TimeX2) + 1) * KeyFrame2->W) + ((TimeX3 - (2 * TimeX2) + Time) * Lerp1.W) + ((TimeX3 - TimeX2) * Lerp2.W) + (((-2 * TimeX3) + (3 * TimeX2)) * KeyFrame3->W);
		retVertices++;
	}
}


//šššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššš
//    |œœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœ|
//    |œœ                    Color Functions                     œœ|
//    |œœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœ|
//šššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššš


void CLRBlack(D3DCOLORVALUE& retColor)
{
	retColor.R = retColor.G = retColor.B = 0.0f;
	retColor.A = 1.0f;
}

//========================================================================

void CLRLightGray(D3DCOLORVALUE& retColor)
{
	retColor.R = retColor.G = retColor.B = 0.2f;
	retColor.A = 1.0f;
}

//========================================================================

void CLRMediumGray(D3DCOLORVALUE& retColor)
{
	retColor.R = retColor.G = retColor.B = 0.5f;
	retColor.A = 1.0f;
}

//========================================================================

void CLRDarkGray(D3DCOLORVALUE& retColor)
{
	retColor.R = retColor.G = retColor.B = 0.8f;
	retColor.A = 1.0f;
}

//========================================================================

void CLRWhite(D3DCOLORVALUE& retColor)
{
	retColor.R = retColor.G = retColor.B = 1.0f;
	retColor.A = 1.0f;
}

//========================================================================

void CLRRed(D3DCOLORVALUE& retColor)
{
	retColor.R = 1.0f;
	retColor.G = 0.0f;
	retColor.B = 0.0f;
	retColor.A = 1.0f;
}

//========================================================================

void CLRGreen(D3DCOLORVALUE& retColor)
{
	retColor.R = 0.0f;
	retColor.G = 1.0f;
	retColor.B = 0.0f;
	retColor.A = 1.0f;
}

//========================================================================

void CLRBlue(D3DCOLORVALUE& retColor)
{
	retColor.R = 0.0f;
	retColor.G = 0.0f;
	retColor.B = 1.0f;
	retColor.A = 1.0f;
}

//========================================================================

void CLRMagenta(D3DCOLORVALUE& retColor)
{
	retColor.R = 1.0f;
	retColor.G = 0.0f;
	retColor.B = 1.0f;
	retColor.A = 1.0f;
}

//========================================================================

void CLRCyan(D3DCOLORVALUE& retColor)
{
	retColor.R = 0.0f;
	retColor.G = 1.0f;
	retColor.B = 1.0f;
	retColor.A = 1.0f;
}

//========================================================================

void CLRYellow(D3DCOLORVALUE& retColor)
{
	retColor.R = 1.0f;
	retColor.G = 1.0f;
	retColor.B = 0.0f;
	retColor.A = 1.0f;
}

//========================================================================

void CLRCapColor(D3DCOLORVALUE& Color)
{
	if(Color.R > 1){Color.R = 1.0f;};
	if(Color.R < 0){Color.R = 0.0f;};
	if(Color.G > 1){Color.G = 1.0f;};
	if(Color.G < 0){Color.G = 0.0f;};
	if(Color.B > 1){Color.B = 1.0f;};
	if(Color.B < 0){Color.B = 0.0f;};
	if(Color.A > 1){Color.A = 1.0f;};
	if(Color.A < 0){Color.A = 0.0f;};
}

//========================================================================

void CLRNegate(D3DCOLORVALUE& retColor)
{
	retColor.R = 1.0f - retColor.R;
	retColor.G = 1.0f - retColor.G;
	retColor.B = 1.0f - retColor.B;
	retColor.A = retColor.A;
}

//========================================================================

void CLRAdd(D3DCOLORVALUE& retColor, D3DCOLORVALUE& Color1, D3DCOLORVALUE& Color2)
{
	retColor.R = Color1.R + Color2.R;
	retColor.G = Color1.G + Color2.G;
	retColor.B = Color1.B + Color2.B;
	retColor.A = Color1.A + Color2.A;
	CLRCapColor(retColor);
}

//========================================================================

void CLRAverage(D3DCOLORVALUE& retColor, D3DCOLORVALUE& Color1, D3DCOLORVALUE& Color2)
{
	D3DCOLORVALUE Sum;
	CLRAdd(Sum, Color1, Color2);

	retColor.R = Sum.R /= 2;
	retColor.G = Sum.G /= 2;
	retColor.B = Sum.B /= 2;
	retColor.A = Sum.A /= 2;
	CLRCapColor(retColor);
}

//========================================================================

void CLRSubtract(D3DCOLORVALUE& retColor, D3DCOLORVALUE& Color1, D3DCOLORVALUE& Color2)
{
	retColor.R = Color1.R - Color2.R;
	retColor.G = Color1.G - Color2.G;
	retColor.B = Color1.B - Color2.B;
	retColor.A = Color1.A - Color2.A;
	CLRCapColor(retColor);
}

//========================================================================

void CLRDivideSC(D3DCOLORVALUE& retColor, float Scalar, D3DCOLORVALUE& Color)
{
	retColor.R = Color.R / Scalar;
	retColor.G = Color.G / Scalar;
	retColor.B = Color.B / Scalar;
	retColor.A = Color.A / Scalar;
	CLRCapColor(retColor);
}

//========================================================================

void CLRDivideCS(D3DCOLORVALUE& retColor, D3DCOLORVALUE& Color, float Scalar)
{
	retColor.R = Color.R / Scalar;
	retColor.G = Color.G / Scalar;
	retColor.B = Color.B / Scalar;
	retColor.A = Color.A / Scalar;
	CLRCapColor(retColor);
}

//========================================================================

void CLRDivideCC(D3DCOLORVALUE& retColor, D3DCOLORVALUE& Color1, D3DCOLORVALUE& Color2)
{
	retColor.R = Color1.R / Color2.R;
	retColor.G = Color1.G / Color2.G;
	retColor.B = Color1.B / Color2.B;
	retColor.A = Color1.A / Color2.A;
	CLRCapColor(retColor);
}

//========================================================================

void CLRMultiplySC(D3DCOLORVALUE& retColor, float Scalar, D3DCOLORVALUE& Color)
{
	retColor.R = Color.R * Scalar;
	retColor.G = Color.G * Scalar;
	retColor.B = Color.B * Scalar;
	retColor.A = Color.A * Scalar;
	CLRCapColor(retColor);
}

//========================================================================

void CLRMultiplyCS(D3DCOLORVALUE& retColor, D3DCOLORVALUE& Color, float Scalar)
{
	retColor.R = Color.R * Scalar;
	retColor.G = Color.G * Scalar;
	retColor.B = Color.B * Scalar;
	retColor.A = Color.A * Scalar;
	CLRCapColor(retColor);
}

//========================================================================

float CLRMultiplyCC(D3DCOLORVALUE& Color1, D3DCOLORVALUE& Color2)
{
	return (Color1.R * Color2.R + Color1.G * Color2.G + Color1.B * Color2.B + Color1.A * Color2.A);
}

//========================================================================

void CLRScale(D3DCOLORVALUE& Color, float ScaleAmount)
{
	Color.R = Color.R * ScaleAmount;
	Color.G = Color.G * ScaleAmount;
	Color.B = Color.B * ScaleAmount;
	Color.A = Color.A * ScaleAmount;
}

//========================================================================

bool CLRTwoColorsAreNearlyEqual(D3DCOLORVALUE& Color1, D3DCOLORVALUE& Color2)
{
	if(FFabs(Color1.R - Color2.R) < EPSILON)
	{
		if(FFabs(Color1.G - Color2.G) < EPSILON)
		{
			if(FFabs(Color1.B - Color2.B) < EPSILON)
			{
				if(FFabs(Color1.A - Color2.A) < EPSILON)
				{
				return true;
				}
			}
		}
	}
	return false;
}

//========================================================================

void CLRInterpolate_Linear(D3DCOLORVALUE *retColor, float Time, D3DCOLORVALUE *Color1, D3DCOLORVALUE *Color2)
{
	retColor->R = Color1->R + Time * (Color2->R - Color1->R);
	retColor->G = Color1->G + Time * (Color2->G - Color1->G);
	retColor->B = Color1->B + Time * (Color2->B - Color1->B);
	retColor->A = Color1->A + Time * (Color2->A - Color1->A);
}

//========================================================================

void CLRInterpolate_HermitSpline(D3DCOLORVALUE *retColor, float Time, D3DCOLORVALUE *Color1, D3DCOLORVALUE *Color2, D3DCOLORVALUE *Color3, D3DCOLORVALUE *Color4)
{
	D3DCOLORVALUE Lerp1;
	D3DCOLORVALUE Lerp2;
	float Alpha	 = 0.1f;
	float TimeX2 = Time * Time;
	float TimeX3 = TimeX2 * Time;

	Lerp1.R = ((1 - Alpha) / 2.0f) * ((Color2->R - Color1->R) + Color3->R - Color2->R);
	Lerp1.G = ((1 - Alpha) / 2.0f) * ((Color2->G - Color1->G) + Color3->G - Color2->G);
	Lerp1.B = ((1 - Alpha) / 2.0f) * ((Color2->B - Color1->B) + Color3->B - Color2->B);
	Lerp1.A = ((1 - Alpha) / 2.0f) * ((Color2->A - Color1->A) + Color3->A - Color2->A);

	Lerp2.R = ((1 - Alpha) / 2.0f) * ((Color3->R - Color2->R) + Color4->R - Color3->R);
	Lerp2.G = ((1 - Alpha) / 2.0f) * ((Color3->G - Color2->G) + Color4->G - Color3->G);
	Lerp2.B = ((1 - Alpha) / 2.0f) * ((Color3->B - Color2->B) + Color4->B - Color3->B);
	Lerp2.A = ((1 - Alpha) / 2.0f) * ((Color3->A - Color2->A) + Color4->A - Color3->A);
	
	retColor->R = (((2 * TimeX3) - (3 * TimeX2) + 1) * Color2->R) + ((TimeX3 - (2 * TimeX2) + Time) * Lerp1.R) + ((TimeX3 - TimeX2) * Lerp2.R) + (((-2 * TimeX3) + (3 * TimeX2)) * Color3->R);
	retColor->G = (((2 * TimeX3) - (3 * TimeX2) + 1) * Color2->G) + ((TimeX3 - (2 * TimeX2) + Time) * Lerp1.G) + ((TimeX3 - TimeX2) * Lerp2.G) + (((-2 * TimeX3) + (3 * TimeX2)) * Color3->G);
	retColor->B = (((2 * TimeX3) - (3 * TimeX2) + 1) * Color2->B) + ((TimeX3 - (2 * TimeX2) + Time) * Lerp1.B) + ((TimeX3 - TimeX2) * Lerp2.B) + (((-2 * TimeX3) + (3 * TimeX2)) * Color3->B);
	retColor->A = (((2 * TimeX3) - (3 * TimeX2) + 1) * Color2->A) + ((TimeX3 - (2 * TimeX2) + Time) * Lerp1.A) + ((TimeX3 - TimeX2) * Lerp2.A) + (((-2 * TimeX3) + (3 * TimeX2)) * Color3->A);
}


//šššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššš
//    |œœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœ|
//    |œœ                   Matrix 3 Functions                   œœ|
//    |œœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœ|
//šššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššš


void M3Zero(D3DMATRIX3& retMatrix)
{
	retMatrix.m11 = 0; retMatrix.m12 = 0; retMatrix.m13 = 0;
	retMatrix.m21 = 0; retMatrix.m22 = 0; retMatrix.m23 = 0;
	retMatrix.m31 = 0; retMatrix.m32 = 0; retMatrix.m33 = 0;
}

//========================================================================

void M3Identity(D3DMATRIX3& retMatrix)
{
	retMatrix.m11 = 1; retMatrix.m12 = 0; retMatrix.m13 = 0;
	retMatrix.m21 = 0; retMatrix.m22 = 1; retMatrix.m23 = 0;
	retMatrix.m31 = 0; retMatrix.m32 = 0; retMatrix.m33 = 1;
}

//========================================================================

bool M3IsIdentity(D3DMATRIX3& Matrix)
{
	return Matrix.m11 == 1 && Matrix.m12 == 0 && Matrix.m13 == 0 &&
		   Matrix.m21 == 0 && Matrix.m22 == 1 && Matrix.m23 == 0 &&
		   Matrix.m31 == 0 && Matrix.m32 == 0 && Matrix.m33 == 1;
}

//========================================================================

void M3Copy(D3DMATRIX3& retMatrix, D3DMATRIX3& Matrix)
{
	retMatrix.m11 = Matrix.m11; retMatrix.m12 = Matrix.m12; retMatrix.m13 = Matrix.m13;
	retMatrix.m21 = Matrix.m21; retMatrix.m22 = Matrix.m22; retMatrix.m23 = Matrix.m23;
	retMatrix.m31 = Matrix.m31; retMatrix.m32 = Matrix.m32; retMatrix.m33 = Matrix.m33;
}

//========================================================================

float M3Determinate(D3DMATRIX3& Matrix)
{
	return Matrix.m11 * Matrix.m22 * Matrix.m33 -
           Matrix.m11 * Matrix.m32 * Matrix.m23 +
	       Matrix.m21 * Matrix.m32 * Matrix.m13 -
	       Matrix.m21 * Matrix.m12 * Matrix.m33 +
	       Matrix.m31 * Matrix.m12 * Matrix.m23 -
	       Matrix.m31 * Matrix.m22 * Matrix.m13;
}

//========================================================================

void M3Transpose(D3DMATRIX3& retMatrix, D3DMATRIX3& Matrix)
{	
	retMatrix.m11 = Matrix.m11;
	retMatrix.m12 = Matrix.m21;
	retMatrix.m13 = Matrix.m31;
	retMatrix.m21 = Matrix.m12;
	retMatrix.m22 = Matrix.m22;
	retMatrix.m23 = Matrix.m32;
	retMatrix.m31 = Matrix.m13;
	retMatrix.m32 = Matrix.m23;
	retMatrix.m33 = Matrix.m33;
}

//========================================================================

void M3Inverse(D3DMATRIX3& retMatrix, D3DMATRIX3& Matrix)
{
	float Det = M3Determinate(Matrix);
	if(Det == 0){Det = 1;};
	
	retMatrix.m11 =  (Matrix.m22 * Matrix.m33 - Matrix.m23 * Matrix.m32) / Det;
	retMatrix.m12 = -(Matrix.m12 * Matrix.m33 - Matrix.m13 * Matrix.m32) / Det;
	retMatrix.m13 =  (Matrix.m12 * Matrix.m23 - Matrix.m13 * Matrix.m22) / Det;
	retMatrix.m21 = -(Matrix.m21 * Matrix.m33 - Matrix.m23 * Matrix.m31) / Det;
	retMatrix.m22 =  (Matrix.m11 * Matrix.m33 - Matrix.m13 * Matrix.m31) / Det;
	retMatrix.m23 = -(Matrix.m11 * Matrix.m23 - Matrix.m13 * Matrix.m21) / Det;
	retMatrix.m31 =  (Matrix.m21 * Matrix.m32 - Matrix.m22 * Matrix.m31) / Det;
	retMatrix.m32 = -(Matrix.m11 * Matrix.m32 - Matrix.m12 * Matrix.m31) / Det;
	retMatrix.m33 =  (Matrix.m11 * Matrix.m22 - Matrix.m12 * Matrix.m21) / Det;
}

//========================================================================

void M3Add(D3DMATRIX3& retMatrix, D3DMATRIX3& Matrix1, D3DMATRIX3& Matrix2)
{
	retMatrix.m11 = Matrix1.m11 + Matrix2.m11;
	retMatrix.m12 = Matrix1.m12 + Matrix2.m12;
	retMatrix.m13 = Matrix1.m13 + Matrix2.m13;
	retMatrix.m21 = Matrix1.m21 + Matrix2.m21;
	retMatrix.m22 = Matrix1.m22 + Matrix2.m22;
	retMatrix.m23 = Matrix1.m23 + Matrix2.m23;
	retMatrix.m31 = Matrix1.m31 + Matrix2.m31;
	retMatrix.m32 = Matrix1.m32 + Matrix2.m32;
	retMatrix.m33 = Matrix1.m33 + Matrix2.m33;
}

//========================================================================

void M3Subtract(D3DMATRIX3& retMatrix, D3DMATRIX3& Matrix1, D3DMATRIX3& Matrix2)
{
	retMatrix.m11 = Matrix1.m11 - Matrix2.m11;
	retMatrix.m12 = Matrix1.m12 - Matrix2.m12;
	retMatrix.m13 = Matrix1.m13 - Matrix2.m13;
	retMatrix.m21 = Matrix1.m21 - Matrix2.m21;
	retMatrix.m22 = Matrix1.m22 - Matrix2.m22;
	retMatrix.m23 = Matrix1.m23 - Matrix2.m23;
	retMatrix.m31 = Matrix1.m31 - Matrix2.m31;
	retMatrix.m32 = Matrix1.m32 - Matrix2.m32;
	retMatrix.m33 = Matrix1.m33 - Matrix2.m33;
}

//========================================================================

void M3DivideMS(D3DMATRIX3& retMatrix, D3DMATRIX3& Matrix, float Scalar)
{
	retMatrix.m11 = Matrix.m11 / Scalar;
	retMatrix.m12 = Matrix.m12 / Scalar;
	retMatrix.m13 = Matrix.m13 / Scalar;
	retMatrix.m21 = Matrix.m21 / Scalar;
	retMatrix.m22 = Matrix.m22 / Scalar;
	retMatrix.m23 = Matrix.m23 / Scalar;
	retMatrix.m31 = Matrix.m31 / Scalar;
	retMatrix.m32 = Matrix.m32 / Scalar;
	retMatrix.m33 = Matrix.m33 / Scalar;
}

//========================================================================

void M3DivideMM(D3DMATRIX3& retMatrix, D3DMATRIX3& Matrix1, D3DMATRIX3& Matrix2)
{
	retMatrix.m11 = Matrix1.m11 / Matrix2.m11;
	retMatrix.m12 = Matrix1.m12 / Matrix2.m12;
	retMatrix.m13 = Matrix1.m13 / Matrix2.m13;
	retMatrix.m21 = Matrix1.m21 / Matrix2.m21;
	retMatrix.m22 = Matrix1.m22 / Matrix2.m22;
	retMatrix.m23 = Matrix1.m23 / Matrix2.m23;
	retMatrix.m31 = Matrix1.m31 / Matrix2.m31;
	retMatrix.m32 = Matrix1.m32 / Matrix2.m32;
	retMatrix.m33 = Matrix1.m33 / Matrix2.m33;
}

//========================================================================

void M3DivideSM(D3DMATRIX3& retMatrix, float Scalar, D3DMATRIX3& Matrix)
{
	retMatrix.m11 = Matrix.m11 / Scalar;
	retMatrix.m12 = Matrix.m12 / Scalar;
	retMatrix.m13 = Matrix.m13 / Scalar;
	retMatrix.m21 = Matrix.m21 / Scalar;
	retMatrix.m22 = Matrix.m22 / Scalar;
	retMatrix.m23 = Matrix.m23 / Scalar;
	retMatrix.m31 = Matrix.m31 / Scalar;
	retMatrix.m32 = Matrix.m32 / Scalar;
	retMatrix.m33 = Matrix.m33 / Scalar;
}

//========================================================================

void M3MultiplyMM(D3DMATRIX3& retMatrix, D3DMATRIX3& Matrix1, D3DMATRIX3& Matrix2)
{
	retMatrix.m11 = Matrix1.m11 * Matrix2.m11 + Matrix1.m12 * Matrix2.m21 + Matrix1.m13 * Matrix2.m31;
	retMatrix.m12 = Matrix1.m11 * Matrix2.m12 + Matrix1.m12 * Matrix2.m22 + Matrix1.m13 * Matrix2.m32;
	retMatrix.m13 = Matrix1.m11 * Matrix2.m13 + Matrix1.m12 * Matrix2.m23 + Matrix1.m13 * Matrix2.m33;
	retMatrix.m21 = Matrix1.m21 * Matrix2.m11 + Matrix1.m22 * Matrix2.m21 + Matrix1.m23 * Matrix2.m31;
	retMatrix.m22 = Matrix1.m21 * Matrix2.m12 + Matrix1.m22 * Matrix2.m22 + Matrix1.m23 * Matrix2.m32;
	retMatrix.m23 = Matrix1.m21 * Matrix2.m13 + Matrix1.m22 * Matrix2.m23 + Matrix1.m23 * Matrix2.m33;
	retMatrix.m31 = Matrix1.m31 * Matrix2.m11 + Matrix1.m32 * Matrix2.m21 + Matrix1.m33 * Matrix2.m31;
	retMatrix.m32 = Matrix1.m31 * Matrix2.m12 + Matrix1.m32 * Matrix2.m22 + Matrix1.m33 * Matrix2.m32;
	retMatrix.m33 = Matrix1.m31 * Matrix2.m13 + Matrix1.m32 * Matrix2.m23 + Matrix1.m33 * Matrix2.m33;
}

//========================================================================

void M3MultiplyMS(D3DMATRIX3& retMatrix, D3DMATRIX3& Matrix, float Scalar)
{
	retMatrix.m11 = Matrix.m11 * Scalar;
	retMatrix.m12 = Matrix.m12 * Scalar;
	retMatrix.m13 = Matrix.m13 * Scalar;
	retMatrix.m21 = Matrix.m21 * Scalar;
	retMatrix.m22 = Matrix.m22 * Scalar;
	retMatrix.m23 = Matrix.m23 * Scalar;
	retMatrix.m31 = Matrix.m31 * Scalar;
	retMatrix.m32 = Matrix.m32 * Scalar;
	retMatrix.m33 = Matrix.m33 * Scalar;
}

//========================================================================

void M3MultiplySM(D3DMATRIX3& retMatrix, float Scalar, D3DMATRIX3& Matrix)
{
	retMatrix.m11 = Matrix.m11 * Scalar;
	retMatrix.m12 = Matrix.m12 * Scalar;
	retMatrix.m13 = Matrix.m13 * Scalar;
	retMatrix.m21 = Matrix.m21 * Scalar;
	retMatrix.m22 = Matrix.m22 * Scalar;
	retMatrix.m23 = Matrix.m23 * Scalar;
	retMatrix.m31 = Matrix.m31 * Scalar;
	retMatrix.m32 = Matrix.m32 * Scalar;
	retMatrix.m33 = Matrix.m33 * Scalar;
}

//========================================================================

void M3MultiplyMV(D3DVECTOR& retVector, D3DMATRIX3& Matrix, D3DVECTOR& Vector)
{
	retVector.X = Matrix.m11 * Vector.X + Matrix.m12 * Vector.Y + Matrix.m13 * Vector.Z;
	retVector.Y = Matrix.m21 * Vector.X + Matrix.m22 * Vector.Y + Matrix.m23 * Vector.Z;
	retVector.Z = Matrix.m31 * Vector.X + Matrix.m32 * Vector.Y + Matrix.m33 * Vector.Z;
}

//========================================================================

void M3MultiplyVM(D3DVECTOR& retVector, D3DVECTOR& Vector, D3DMATRIX3& Matrix)
{
	retVector.X = Matrix.m11 * Vector.X + Matrix.m12 * Vector.Y + Matrix.m13 * Vector.Z;
	retVector.Y = Matrix.m21 * Vector.X + Matrix.m22 * Vector.Y + Matrix.m23 * Vector.Z;
	retVector.Z = Matrix.m31 * Vector.X + Matrix.m32 * Vector.Y + Matrix.m33 * Vector.Z;
}


//šššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššš
//    |œœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœ|
//    |œœ                   Matrix 4 Functions                   œœ|
//    |œœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœ|
//šššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššš



//========================================================================

void M4Add(D3DMATRIX& retMatrix, D3DMATRIX& Matrix1, D3DMATRIX& Matrix2)
{
	retMatrix.m11 = Matrix1.m11 + Matrix2.m11;
	retMatrix.m12 = Matrix1.m12 + Matrix2.m12;
	retMatrix.m13 = Matrix1.m13 + Matrix2.m13;
	retMatrix.m14 = Matrix1.m14 + Matrix2.m14;
	retMatrix.m21 = Matrix1.m21 + Matrix2.m21;
	retMatrix.m22 = Matrix1.m22 + Matrix2.m22;
	retMatrix.m23 = Matrix1.m23 + Matrix2.m23;
	retMatrix.m24 = Matrix1.m24 + Matrix2.m24;
	retMatrix.m31 = Matrix1.m31 + Matrix2.m31;
	retMatrix.m32 = Matrix1.m32 + Matrix2.m32;
	retMatrix.m33 = Matrix1.m33 + Matrix2.m33;
	retMatrix.m34 = Matrix1.m34 + Matrix2.m34;
	retMatrix.m41 = Matrix1.m41 + Matrix2.m41;
	retMatrix.m42 = Matrix1.m42 + Matrix2.m42;
	retMatrix.m43 = Matrix1.m43 + Matrix2.m43;
	retMatrix.m44 = Matrix1.m44 + Matrix2.m44;
}

//========================================================================

void M4Subtract(D3DMATRIX& retMatrix, D3DMATRIX& Matrix1, D3DMATRIX& Matrix2)
{
	retMatrix.m11 = Matrix1.m11 - Matrix2.m11;
	retMatrix.m12 = Matrix1.m12 - Matrix2.m12;
	retMatrix.m13 = Matrix1.m13 - Matrix2.m13;
	retMatrix.m14 = Matrix1.m14 - Matrix2.m14;
	retMatrix.m21 = Matrix1.m21 - Matrix2.m21;
	retMatrix.m22 = Matrix1.m22 - Matrix2.m22;
	retMatrix.m23 = Matrix1.m23 - Matrix2.m23;
	retMatrix.m24 = Matrix1.m24 - Matrix2.m24;
	retMatrix.m31 = Matrix1.m31 - Matrix2.m31;
	retMatrix.m32 = Matrix1.m32 - Matrix2.m32;
	retMatrix.m33 = Matrix1.m33 - Matrix2.m33;
	retMatrix.m34 = Matrix1.m34 - Matrix2.m34;
	retMatrix.m41 = Matrix1.m41 - Matrix2.m41;
	retMatrix.m42 = Matrix1.m42 - Matrix2.m42;
	retMatrix.m43 = Matrix1.m43 - Matrix2.m43;
	retMatrix.m44 = Matrix1.m44 - Matrix2.m44;
}

//========================================================================

void M4DivideMS(D3DMATRIX& retMatrix, D3DMATRIX Matrix, float Scalar)
{
	retMatrix.m11 = Matrix.m11 / Scalar;
	retMatrix.m12 = Matrix.m12 / Scalar;
	retMatrix.m13 = Matrix.m13 / Scalar;
	retMatrix.m14 = Matrix.m14 / Scalar;
	retMatrix.m21 = Matrix.m21 / Scalar;
	retMatrix.m22 = Matrix.m22 / Scalar;
	retMatrix.m23 = Matrix.m23 / Scalar;
	retMatrix.m24 = Matrix.m24 / Scalar;
	retMatrix.m31 = Matrix.m31 / Scalar;
	retMatrix.m32 = Matrix.m32 / Scalar;
	retMatrix.m33 = Matrix.m33 / Scalar;
	retMatrix.m34 = Matrix.m34 / Scalar;
	retMatrix.m41 = Matrix.m41 / Scalar;
	retMatrix.m42 = Matrix.m42 / Scalar;
	retMatrix.m43 = Matrix.m43 / Scalar;
	retMatrix.m44 = Matrix.m44 / Scalar;
}

//========================================================================

void M4DivideSM(D3DMATRIX& retMatrix, float Scalar, D3DMATRIX& Matrix)
{
	retMatrix.m11 = Matrix.m11 / Scalar;
	retMatrix.m12 = Matrix.m12 / Scalar;
	retMatrix.m13 = Matrix.m13 / Scalar;
	retMatrix.m14 = Matrix.m14 / Scalar;
	retMatrix.m21 = Matrix.m21 / Scalar;
	retMatrix.m22 = Matrix.m22 / Scalar;
	retMatrix.m23 = Matrix.m23 / Scalar;
	retMatrix.m24 = Matrix.m24 / Scalar;
	retMatrix.m31 = Matrix.m31 / Scalar;
	retMatrix.m32 = Matrix.m32 / Scalar;
	retMatrix.m33 = Matrix.m33 / Scalar;
	retMatrix.m34 = Matrix.m34 / Scalar;
	retMatrix.m41 = Matrix.m41 / Scalar;
	retMatrix.m42 = Matrix.m42 / Scalar;
	retMatrix.m43 = Matrix.m43 / Scalar;
	retMatrix.m44 = Matrix.m44 / Scalar;
}

//========================================================================

void M4DivideMM(D3DMATRIX& retMatrix, D3DMATRIX& Matrix1, D3DMATRIX& Matrix2)
{
	retMatrix.m11 = Matrix1.m11 / Matrix2.m11;
	retMatrix.m12 = Matrix1.m12 / Matrix2.m12;
	retMatrix.m13 = Matrix1.m13 / Matrix2.m13;
	retMatrix.m14 = Matrix1.m14 / Matrix2.m14;
	retMatrix.m21 = Matrix1.m21 / Matrix2.m21;
	retMatrix.m22 = Matrix1.m22 / Matrix2.m22;
	retMatrix.m23 = Matrix1.m23 / Matrix2.m23;
	retMatrix.m24 = Matrix1.m24 / Matrix2.m24;
	retMatrix.m31 = Matrix1.m31 / Matrix2.m31;
	retMatrix.m32 = Matrix1.m32 / Matrix2.m32;
	retMatrix.m33 = Matrix1.m33 / Matrix2.m33;
	retMatrix.m34 = Matrix1.m34 / Matrix2.m34;
	retMatrix.m41 = Matrix1.m41 / Matrix2.m41;
	retMatrix.m42 = Matrix1.m42 / Matrix2.m42;
	retMatrix.m43 = Matrix1.m43 / Matrix2.m43;
	retMatrix.m44 = Matrix1.m44 / Matrix2.m44;
}

//========================================================================

void M4MultiplyMM(D3DMATRIX& retMatrix, D3DMATRIX& Matrix1, D3DMATRIX& Matrix2)
{
	retMatrix.m11 = Matrix1.m11 * Matrix2.m11 + Matrix1.m12 * Matrix2.m21 + Matrix1.m13 * Matrix2.m31 + Matrix1.m14 * Matrix2.m41;
	retMatrix.m12 = Matrix1.m11 * Matrix2.m12 + Matrix1.m12 * Matrix2.m22 + Matrix1.m13 * Matrix2.m32 + Matrix1.m14 * Matrix2.m42;
	retMatrix.m13 = Matrix1.m11 * Matrix2.m13 + Matrix1.m12 * Matrix2.m23 + Matrix1.m13 * Matrix2.m33 + Matrix1.m14 * Matrix2.m43;
	retMatrix.m14 = Matrix1.m11 * Matrix2.m14 + Matrix1.m12 * Matrix2.m24 + Matrix1.m13 * Matrix2.m34 + Matrix1.m14 * Matrix2.m44;
	retMatrix.m21 = Matrix1.m21 * Matrix2.m11 + Matrix1.m22 * Matrix2.m21 + Matrix1.m23 * Matrix2.m31 + Matrix1.m24 * Matrix2.m41;
	retMatrix.m22 = Matrix1.m21 * Matrix2.m12 + Matrix1.m22 * Matrix2.m22 + Matrix1.m23 * Matrix2.m32 + Matrix1.m24 * Matrix2.m42;
	retMatrix.m23 = Matrix1.m21 * Matrix2.m13 + Matrix1.m22 * Matrix2.m23 + Matrix1.m23 * Matrix2.m33 + Matrix1.m24 * Matrix2.m43;
	retMatrix.m24 = Matrix1.m21 * Matrix2.m14 + Matrix1.m22 * Matrix2.m24 + Matrix1.m23 * Matrix2.m34 + Matrix1.m24 * Matrix2.m44;
	retMatrix.m31 = Matrix1.m31 * Matrix2.m11 + Matrix1.m32 * Matrix2.m21 + Matrix1.m33 * Matrix2.m31 + Matrix1.m34 * Matrix2.m41;
	retMatrix.m32 = Matrix1.m31 * Matrix2.m12 + Matrix1.m32 * Matrix2.m22 + Matrix1.m33 * Matrix2.m32 + Matrix1.m34 * Matrix2.m42;
	retMatrix.m33 = Matrix1.m31 * Matrix2.m13 + Matrix1.m32 * Matrix2.m23 + Matrix1.m33 * Matrix2.m33 + Matrix1.m34 * Matrix2.m43;
	retMatrix.m34 = Matrix1.m31 * Matrix2.m14 + Matrix1.m32 * Matrix2.m24 + Matrix1.m33 * Matrix2.m34 + Matrix1.m34 * Matrix2.m44;
	retMatrix.m41 = Matrix1.m41 * Matrix2.m11 + Matrix1.m42 * Matrix2.m21 + Matrix1.m43 * Matrix2.m31 + Matrix1.m44 * Matrix2.m41;
	retMatrix.m42 = Matrix1.m41 * Matrix2.m12 + Matrix1.m42 * Matrix2.m22 + Matrix1.m43 * Matrix2.m32 + Matrix1.m44 * Matrix2.m42;
	retMatrix.m43 = Matrix1.m41 * Matrix2.m13 + Matrix1.m42 * Matrix2.m23 + Matrix1.m43 * Matrix2.m33 + Matrix1.m44 * Matrix2.m43;
	retMatrix.m44 = Matrix1.m41 * Matrix2.m14 + Matrix1.m42 * Matrix2.m24 + Matrix1.m43 * Matrix2.m34 + Matrix1.m44 * Matrix2.m44;
}

//========================================================================

void M4MultiplyMS(D3DMATRIX& retMatrix, D3DMATRIX& Matrix, float Scalar)
{
	retMatrix.m11 = Matrix.m11 * Scalar;
	retMatrix.m12 = Matrix.m12 * Scalar;
	retMatrix.m13 = Matrix.m13 * Scalar;
	retMatrix.m14 = Matrix.m14 * Scalar;
	retMatrix.m21 = Matrix.m21 * Scalar;
	retMatrix.m22 = Matrix.m22 * Scalar;
	retMatrix.m23 = Matrix.m23 * Scalar;
	retMatrix.m24 = Matrix.m24 * Scalar;
	retMatrix.m31 = Matrix.m31 * Scalar;
	retMatrix.m32 = Matrix.m32 * Scalar;
	retMatrix.m33 = Matrix.m33 * Scalar;
	retMatrix.m34 = Matrix.m34 * Scalar;
	retMatrix.m41 = Matrix.m41 * Scalar;
	retMatrix.m42 = Matrix.m42 * Scalar;
	retMatrix.m43 = Matrix.m43 * Scalar;
	retMatrix.m44 = Matrix.m44 * Scalar;
}

//========================================================================

void M4MultiplySM(D3DMATRIX& retMatrix, float Scalar, D3DMATRIX& Matrix)
{
	retMatrix.m11 = Matrix.m11 * Scalar;
	retMatrix.m12 = Matrix.m12 * Scalar;
	retMatrix.m13 = Matrix.m13 * Scalar;
	retMatrix.m14 = Matrix.m14 * Scalar;
	retMatrix.m21 = Matrix.m21 * Scalar;
	retMatrix.m22 = Matrix.m22 * Scalar;
	retMatrix.m23 = Matrix.m23 * Scalar;
	retMatrix.m24 = Matrix.m24 * Scalar;
	retMatrix.m31 = Matrix.m31 * Scalar;
	retMatrix.m32 = Matrix.m32 * Scalar;
	retMatrix.m33 = Matrix.m33 * Scalar;
	retMatrix.m34 = Matrix.m34 * Scalar;
	retMatrix.m41 = Matrix.m41 * Scalar;
	retMatrix.m42 = Matrix.m42 * Scalar;
	retMatrix.m43 = Matrix.m43 * Scalar;
	retMatrix.m44 = Matrix.m44 * Scalar;
}

//========================================================================

void M4MultiplyMV(D3DVECTOR4& retVector, D3DMATRIX& Matrix, D3DVECTOR4& Vector)
{
	retVector.X = Matrix.m11 * Vector.X + Matrix.m12 * Vector.Y + Matrix.m13 * Vector.Z + Matrix.m14 * Vector.W;
	retVector.Y = Matrix.m21 * Vector.X + Matrix.m22 * Vector.Y + Matrix.m23 * Vector.Z + Matrix.m24 * Vector.W;
	retVector.Z = Matrix.m31 * Vector.X + Matrix.m32 * Vector.Y + Matrix.m33 * Vector.Z + Matrix.m34 * Vector.W;
	retVector.W = Matrix.m41 * Vector.X + Matrix.m42 * Vector.Y + Matrix.m43 * Vector.Z + Matrix.m44 * Vector.W;
}

//========================================================================

void M4MultiplyVM(D3DVECTOR4& retVector, D3DVECTOR4& Vector, D3DMATRIX& Matrix)
{
	retVector.X = Matrix.m11 * Vector.X + Matrix.m12 * Vector.Y + Matrix.m13 * Vector.Z + Matrix.m14 * Vector.W;
	retVector.Y = Matrix.m21 * Vector.X + Matrix.m22 * Vector.Y + Matrix.m23 * Vector.Z + Matrix.m24 * Vector.W;
	retVector.Z = Matrix.m31 * Vector.X + Matrix.m32 * Vector.Y + Matrix.m33 * Vector.Z + Matrix.m34 * Vector.W;
	retVector.W = Matrix.m41 * Vector.X + Matrix.m42 * Vector.Y + Matrix.m43 * Vector.Z + Matrix.m44 * Vector.W;
}

//========================================================================

void M4Zero(D3DMATRIX& retMatrix)
{
	retMatrix.m11 = 0; retMatrix.m12 = 0; retMatrix.m13 = 0; retMatrix.m14 = 0;
	retMatrix.m21 = 0; retMatrix.m22 = 0; retMatrix.m23 = 0; retMatrix.m24 = 0;
	retMatrix.m31 = 0; retMatrix.m32 = 0; retMatrix.m33 = 0; retMatrix.m34 = 0;
	retMatrix.m41 = 0; retMatrix.m42 = 0; retMatrix.m43 = 0; retMatrix.m44 = 0;
}

//========================================================================

void M4Identity(D3DMATRIX& retMatrix)
{
	retMatrix.m11 = 1; retMatrix.m12 = 0; retMatrix.m13 = 0; retMatrix.m14 = 0;
	retMatrix.m21 = 0; retMatrix.m22 = 1; retMatrix.m23 = 0; retMatrix.m24 = 0;
	retMatrix.m31 = 0; retMatrix.m32 = 0; retMatrix.m33 = 1; retMatrix.m34 = 0;
	retMatrix.m41 = 0; retMatrix.m42 = 0; retMatrix.m43 = 0; retMatrix.m44 = 1;
}

//========================================================================

bool M4IsIdentity(D3DMATRIX& retMatrix)
{
	return retMatrix.m11 == 1 && retMatrix.m12 == 0 && retMatrix.m13 == 0 && retMatrix.m14 == 0 &&
		   retMatrix.m21 == 0 && retMatrix.m22 == 1 && retMatrix.m23 == 0 && retMatrix.m24 == 0 &&
		   retMatrix.m31 == 0 && retMatrix.m32 == 0 && retMatrix.m33 == 1 && retMatrix.m34 == 0 &&
		   retMatrix.m41 == 0 && retMatrix.m42 == 0 && retMatrix.m43 == 0 && retMatrix.m44 == 1;
}

//========================================================================

void M4Copy(D3DMATRIX& retMatrix, D3DMATRIX& Matrix)
{
	retMatrix.m11 = Matrix.m11; retMatrix.m12 = Matrix.m12; retMatrix.m13 = Matrix.m13; retMatrix.m14 = Matrix.m14;
	retMatrix.m21 = Matrix.m21; retMatrix.m22 = Matrix.m22; retMatrix.m23 = Matrix.m23; retMatrix.m24 = Matrix.m24;
	retMatrix.m31 = Matrix.m31; retMatrix.m32 = Matrix.m32; retMatrix.m33 = Matrix.m33; retMatrix.m34 = Matrix.m34;
	retMatrix.m41 = Matrix.m41; retMatrix.m42 = Matrix.m42; retMatrix.m43 = Matrix.m43; retMatrix.m44 = Matrix.m44;
}

//========================================================================

void M4Transpose(D3DMATRIX& retMatrix, D3DMATRIX& Matrix)
{
	retMatrix.m11 = Matrix.m11;
	retMatrix.m12 = Matrix.m21;
	retMatrix.m13 = Matrix.m31;
	retMatrix.m14 = Matrix.m41;

	retMatrix.m21 = Matrix.m12;
	retMatrix.m22 = Matrix.m22;
	retMatrix.m23 = Matrix.m32;
	retMatrix.m24 = Matrix.m42;

	retMatrix.m31 = Matrix.m13;
	retMatrix.m32 = Matrix.m23;
	retMatrix.m33 = Matrix.m33;
	retMatrix.m34 = Matrix.m43;
	
	retMatrix.m41 = Matrix.m14;
	retMatrix.m42 = Matrix.m24;
	retMatrix.m43 = Matrix.m34;
	retMatrix.m44 = Matrix.m44;
}

//========================================================================

void M4Inverse(D3DMATRIX& retMatrix, D3DMATRIX& Matrix)
{
	D3DVECTOR Position;

	M4GetLocation(Position, Matrix);
	retMatrix.m11 = Matrix.m11;
	retMatrix.m12 = Matrix.m21;
	retMatrix.m13 = Matrix.m31;
	retMatrix.m14 = 0;

	retMatrix.m21 = Matrix.m12;
	retMatrix.m22 = Matrix.m22;
	retMatrix.m23 = Matrix.m32;
	retMatrix.m24 = 0;

	retMatrix.m31 = Matrix.m13;
	retMatrix.m32 = Matrix.m23;
	retMatrix.m33 = Matrix.m33;
	retMatrix.m34 = 0;
	
	retMatrix.m41 = -(Position.X * Matrix.m11 + Position.Y * Matrix.m12 + Position.Z * Matrix.m13);
	retMatrix.m42 = -(Position.X * Matrix.m21 + Position.Y * Matrix.m22 + Position.Z * Matrix.m23);
	retMatrix.m43 = -(Position.X * Matrix.m31 + Position.Y * Matrix.m32 + Position.Z * Matrix.m33);
	retMatrix.m44 = 1;
}

//========================================================================

void M4Scale(D3DMATRIX& retMatrix, D3DVECTOR& Amount)
{
	M4Identity(retMatrix);
	retMatrix.m11 = retMatrix.m11 * Amount.X;
	retMatrix.m22 = retMatrix.m22 * Amount.Y;
	retMatrix.m33 = retMatrix.m33 * Amount.Z;
}

//========================================================================

void M4Translate(D3DMATRIX& retMatrix, D3DVECTOR& Position)
{
	retMatrix.m41 += Position.X;
	retMatrix.m42 += Position.Y;
	retMatrix.m43 += Position.Z;
}

//========================================================================

void M4Position(D3DMATRIX& retMatrix, D3DVECTOR& Position)
{
	M4Identity(retMatrix);
	retMatrix.m41 = Position.X;
	retMatrix.m42 = Position.Y;
	retMatrix.m43 = Position.Z;
}

//========================================================================

void M4GetLocation(D3DVECTOR& retVector, D3DMATRIX& Matrix)
{
	retVector.X = Matrix.m41;
	retVector.Y = Matrix.m42;
	retVector.Z = Matrix.m43;
}
//========================================================================

void M4RotateX(D3DMATRIX& retMatrix, float Angle)
{
	float Cos = cosf(Angle * PI / 180);
	float Sin = sinf(Angle * PI / 180);

	M4Identity(retMatrix);
	retMatrix.m22 =  Cos;
	retMatrix.m23 =  Sin;
	retMatrix.m32 = -Sin;
	retMatrix.m33 =  Cos;
}

//========================================================================

void M4RotateY(D3DMATRIX& retMatrix, float Angle)
{
	float Cos = cosf(Angle * PI / 180);
	float Sin = sinf(Angle * PI / 180);

	M4Identity(retMatrix);
	retMatrix.m11 =  Cos;
	retMatrix.m13 = -Sin;
	retMatrix.m31 =  Sin;
	retMatrix.m33 =  Cos;
}

//========================================================================

void M4RotateZ(D3DMATRIX& retMatrix, float Angle)
{
	float Cos = cosf(Angle * PI / 180);
	float Sin = sinf(Angle * PI / 180);

	M4Identity(retMatrix);
	retMatrix.m11 =  Cos;
	retMatrix.m12 =  Sin;
	retMatrix.m21 = -Sin;
	retMatrix.m22 =  Cos;
}

//========================================================================

void M4RotateEX(D3DMATRIX& retMatrix, D3DMATRIX& Matrix, float AngleX, float AngleY, float AngleZ)
{
	float XOld;
	float YOld;
	float ZOld;
	float XNew;
	float YNew;
	float ZNew;

    float SinAngleX;
	float CosAngleX;
	float SinAngleY;
	float CosAngleY;
	float SinAngleZ;
	float CosAngleZ;
        
	SinAngleX = sinf(AngleY);
    CosAngleX = cosf(AngleY);
    SinAngleY = sinf(AngleX);
    CosAngleY = cosf(AngleX);
    SinAngleZ = sinf(AngleZ);
    CosAngleZ = cosf(AngleZ);
    
	for(long i = 0; i < 3; i++)
    {
        if(i == 0){
			XOld = Matrix.m11;
			YOld = Matrix.m12;
			ZOld = Matrix.m13;
		}else if(i == 1){
			XOld = Matrix.m21;
			YOld = Matrix.m22;
			ZOld = Matrix.m23;
		}else if(i == 2){
			XOld = Matrix.m31;
			YOld = Matrix.m32;
			ZOld = Matrix.m33;
		}
		        
        XNew = XOld;
        YNew = (YOld * CosAngleX) - (ZOld * SinAngleX);
        ZNew = (YOld * SinAngleX) + (ZOld * CosAngleX);
        XOld = XNew;
        YOld = YNew;
        ZOld = ZNew;             
        XNew = ((XOld * CosAngleY) + (ZOld * SinAngleY));
        YNew = YOld;
        ZNew = ((-1 * (XOld * SinAngleY)) + (ZOld * CosAngleY));
        XOld = XNew;
        YOld = YNew;
        ZOld = ZNew;       
        XNew = ((XOld * CosAngleZ) - (YOld * SinAngleZ));
        YNew = ((YOld * CosAngleZ) + (XOld * SinAngleZ));
        ZNew = ZOld;
		
		if(i == 0){
			retMatrix.m11 = XNew;
			retMatrix.m12 = YNew;
			retMatrix.m13 = ZNew;
		}else if(i == 1){
			retMatrix.m21 = XNew;
			retMatrix.m22 = YNew;
			retMatrix.m23 = ZNew;
		}else if(i == 2){
			retMatrix.m31 = XNew;
			retMatrix.m32 = YNew;
			retMatrix.m33 = ZNew;
		}
    }
}

//========================================================================

void M4AxisAngle(D3DMATRIX& retMatrix, D3DVECTOR& Axis, float Angle)
{
	float Cos;
	float Sin;
	float X;
	float Y;
	float Z;

	V3Normalize(Axis);
	Cos = cosf(Angle);
	Sin = sinf(Angle);
	X = Axis.X;
	Y = Axis.Y;
	Z = Axis.Z;

	retMatrix.m11 = X * X * (1 - Cos) + Cos;
	retMatrix.m21 = X * Y * (1 - Cos) - (Z * Sin);
	retMatrix.m31 = X * Z * (1 - Cos) + (Y * Sin);
	retMatrix.m41 = 0.0f;

	retMatrix.m12 = Y * X * (1 - Cos) + (Z * Sin);
	retMatrix.m22 = Y * Y * (1 - Cos) + Cos;
	retMatrix.m32 = Y * Z * (1 - Cos) - (X * Sin);
	retMatrix.m42 = 0.0f;

	retMatrix.m13 = Z * X * (1 - Cos) - (Y * Sin);
	retMatrix.m23 = Z * Y * (1 - Cos) + (X * Sin);
	retMatrix.m33 = Z * Z * (1 - Cos) + Cos;
	retMatrix.m43 = 0.0f;

	retMatrix.m14 = 0.0f;
	retMatrix.m24 = 0.0f;
	retMatrix.m34 = 0.0f;
	retMatrix.m44 = 1.0f;
}

//========================================================================

void M4ObjectLookAt(D3DMATRIX& retMatrix, D3DVECTOR& Location, D3DVECTOR& LookAt, D3DVECTOR& Up)
{
	float Mag;
	float Dot;
	D3DVECTOR vRight;
	D3DVECTOR vView;
	D3DVECTOR vUp;
    
	V3Subtract(vView, LookAt, Location);
	Mag = V3Magnitude(vView);
    
	vView.X /= Mag;
	vView.Y /= Mag;
	vView.Z /= Mag;
	
	Dot = V3Multiply(Up, vView);
    vUp.X = Up.X - Dot * vView.X;
	vUp.Y = Up.Y - Dot * vView.Y;
	vUp.Z = Up.Z - Dot * vView.Z;
	V3Normalize(vUp);

    vRight = vUp ^ vView;
    retMatrix.m11 = vRight.X;     
    retMatrix.m12 = vRight.Y;        
    retMatrix.m13 = vRight.Z;        
	retMatrix.m14 = 0;
	
	retMatrix.m21 = vUp.X;
	retMatrix.m22 = vUp.Y;
	retMatrix.m23 = vUp.Z;
	retMatrix.m24 = 0;
	
	retMatrix.m31 = vView.X;
	retMatrix.m32 = vView.Y;
	retMatrix.m33 = vView.Z;
	retMatrix.m34 = 0;

    retMatrix.m41 = Location.X;
    retMatrix.m42 = Location.Y;
    retMatrix.m43 = Location.Z;
	retMatrix.m44 = 1;
}

//========================================================================

void M4CameraLookAt(D3DMATRIX& retMatrix, D3DVECTOR& Location, D3DVECTOR& LookAt, D3DVECTOR& Up)
{
	float Mag;
	float Dot;
	D3DVECTOR vRight;
	D3DVECTOR vView;
	D3DVECTOR vUp;
    
	V3Subtract(vView, LookAt, Location);
	Mag = V3Magnitude(vView);

    vView.X /= Mag;
	vView.Y /= Mag;
	vView.Z /= Mag;
 
    Dot = V3Multiply(Up, vView);
    vUp.X = Up.X - Dot * vView.X;
	vUp.Y = Up.Y - Dot * vView.Y;
	vUp.Z = Up.Z - Dot * vView.Z;
	V3Normalize(vUp);

	vRight = vUp ^ vView;
    retMatrix.m11 = vRight.X;     
    retMatrix.m12 = vRight.Y;        
    retMatrix.m13 = vRight.Z;        
	retMatrix.m14 = 0;
	
	retMatrix.m21 = vUp.X;
	retMatrix.m22 = vUp.Y;
	retMatrix.m23 = vUp.Z;
	retMatrix.m24 = 0;
	
	retMatrix.m31 = vView.X;
	retMatrix.m32 = vView.Y;
	retMatrix.m33 = vView.Z;
	retMatrix.m34 = 0;

    retMatrix.m41 = - V3Multiply(Location, vRight);
    retMatrix.m42 = - V3Multiply(Location, vUp);
    retMatrix.m43 = - V3Multiply(Location, vView);
	retMatrix.m44 = 1;
}

//========================================================================

void M4OpMatrix(D3DMATRIX& retMatrix, D3DVECTOR& Position, D3DVECTOR& Rotation, D3DVECTOR& ScaleAmount)
{
	float CosX;
	float CosY;
	float CosZ;
	float SinX;
	float SinY;
	float SinZ;
	float PX;
	float PY;
	float PZ;
	float RX;
	float RY;
	float RZ;
	float SX;
	float SY;
	float SZ;
	
	PX = Position.X;
	PY = Position.Y;
	PZ = Position.Z;
	SX = ScaleAmount.X;
	SY = ScaleAmount.Y;
	SZ = ScaleAmount.Z;
	RX = Rotation.X * Radiant;
	RY = Rotation.Y * Radiant;
	RZ = Rotation.Z * Radiant;
	
	CosX = cosf(RX);
	CosY = cosf(RY);
	CosZ = cosf(RZ);
	SinX = sinf(RX);
	SinY = sinf(RY);
	SinZ = sinf(RZ);
	
	retMatrix.m11 = (SX * CosY * CosZ);
	retMatrix.m12 = (SX * CosY * SinZ);
	retMatrix.m13 = -(SX * SinY);
	retMatrix.m14 = 1.0f;
  
	retMatrix.m21 = -(SY * CosX * SinZ) + (SY * SinX * SinY * CosZ);
	retMatrix.m22 = (SY * CosX * CosZ) + (SY * SinX * SinY * SinZ);
	retMatrix.m23 = (SY * SinX * CosY);
	retMatrix.m24 = 1.0f;
        
	retMatrix.m31 = (SZ * SinX * SinZ) + (SZ * CosX * SinY * CosZ);
	retMatrix.m32 = -(SZ * SinX * CosX) + (SZ * CosX * SinY * SinZ);
	retMatrix.m33 = (SZ * CosX * CosY);
	retMatrix.m34 = 1.0f;
  
	retMatrix.m41 = PX;
	retMatrix.m42 = PY;
	retMatrix.m43 = PZ;
	retMatrix.m44 = 1.0f;
}


//šššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššš
//    |œœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœ|
//    |œœ                  Quaternion Functions                  œœ|
//    |œœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœœ|
//šššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššššš



//========================================================================

void QTAdd(D3DQUATERNION& retQuat, D3DQUATERNION& Quat1, D3DQUATERNION& Quat2)
{
	retQuat.X = Quat1.X + Quat2.X;
	retQuat.Y = Quat1.Y + Quat2.Y;
	retQuat.Z = Quat1.Z + Quat2.Z;
	retQuat.W = Quat1.W + Quat2.W;
}

//========================================================================

void QTAverage(D3DQUATERNION& retQuat, D3DQUATERNION& Quat1, D3DQUATERNION& Quat2)
{
	D3DQUATERNION Sum;
	QTAdd(Sum, Quat1, Quat2);

	retQuat.X = Sum.X /= 2;
	retQuat.Y = Sum.Y /= 2;
	retQuat.Z = Sum.Z /= 2;
	retQuat.W = Sum.W /= 2;
}

//========================================================================

void QTSubtract(D3DQUATERNION& retQuat, D3DQUATERNION& Quat1, D3DQUATERNION& Quat2)
{
	retQuat.X = Quat1.X - Quat2.X;
	retQuat.Y = Quat1.Y - Quat2.Y;
	retQuat.Z = Quat1.Z - Quat2.Z;
	retQuat.W = Quat1.W - Quat2.W;
}

//========================================================================

void QTDivideSQ(D3DQUATERNION& retQuat, float Scalar, D3DQUATERNION& Quat)
{
	retQuat.X = Quat.X / Scalar;
	retQuat.Y = Quat.Y / Scalar;
	retQuat.Z = Quat.Z / Scalar;
	retQuat.W = Quat.W / Scalar;
}

//========================================================================

void QTDivideQS(D3DQUATERNION& retQuat, D3DQUATERNION& Quat, float Scalar)
{
	retQuat.X = Quat.X / Scalar;
	retQuat.Y = Quat.Y / Scalar;
	retQuat.Z = Quat.Z / Scalar;
	retQuat.W = Quat.W / Scalar;
}

//========================================================================

void QTDivideQQ(D3DQUATERNION& retQuat, D3DQUATERNION& Quat1, D3DQUATERNION& Quat2)
{
	retQuat.X = Quat1.X / Quat2.X;
	retQuat.Y = Quat1.Y / Quat2.Y;
	retQuat.Z = Quat1.Z / Quat2.Z;
	retQuat.W = Quat1.W / Quat2.W;
}

//========================================================================

void QTMultiplySQ(D3DQUATERNION& retQuat, float Scalar, D3DQUATERNION& Quat)
{
	retQuat.X = Quat.X * Scalar;
	retQuat.Y = Quat.Y * Scalar;
	retQuat.Z = Quat.Z * Scalar;
	retQuat.W = Quat.W * Scalar;
}

//========================================================================

void QTMultiplyQS(D3DQUATERNION& retQuat, D3DQUATERNION& Quat, float Scalar)
{
	retQuat.X = Quat.X * Scalar;
	retQuat.Y = Quat.Y * Scalar;
	retQuat.Z = Quat.Z * Scalar;
	retQuat.W = Quat.W * Scalar;
}

//========================================================================

float QTMultiplyQQ(D3DQUATERNION& Quat1, D3DQUATERNION& Quat2)
{
	return (Quat1.X * Quat2.X + Quat1.Y * Quat2.Y + Quat1.Z * Quat2.Z + Quat1.W * Quat2.W);
}

//========================================================================

void  QTMultiplyQV(D3DQUATERNION& retQuat, D3DQUATERNION& Quat, D3DVECTOR& Vector)
{
	retQuat.X =   Quat.W * Vector.X + Quat.Y * Vector.Z - Quat.Z * Vector.Y;
	retQuat.Y =   Quat.W * Vector.Y + Quat.Z * Vector.X - Quat.X * Vector.Z;
    retQuat.Z =   Quat.W * Vector.Z + Quat.X * Vector.Y - Quat.Y * Vector.X;
	retQuat.W = -(Quat.X * Vector.X + Quat.Y * Vector.Y + Quat.Z * Vector.Z);
}

//========================================================================

void  QTMultiplyVQ(D3DQUATERNION& retQuat, D3DVECTOR& Vector, D3DQUATERNION& Quat)
{
	retQuat.X =   Quat.W * Vector.X + Quat.Y * Vector.Z - Quat.Z * Vector.Y;
	retQuat.Y =   Quat.W * Vector.Y + Quat.Z * Vector.X - Quat.X * Vector.Z;
    retQuat.Z =   Quat.W * Vector.Z + Quat.X * Vector.Y - Quat.Y * Vector.X;
	retQuat.W = -(Quat.X * Vector.X + Quat.Y * Vector.Y + Quat.Z * Vector.Z);
}

//========================================================================

float QTMagnitude(D3DQUATERNION& Quat)
{
	return sqrtf(Quat.X * Quat.X + 
		         Quat.Y * Quat.Y + 
				 Quat.Z * Quat.Z + 
				 Quat.W * Quat.W);
}

//========================================================================

float QTMagnitudeSquared(D3DQUATERNION& Quat)
{
	return (Quat.X * Quat.X) + 
		   (Quat.Y * Quat.Y) + 
		   (Quat.Z * Quat.Z) + 
		   (Quat.W * Quat.W);
}

//========================================================================

void QTGetVector(D3DVECTOR& retVector, D3DQUATERNION& Quat)
{
	retVector.X = Quat.X;
	retVector.Y = Quat.Y;
	retVector.Z = Quat.Z;
}

//========================================================================

float QTGetScalar(D3DQUATERNION& Quat)
{
	return Quat.W;
}

//========================================================================

void QTIdentity(D3DQUATERNION& retQuat)
{
	retQuat.X = retQuat.Y = retQuat.Z = 0;
	retQuat.W = 1;
}

//========================================================================

bool QTIsIdentity(D3DQUATERNION& Quat)
{
	return Quat.X == 0.0f && Quat.Y == 0.0f && Quat.Z == 0.0f && Quat.W == 1.0f;
}

//========================================================================

void QTCopy(D3DQUATERNION& retQuat, D3DQUATERNION& Quat)
{
	retQuat = Quat;
}

//========================================================================

void QTNegate(D3DQUATERNION& retQuat)
{
	retQuat.X = -retQuat.X;
	retQuat.Y = -retQuat.Y;
	retQuat.Z = -retQuat.Z;
	retQuat.W = -retQuat.W;
}

//========================================================================

void QTZero(D3DQUATERNION& retQuat)
{
	retQuat.X = retQuat.Y = retQuat.Z = retQuat.W = 0;
}

//========================================================================

float QTQuaternionGetAngle(D3DQUATERNION& Quat)
{
    return (2 * acosf(Quat.W));
}

//========================================================================

void QTQuaternionGetAxis(D3DVECTOR& retVector, D3DQUATERNION& Quat)
{
	D3DVECTOR Vector;
	float     Mag;

	Vector.X = Quat.X;
	Vector.Y = Quat.Y;
	Vector.Z = Quat.Z;
    Mag = V3Magnitude(Vector);
    
	if(Mag <= EPSILON)
	{
		retVector = Vector;
		return; 
	}else{
		retVector.X = Vector.X / Mag;
		retVector.Y = Vector.Y / Mag;
		retVector.Z = Vector.Z / Mag;
		return; 
	}
}

//========================================================================

void QTQuaternionRotate(D3DQUATERNION& retQuat, D3DQUATERNION& Quat1, D3DQUATERNION& Quat2)
{
	retQuat.X = Quat1.X * Quat2.X * (-Quat1.X);
	retQuat.Y = Quat1.Y * Quat2.Y * (-Quat1.Y);
	retQuat.Z = Quat1.Z * Quat2.Z * (-Quat1.Z);
	retQuat.W = Quat1.W * Quat2.W * ( Quat1.W);
}

//========================================================================

void QTQuaternionVectorRotate(D3DVECTOR& retVector, D3DQUATERNION& Quat, D3DVECTOR& Vector)
{
    D3DQUATERNION qQuaternion;
	qQuaternion.X = Quat.X * Vector.X * (-Quat.X);
	qQuaternion.Y = Quat.Y * Vector.Y * (-Quat.Y);
	qQuaternion.Z = Quat.Z * Vector.Z * (-Quat.Z);

	retVector.X = qQuaternion.X;
	retVector.Y = qQuaternion.Y;
	retVector.Z = qQuaternion.Z;
}

//========================================================================

void QTCreateQuaternionFromEularAngles(D3DQUATERNION& retQuat, float X, float Y, float Z)
{
	double        Roll;
	double        Pitch;
	double		  Yaw;
	double        CRoll;
	double        CPitch;
	double        CYaw;
	double        SRoll;
	double        SPitch;
	double        SYaw;
	double        CYawCPitch;
	double        SYawCPitch;
	double        CYawSPitch;
	double        SYawSPitch;
	
	Roll  = DegreesToRadians(X);
	Pitch = DegreesToRadians(Y);
	Yaw   = DegreesToRadians(Z);

	CYaw       = cos(0.5f * Yaw);
	CPitch     = cos(0.5f * Pitch);
	CRoll      = cos(0.5f * Roll);
	SYaw       = sin(0.5f * Yaw);
	SPitch     = sin(0.5f * Pitch);
	SRoll      = sin(0.5f * Roll);
	CYawCPitch = CYaw * CPitch;
	SYawCPitch = SYaw * CPitch;
	CYawSPitch = CYaw * SPitch;
	SYawSPitch = SYaw * SPitch;

	retQuat.X = (float)(CYawCPitch * SRoll - SYawSPitch * CRoll);
	retQuat.Y = (float)(CYawSPitch * CRoll + SYawSPitch * SRoll);
	retQuat.Z = (float)(SYawCPitch * CRoll - CYawSPitch * SRoll);
	retQuat.W = (float)(CYawCPitch * CRoll + SYawSPitch * SRoll);
}

//========================================================================

void QTCreateEularAnglesFromQuaternion(D3DVECTOR& retVector, D3DQUATERNION& Quat)
{
	double     m11;
	double     m12;
	double     m13;
	double     m21;
	double     m31;
	double     m32;
	double     m33;
	double     QuatX;
	double     QuatY;
	double     QuatZ;
	double     QuatW;
	double     Value;
	
	QuatX = Quat.X * Quat.X;
	QuatY = Quat.Y * Quat.Y;
	QuatZ = Quat.Z * Quat.Z;
	QuatW = Quat.W * Quat.W;

	m11 = QuatW + QuatX - QuatY - QuatZ; 
	m12 = 2 * (Quat.X * Quat.Y + Quat.W * Quat.Z);
	m13 = 2 * (Quat.X * Quat.Z + Quat.W * Quat.Y);
    m21 = 2 * (Quat.X * Quat.Y + Quat.W * Quat.Z);
	m31 = 2 * (Quat.X * Quat.Z + Quat.W * Quat.Y);
	m32 = 2 * (Quat.Y * Quat.Z + Quat.W * Quat.X);
    m33 = QuatW - QuatX - QuatY + QuatZ;

    Value = FFabs(m31);
	if(Value > 0.999999)
	{
		retVector.X = RadiansToDegrees(0.0f);
		retVector.Y = RadiansToDegrees((float) (-(PI / 2) * m31 / Value));
		retVector.Z = RadiansToDegrees((float) atan2(-m12, -m31 * m13));
		return;
	}

	retVector.X = RadiansToDegrees((float) atan2(m32, m33));
	retVector.Y = RadiansToDegrees((float) asin(-m31));
	retVector.Z = RadiansToDegrees((float) atan2(m21, m11));
}

//========================================================================

void QTCreateQuaternionFromAxisAngle(D3DQUATERNION& retQuat, float X, float Y, float Z, float Degrees) 
{ 
	float Angle  = float((Degrees / 180.0f) * PI);
	float Result = sinf(Angle / 2.0f);
		
	retQuat.X = float(X * Result);
	retQuat.Y = float(Y * Result);
	retQuat.Z = float(Z * Result);
	retQuat.W = cosf(Angle / 2.0f);
}

//========================================================================

void QTCreateMatrix(D3DQUATERNION& Quat, D3DMATRIX *Matrix)
{
	Matrix->m11 = 1.0f - 2.0f * (Quat.Y * Quat.Y + Quat.Z * Quat.Z); 
	Matrix->m12 = 2.0f *        (Quat.X * Quat.Y + Quat.Z * Quat.W);
	Matrix->m13 = 2.0f *        (Quat.X * Quat.Z - Quat.Y * Quat.W);
	Matrix->m14 = 0.0f;  

	Matrix->m21 = 2.0f *        (Quat.X * Quat.Y - Quat.Z * Quat.W);  
	Matrix->m22 = 1.0f - 2.0f * (Quat.X * Quat.X + Quat.Z * Quat.Z); 
	Matrix->m23 = 2.0f *        (Quat.Z * Quat.Y + Quat.X * Quat.W);  
	Matrix->m24 = 0.0f;  

	Matrix->m31 = 2.0f *        (Quat.X * Quat.Z + Quat.Y * Quat.W);
	Matrix->m32 = 2.0f *        (Quat.Y * Quat.Z - Quat.X * Quat.W);
	Matrix->m33 = 1.0f - 2.0f * (Quat.X * Quat.X + Quat.Y * Quat.Y);  
	Matrix->m34 = 0.0f;  

	Matrix->m41 = 0;  
	Matrix->m42 = 0;  
	Matrix->m43 = 0;  
	Matrix->m44 = 1.0f;
}