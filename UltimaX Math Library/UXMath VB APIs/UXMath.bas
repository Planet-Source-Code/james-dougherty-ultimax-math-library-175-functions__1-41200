Attribute VB_Name = "UXMath"
  '|¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶|'
  '|¶¶               ©2002 Ariel Productions               ¶¶|'
  '|¶¶                 All Rights Reserved                 ¶¶|'
  '|¶¶¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¶¶|'
  '|¶¶             Programmer - James Dougherty            ¶¶|'
  '|¶¶             First Compile - 11.21.02                ¶¶|'
  '|¶¶             Source - UXMath.bas                     ¶¶|'
  '|¶¶             Object - N/A                            ¶¶|'
  '|¶¶             Version - 1.0                           ¶¶|'
  '|¶¶             Description - UltimaX Math Library      ¶¶|'
  '|¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶|'
  '|¶¶                                                     ¶¶|'
  '|¶¶ UXMath is free software; you can redistribute       ¶¶|'
  '|¶¶ it and/or modify it under the terms of the GNU      ¶¶|'
  '|¶¶ General Public License as published by the Free     ¶¶|'
  '|¶¶ Software Foundation; either version 2 of the        ¶¶|'
  '|¶¶ License, or (at your option) any later version.     ¶¶|'
  '|¶¶                                                     ¶¶|'
  '|¶¶ This program is distributed in the hope that it     ¶¶|'
  '|¶¶ will be useful, but WITHOUT ANY WARRANTY; without   ¶¶|'
  '|¶¶ even the implied warranty of MERCHANTABILITY or     ¶¶|'
  '|¶¶ FITNESS FOR A PARTICULAR PURPOSE.  See the GNU      ¶¶|'
  '|¶¶ General Public License for more details.            ¶¶|'
  '|¶¶                                                     ¶¶|'
  '|¶¶ You should have received a copy of the GNU General  ¶¶|'
  '|¶¶ Public License along with UltimaX; if not, write to ¶¶|'
  '|¶¶ the Free Software Foundation, Inc., 59 Temple       ¶¶|'
  '|¶¶ Place, Suite 330, Boston, MA 02111-1307  USA        ¶¶|'
  '|¶¶                                                     ¶¶|'
  '|¶¶¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¤¶¶|'
  '|¶¶        http://www.gnu.org/copyleft/gpl.html         ¶¶|'
  '|¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶¶|'
  
  
Option Explicit


'This is needed since DX does not have 3x3 Matrix support.
Public Type D3DMATRIX3
 m11 As Single: m12 As Single: m13 As Single
 m21 As Single: m22 As Single: m23 As Single
 m31 As Single: m32 As Single: m33 As Single
End Type


'===VECTOR 2==============================================================================
'-----------------------------------------------------------------------------------------

'Vector Math/Manipulation Functions
Public Declare Function V2_Zero Lib "UXMath.dll" (ByRef Vector As D3DVECTOR2) As Boolean
Public Declare Function V2_Negate Lib "UXMath.dll" (ByRef Vector As D3DVECTOR2) As Boolean
Public Declare Function V2_Magnitude Lib "UXMath.dll" (ByRef Vector As D3DVECTOR2) As Single
Public Declare Function V2_Normalize Lib "UXMath.dll" (ByRef Vector As D3DVECTOR2) As Boolean
Public Declare Function V2_MagnitudeSquared Lib "UXMath.dll" (ByRef Vector As D3DVECTOR2) As Single
Public Declare Function V2_Copy Lib "UXMath.dll" (ByRef retVector As D3DVECTOR2, ByRef Vector As D3DVECTOR2) As Boolean
Public Declare Function V2_Scale Lib "UXMath.dll" (ByRef retVector As D3DVECTOR2, ByRef Vector As D3DVECTOR2, ByVal ScaleAmount As Single) As Boolean
Public Declare Function V2_Minimize Lib "UXMath.dll" (ByRef retVector As D3DVECTOR2, ByRef Vector1 As D3DVECTOR2, ByRef Vector2 As D3DVECTOR2) As Boolean
Public Declare Function V2_Maximize Lib "UXMath.dll" (ByRef retVector As D3DVECTOR2, ByRef Vector1 As D3DVECTOR2, ByRef Vector2 As D3DVECTOR2) As Boolean
Public Declare Function V2_Add Lib "UXMath.dll" (ByRef retVector As D3DVECTOR2, ByRef Vector1 As D3DVECTOR2, ByRef Vector2 As D3DVECTOR2) As Boolean
Public Declare Function V2_Average Lib "UXMath.dll" (ByRef retVector As D3DVECTOR2, ByRef Vector1 As D3DVECTOR2, ByRef Vector2 As D3DVECTOR2) As Boolean
Public Declare Function V2_DotProduct Lib "UXMath.dll" (ByRef Vector1 As D3DVECTOR2, ByRef Vector2 As D3DVECTOR2) As Single
Public Declare Function V2_Subtract Lib "UXMath.dll" (ByRef retVector As D3DVECTOR2, ByRef Vector1 As D3DVECTOR2, ByRef Vector2 As D3DVECTOR2) As Boolean
Public Declare Function V2_DivideSV Lib "UXMath.dll" (ByRef retVector As D3DVECTOR2, ByVal Scalar As Single, ByRef Vector As D3DVECTOR2) As Boolean
Public Declare Function V2_DivideVS Lib "UXMath.dll" (ByRef retVector As D3DVECTOR2, ByRef Vector As D3DVECTOR2, ByVal Scalar As Single) As Boolean
Public Declare Function V2_DivideVV Lib "UXMath.dll" (ByRef retVector As D3DVECTOR2, ByRef Vector1 As D3DVECTOR2, ByRef Vector2 As D3DVECTOR2) As Boolean
Public Declare Function V2_MultiplySV Lib "UXMath.dll" (ByRef retVector As D3DVECTOR2, ByVal Scalar As Single, ByRef Vector As D3DVECTOR2) As Boolean
Public Declare Function V2_MultiplyVS Lib "UXMath.dll" (ByRef retVector As D3DVECTOR2, ByRef Vector As D3DVECTOR2, ByVal Scalar As Single) As Boolean
Public Declare Function V2_MultiplyVV Lib "UXMath.dll" (ByRef Vector1 As D3DVECTOR2, ByRef Vector2 As D3DVECTOR2) As Single

'Collision Detection Functions
Public Declare Function V2_Distance Lib "UXMath.dll" (ByRef Vector1 As D3DVECTOR2, ByRef Vector2 As D3DVECTOR2) As Single
Public Declare Function V2_FastDistance Lib "UXMath.dll" (ByRef Vector1 As D3DVECTOR2, ByRef Vector2 As D3DVECTOR2) As Integer
Public Declare Function V2_TwoVectorsAreNearlyEqual Lib "UXMath.dll" (ByRef Vector1 As D3DVECTOR2, ByRef Vector2 As D3DVECTOR2) As Boolean
Public Declare Function V2_IsCollision Lib "UXMath.dll" (ByRef Collider_Position As D3DVECTOR2, ByVal Collider_Radius As Single, ByRef Object_Position As D3DVECTOR2, ByVal Object_Radius As Single) As Boolean
Public Declare Function V2_IsCollisionEX Lib "UXMath.dll" (ByRef Collider_Position As D3DVECTOR2, ByVal Collider_Radius As Single, ByRef Object_Position As D3DVECTOR2, ByVal Object_Radius As Single) As Boolean
Public Declare Function V2_ComputeBoundingBox Lib "UXMath.dll" (ByRef Vertices As D3DVECTOR2, ByVal NumVertices As Long, ByRef retBox_Min As D3DVECTOR2, ByRef retBox_Max As D3DVECTOR2) As Boolean
Public Declare Function V2_ComputeBoundingSphere Lib "UXMath.dll" (ByRef Vertices As D3DVECTOR2, ByVal NumVertices As Long, ByRef retSphereCenter As D3DVECTOR2, ByRef retSphereRadius As Single) As Boolean
Public Declare Function V2_VectorContainedInBoundingBox Lib "UXMath.dll" (ByRef Vector As D3DVECTOR2, ByRef Box_Min As D3DVECTOR2, ByRef Box_Max As D3DVECTOR2) As Boolean
 
'Vector Interpolation Functions
Public Declare Function V2_Interpolate_Linear Lib "UXMath.dll" (ByRef retVector As D3DVECTOR2, ByVal Time As Single, ByRef KeyFrame1 As D3DVECTOR2, ByRef KeyFrame2 As D3DVECTOR2) As Boolean
Public Declare Function V2_Interpolate_LinearEX Lib "UXMath.dll" (ByRef retVertices As D3DVECTOR2, ByVal NumVertices As Long, ByVal Time As Single, ByRef KeyFrame1 As D3DVECTOR2, ByRef KeyFrame2 As D3DVECTOR2) As Boolean
Public Declare Function V2_Interpolate_HermitSpline Lib "UXMath.dll" (ByRef retVector As D3DVECTOR2, ByVal Time As Single, ByRef KeyFrame1 As D3DVECTOR2, ByRef KeyFrame2 As D3DVECTOR2, ByRef KeyFrame3 As D3DVECTOR2, ByRef KeyFrame4 As D3DVECTOR2) As Boolean
Public Declare Function V2_Interpolate_HermitSplineEX Lib "UXMath.dll" (ByRef retVertices As D3DVECTOR2, ByVal NumVertices As Long, ByVal Time As Single, ByRef KeyFrame1 As D3DVECTOR2, ByRef KeyFrame2 As D3DVECTOR2, ByRef KeyFrame3 As D3DVECTOR2, ByRef KeyFrame4 As D3DVECTOR2) As Boolean


'===VECTOR 3==============================================================================
'-----------------------------------------------------------------------------------------


'Math/Manipulation Functions
Public Declare Function V3_Zero Lib "UXMath.dll" (ByRef Vector As D3DVECTOR) As Boolean
Public Declare Function V3_Negate Lib "UXMath.dll" (ByRef Vector As D3DVECTOR) As Boolean
Public Declare Function V3_Magnitude Lib "UXMath.dll" (ByRef Vector As D3DVECTOR) As Single
Public Declare Function V3_Normalize Lib "UXMath.dll" (ByRef Vector As D3DVECTOR) As Boolean
Public Declare Function V3_MagnitudeSquared Lib "UXMath.dll" (ByRef Vector As D3DVECTOR) As Single
Public Declare Function V3_Copy Lib "UXMath.dll" (ByRef retVector As D3DVECTOR, ByRef Vector As D3DVECTOR) As Boolean
Public Declare Function V3_Scale Lib "UXMath.dll" (ByRef retVector As D3DVECTOR, ByRef Vector As D3DVECTOR, ByVal ScaleAmount As Single) As Boolean
Public Declare Function V3_Minimize Lib "UXMath.dll" (ByRef retVector As D3DVECTOR, ByRef Vector1 As D3DVECTOR, ByRef Vector2 As D3DVECTOR) As Boolean
Public Declare Function V3_Maximize Lib "UXMath.dll" (ByRef retVector As D3DVECTOR, ByRef Vector1 As D3DVECTOR, ByRef Vector2 As D3DVECTOR) As Boolean
Public Declare Function V3_Add Lib "UXMath.dll" (ByRef retVector As D3DVECTOR, ByRef Vector1 As D3DVECTOR, ByRef Vector2 As D3DVECTOR) As Boolean
Public Declare Function V3_Average Lib "UXMath.dll" (ByRef retVector As D3DVECTOR, ByRef Vector1 As D3DVECTOR, ByRef Vector2 As D3DVECTOR) As Boolean
Public Declare Function V3_DotProduct Lib "UXMath.dll" (ByRef Vector1 As D3DVECTOR, ByRef Vector2 As D3DVECTOR) As Single
Public Declare Function V3_Subtract Lib "UXMath.dll" (ByRef retVector As D3DVECTOR, ByRef Vector1 As D3DVECTOR, ByRef Vector2 As D3DVECTOR) As Boolean
Public Declare Function V3_DivideSV Lib "UXMath.dll" (ByRef retVector As D3DVECTOR, ByVal Scalar As Single, ByRef Vector As D3DVECTOR) As Boolean
Public Declare Function V3_DivideVS Lib "UXMath.dll" (ByRef retVector As D3DVECTOR, ByRef Vector As D3DVECTOR, ByVal Scalar As Single) As Boolean
Public Declare Function V3_DivideVV Lib "UXMath.dll" (ByRef retVector As D3DVECTOR, ByRef Vector1 As D3DVECTOR, ByRef Vector2 As D3DVECTOR) As Boolean
Public Declare Function V3_MultiplySV Lib "UXMath.dll" (ByRef retVector As D3DVECTOR, ByVal Scalar As Single, ByRef Vector As D3DVECTOR) As Boolean
Public Declare Function V3_MultiplyVS Lib "UXMath.dll" (ByRef retVector As D3DVECTOR, ByRef Vector As D3DVECTOR, ByVal Scalar As Single) As Boolean
Public Declare Function V3_MultiplyVV Lib "UXMath.dll" (ByRef Vector1 As D3DVECTOR, ByRef Vector2 As D3DVECTOR) As Single
Public Declare Function V3_ScalarProduct Lib "UXMath.dll" (ByRef Vector1 As D3DVECTOR, ByRef Vector2 As D3DVECTOR, ByRef Vector3 As D3DVECTOR) As Single
Public Declare Function V3_Spherical Lib "UXMath.dll" (ByRef retVector As D3DVECTOR, ByVal Theta As Single, ByVal Rho As Single, ByVal Phi As Single) As Boolean
Public Declare Function V3_CrossProduct Lib "UXMath.dll" (ByRef retVector As D3DVECTOR, ByRef Vector1 As D3DVECTOR, ByRef Vector2 As D3DVECTOR) As Boolean
Public Declare Function V3_Power Lib "UXMath.dll" (ByRef retVector As D3DVECTOR, ByRef Vector1 As D3DVECTOR, ByRef Vector2 As D3DVECTOR) As Boolean
Public Declare Function V3_PolygonNormal Lib "UXMath.dll" (ByRef retVector As D3DVECTOR, ByRef Polygon1 As D3DVECTOR, ByRef Polygon2 As D3DVECTOR, ByRef Polygon3 As D3DVECTOR) As Boolean
Public Declare Function V3_AngleBetweenVectors Lib "UXMath.dll" (ByRef Vector1 As D3DVECTOR, ByRef Vector2 As D3DVECTOR) As Double
Public Declare Function V3_TwoVectorsAreNearlyEqual Lib "UXMath.dll" (ByRef Vector1 As D3DVECTOR, ByRef Vector2 As D3DVECTOR) As Boolean

'Collision Detection Functions
Public Declare Function V3_Distance Lib "UXMath.dll" (ByRef Vector1 As D3DVECTOR, ByRef Vector2 As D3DVECTOR) As Single
Public Declare Function V3_FastDistance Lib "UXMath.dll" (ByRef Vector1 As D3DVECTOR, ByRef Vector2 As D3DVECTOR) As Integer
Public Declare Function V3_IsCollision Lib "UXMath.dll" (ByRef Collider_Position As D3DVECTOR, ByVal Collider_Radius As Single, ByRef Object_Position As D3DVECTOR, ByVal Object_Radius As Single) As Boolean
Public Declare Function V3_IsCollisionEX Lib "UXMath.dll" (ByRef Collider_Position As D3DVECTOR, ByVal Collider_Radius As Single, ByRef Object_Position As D3DVECTOR, ByVal Object_Radius As Single) As Boolean
Public Declare Function V3_IntersectedPolygon Lib "UXMath.dll" (ByRef Polygon As D3DVECTOR, ByVal NumVertices As Long, ByRef RayStart As D3DVECTOR, ByRef RayEnd As D3DVECTOR) As Boolean
Public Declare Function V3_SpherePolygonCollision Lib "UXMath.dll" (ByRef Vertices As D3DVECTOR, ByVal NumVertices As Long, ByRef SphereCenter As D3DVECTOR, ByVal SphereRadius As Single) As Boolean
Public Declare Function V3_ComputeBoundingBox Lib "UXMath.dll" (ByRef Vertices As D3DVECTOR, ByVal NumVertices As Long, ByRef retBox_Min As D3DVECTOR, ByRef retBox_Max As D3DVECTOR) As Boolean
Public Declare Function V3_ComputeBoundingSphere Lib "UXMath.dll" (ByRef Vertices As D3DVECTOR, ByVal NumVertices As Long, ByRef retSphereCenter As D3DVECTOR, ByRef retSphereRadius As Single) As Boolean
Public Declare Function V3_VectorContainedInBoundingBox Lib "UXMath.dll" (ByRef Vector As D3DVECTOR, ByRef Box_Min As D3DVECTOR, ByRef Box_Max As D3DVECTOR) As Boolean
Public Declare Function V3_ClosestPointOnLine Lib "UXMath.dll" (ByRef retVector As D3DVECTOR, ByRef LineStart As D3DVECTOR, ByRef LineEnd As D3DVECTOR, ByRef Point As D3DVECTOR) As Boolean

'Vector Interpolation Functions
Public Declare Function V3_Interpolate_Linear Lib "UXMath.dll" (ByRef retVector As D3DVECTOR, ByVal Time As Single, ByRef KeyFrame1 As D3DVECTOR, ByRef KeyFrame2 As D3DVECTOR) As Boolean
Public Declare Function V3_Interpolate_LinearEX Lib "UXMath.dll" (ByRef retVertices As D3DVECTOR, ByVal NumVertices As Long, ByVal Time As Single, ByRef KeyFrame1 As D3DVECTOR, ByRef KeyFrame2 As D3DVECTOR) As Boolean
Public Declare Function V3_Interpolate_HermitSpline Lib "UXMath.dll" (ByRef retVector As D3DVECTOR, ByVal Time As Single, ByRef KeyFrame1 As D3DVECTOR2, ByRef KeyFrame2 As D3DVECTOR, ByRef KeyFrame3 As D3DVECTOR, ByRef KeyFrame4 As D3DVECTOR) As Boolean
Public Declare Function V3_Interpolate_HermitSplineEX Lib "UXMath.dll" (ByRef retVertices As D3DVECTOR, ByVal NumVertices As Long, ByVal Time As Single, ByRef KeyFrame1 As D3DVECTOR, ByRef KeyFrame2 As D3DVECTOR, ByRef KeyFrame3 As D3DVECTOR, ByRef KeyFrame4 As D3DVECTOR) As Boolean


'===VECTOR 4==============================================================================
'-----------------------------------------------------------------------------------------


'Math/Manipulation Functions
Public Declare Function V4_Zero Lib "UXMath.dll" (ByRef Vector As D3DVECTOR4) As Boolean
Public Declare Function V4_Negate Lib "UXMath.dll" (ByRef Vector As D3DVECTOR4) As Boolean
Public Declare Function V4_Magnitude Lib "UXMath.dll" (ByRef Vector As D3DVECTOR4) As Single
Public Declare Function V4_Normalize Lib "UXMath.dll" (ByRef Vector As D3DVECTOR4) As Boolean
Public Declare Function V4_MagnitudeSquared Lib "UXMath.dll" (ByRef Vector As D3DVECTOR4) As Single
Public Declare Function V4_Copy Lib "UXMath.dll" (ByRef retVector As D3DVECTOR4, ByRef Vector As D3DVECTOR4) As Boolean
Public Declare Function V4_Scale Lib "UXMath.dll" (ByRef retVector As D3DVECTOR4, ByRef Vector As D3DVECTOR4, ByVal ScaleAmount As Single) As Boolean
Public Declare Function V4_Minimize Lib "UXMath.dll" (ByRef retVector As D3DVECTOR4, ByRef Vector1 As D3DVECTOR4, ByRef Vector2 As D3DVECTOR4) As Boolean
Public Declare Function V4_Maximize Lib "UXMath.dll" (ByRef retVector As D3DVECTOR4, ByRef Vector1 As D3DVECTOR4, ByRef Vector2 As D3DVECTOR4) As Boolean
Public Declare Function V4_Add Lib "UXMath.dll" (ByRef retVector As D3DVECTOR4, ByRef Vector1 As D3DVECTOR4, ByRef Vector2 As D3DVECTOR4) As Boolean
Public Declare Function V4_Average Lib "UXMath.dll" (ByRef retVector As D3DVECTOR4, ByRef Vector1 As D3DVECTOR4, ByRef Vector2 As D3DVECTOR4) As Boolean
Public Declare Function V4_DotProduct Lib "UXMath.dll" (ByRef Vector1 As D3DVECTOR4, ByRef Vector2 As D3DVECTOR4) As Single
Public Declare Function V4_Subtract Lib "UXMath.dll" (ByRef retVector As D3DVECTOR4, ByRef Vector1 As D3DVECTOR4, ByRef Vector2 As D3DVECTOR4) As Boolean
Public Declare Function V4_DivideSV Lib "UXMath.dll" (ByRef retVector As D3DVECTOR4, ByVal Scalar As Single, ByRef Vector As D3DVECTOR4) As Boolean
Public Declare Function V4_DivideVS Lib "UXMath.dll" (ByRef retVector As D3DVECTOR4, ByRef Vector As D3DVECTOR4, ByVal Scalar As Single) As Boolean
Public Declare Function V4_DivideVV Lib "UXMath.dll" (ByRef retVector As D3DVECTOR4, ByRef Vector1 As D3DVECTOR4, ByRef Vector2 As D3DVECTOR4) As Boolean
Public Declare Function V4_MultiplySV Lib "UXMath.dll" (ByRef retVector As D3DVECTOR4, ByVal Scalar As Single, ByRef Vector As D3DVECTOR4) As Boolean
Public Declare Function V4_MultiplyVS Lib "UXMath.dll" (ByRef retVector As D3DVECTOR4, ByRef Vector As D3DVECTOR4, ByVal Scalar As Single) As Boolean
Public Declare Function V4_MultiplyVV Lib "UXMath.dll" (ByRef Vector1 As D3DVECTOR4, ByRef Vector2 As D3DVECTOR4) As Single
Public Declare Function V4_TwoVectorsAreNearlyEqual Lib "UXMath.dll" (ByRef Vector1 As D3DVECTOR4, ByRef Vector2 As D3DVECTOR4) As Boolean

'Collision Detection Functions
Public Declare Function V4_Distance Lib "UXMath.dll" (ByRef Vector1 As D3DVECTOR4, ByRef Vector2 As D3DVECTOR4) As Single
Public Declare Function V4_IsCollision Lib "UXMath.dll" (ByRef Collider_Position As D3DVECTOR4, ByVal Collider_Radius As Single, ByRef Object_Position As D3DVECTOR4, ByVal Object_Radius As Single) As Boolean
Public Declare Function V4_IsCollisionEX Lib "UXMath.dll" (ByRef Collider_Position As D3DVECTOR4, ByVal Collider_Radius As Single, ByRef Object_Position As D3DVECTOR4, ByVal Object_Radius As Single) As Boolean
Public Declare Function V4_ComputeBoundingBox Lib "UXMath.dll" (ByRef Vertices As D3DVECTOR4, ByVal NumVertices As Long, ByRef retBox_Min As D3DVECTOR4, ByRef retBox_Max As D3DVECTOR4) As Boolean
Public Declare Function V4_ComputeBoundingSphere Lib "UXMath.dll" (ByRef Vertices As D3DVECTOR4, ByVal NumVertices As Long, ByRef retSphereCenter As D3DVECTOR4, ByRef retSphereRadius As Single) As Boolean
Public Declare Function V4_VectorContainedInBoundingBox Lib "UXMath.dll" (ByRef Vector As D3DVECTOR4, ByRef Box_Min As D3DVECTOR4, ByRef Box_Max As D3DVECTOR4) As Boolean

'Vector Interpolation Functions
Public Declare Function V4_Interpolate_Linear Lib "UXMath.dll" (ByRef retVector As D3DVECTOR4, ByVal Time As Single, ByRef KeyFrame1 As D3DVECTOR4, ByRef KeyFrame2 As D3DVECTOR4) As Boolean
Public Declare Function V4_Interpolate_LinearEX Lib "UXMath.dll" (ByRef retVertices As D3DVECTOR4, ByVal NumVertices As Long, ByVal Time As Single, ByRef KeyFrame1 As D3DVECTOR4, ByRef KeyFrame2 As D3DVECTOR4) As Boolean
Public Declare Function V4_Interpolate_HermitSpline Lib "UXMath.dll" (ByRef retVector As D3DVECTOR4, ByVal Time As Single, ByRef KeyFrame1 As D3DVECTOR4, ByRef KeyFrame2 As D3DVECTOR4, ByRef KeyFrame3 As D3DVECTOR4, ByRef KeyFrame4 As D3DVECTOR4) As Boolean
Public Declare Function V4_Interpolate_HermitSplineEX Lib "UXMath.dll" (ByRef retVertices As D3DVECTOR4, ByVal NumVertices As Long, ByVal Time As Single, ByRef KeyFrame1 As D3DVECTOR4, ByRef KeyFrame2 As D3DVECTOR4, ByRef KeyFrame3 As D3DVECTOR4, ByRef KeyFrame4 As D3DVECTOR4) As Boolean


'===COLOR=================================================================================
'-----------------------------------------------------------------------------------------


'Constant Colors Functions
Public Declare Function CLR_Black Lib "UXMath.dll" (ByRef retColor As D3DCOLORVALUE) As Boolean
Public Declare Function CLR_LightGray Lib "UXMath.dll" (ByRef retColor As D3DCOLORVALUE) As Boolean
Public Declare Function CLR_MediumGray Lib "UXMath.dll" (ByRef retColor As D3DCOLORVALUE) As Boolean
Public Declare Function CLR_DarkGray Lib "UXMath.dll" (ByRef retColor As D3DCOLORVALUE) As Boolean
Public Declare Function CLR_White Lib "UXMath.dll" (ByRef retColor As D3DCOLORVALUE) As Boolean
Public Declare Function CLR_Red Lib "UXMath.dll" (ByRef retColor As D3DCOLORVALUE) As Boolean
Public Declare Function CLR_Green Lib "UXMath.dll" (ByRef retColor As D3DCOLORVALUE) As Boolean
Public Declare Function CLR_Blue Lib "UXMath.dll" (ByRef retColor As D3DCOLORVALUE) As Boolean
Public Declare Function CLR_Magenta Lib "UXMath.dll" (ByRef retColor As D3DCOLORVALUE) As Boolean
Public Declare Function CLR_Cyan Lib "UXMath.dll" (ByRef retColor As D3DCOLORVALUE) As Boolean
Public Declare Function CLR_Yellow Lib "UXMath.dll" (ByRef retColor As D3DCOLORVALUE) As Boolean

'Color Math/Manipulation Functions
Public Declare Function CLR_Negate Lib "UXMath.dll" (ByRef retColor As D3DCOLORVALUE) As Boolean
Public Declare Function CLR_CapColor Lib "UXMath.dll" (ByRef retColor As D3DCOLORVALUE) As Boolean
Public Declare Function CLR_Scale Lib "UXMath.dll" (ByRef retColor As D3DCOLORVALUE, ByRef Color As D3DCOLORVALUE, ByVal ScaleAmount As Single) As Boolean
Public Declare Function CLR_Add Lib "UXMath.dll" (ByRef retColor As D3DCOLORVALUE, ByRef Color1 As D3DCOLORVALUE, ByRef Color2 As D3DCOLORVALUE) As Boolean
Public Declare Function CLR_Average Lib "UXMath.dll" (ByRef retColor As D3DCOLORVALUE, ByRef Color1 As D3DCOLORVALUE, ByRef Color2 As D3DCOLORVALUE) As Boolean
Public Declare Function CLR_Subtract Lib "UXMath.dll" (ByRef retColor As D3DCOLORVALUE, ByRef Color1 As D3DCOLORVALUE, ByRef Color2 As D3DCOLORVALUE) As Boolean
Public Declare Function CLR_DivideSC Lib "UXMath.dll" (ByRef retColor As D3DCOLORVALUE, ByVal Scalar As Single, ByRef Color As D3DCOLORVALUE) As Boolean
Public Declare Function CLR_DivideCS Lib "UXMath.dll" (ByRef retColor As D3DCOLORVALUE, ByVal Color As D3DCOLORVALUE, ByRef Scalar As Single) As Boolean
Public Declare Function CLR_DivideCC Lib "UXMath.dll" (ByRef retColor As D3DCOLORVALUE, ByVal Color1 As D3DCOLORVALUE, ByRef Color2 As D3DCOLORVALUE) As Boolean
Public Declare Function CLR_MultiplySC Lib "UXMath.dll" (ByRef retColor As D3DCOLORVALUE, ByVal Scalar As Single, ByRef Color As D3DCOLORVALUE) As Boolean
Public Declare Function CLR_MultiplyCS Lib "UXMath.dll" (ByRef retColor As D3DCOLORVALUE, ByVal Color As D3DCOLORVALUE, ByRef Scalar As Single) As Boolean
Public Declare Function CLR_MultiplyCC Lib "UXMath.dll" (ByRef retColor As D3DCOLORVALUE, ByVal Color1 As D3DCOLORVALUE, ByRef Color2 As D3DCOLORVALUE) As Single
Public Declare Function CLR_TwoColorsAreNearlyEqual Lib "UXMath.dll" (ByRef Color1 As D3DCOLORVALUE, ByRef Color2 As D3DCOLORVALUE) As Boolean

'Color Interpolation Functions
Public Declare Function CLR_Interpolate_Linear Lib "UXMath.dll" (ByRef retColor As D3DCOLORVALUE, ByVal Time As Single, ByRef Color1 As D3DCOLORVALUE, ByRef Color2 As D3DCOLORVALUE) As Boolean
Public Declare Function CLR_Interpolate_HermitSpline Lib "UXMath.dll" (ByRef retColor As D3DCOLORVALUE, ByVal Time As Single, ByRef Color1 As D3DCOLORVALUE, ByRef Color2 As D3DCOLORVALUE, ByRef Color3 As D3DCOLORVALUE, ByRef Color4 As D3DCOLORVALUE) As Boolean


'===3x3 Matrix============================================================================
'-----------------------------------------------------------------------------------------


'Matrix 3x3 Math/Manipulation Functions
Public Declare Function M3_Zero Lib "UXMath.dll" (ByRef retMatrix As D3DMATRIX3) As Boolean
Public Declare Function M3_Identity Lib "UXMath.dll" (ByRef retMatrix As D3DMATRIX3) As Boolean
Public Declare Function M3_IsIdentity Lib "UXMath.dll" (ByRef Matrix As D3DMATRIX3) As Boolean
Public Declare Function M3_Determinate Lib "UXMath.dll" (ByRef Matrix As D3DMATRIX3) As Single
Public Declare Function M3_Copy Lib "UXMath.dll" (ByRef retMatrix As D3DMATRIX3, ByRef Matrix As D3DMATRIX3) As Boolean
Public Declare Function M3_Inverse Lib "UXMath.dll" (ByRef retMatrix As D3DMATRIX3, ByRef Matrix As D3DMATRIX3) As Boolean
Public Declare Function M3_Transpose Lib "UXMath.dll" (ByRef retMatrix As D3DMATRIX3, ByRef Matrix As D3DMATRIX3) As Boolean
Public Declare Function M3_Add Lib "UXMath.dll" (ByRef retMatrix As D3DMATRIX3, ByRef Matrix1 As D3DMATRIX3, ByRef Matrix2 As D3DMATRIX3) As Boolean
Public Declare Function M3_Subtract Lib "UXMath.dll" (ByRef retMatrix As D3DMATRIX3, ByRef Matrix1 As D3DMATRIX3, ByRef Matrix2 As D3DMATRIX3) As Boolean
Public Declare Function M3_DivideMS Lib "UXMath.dll" (ByRef retMatrix As D3DMATRIX3, ByRef Matrix As D3DMATRIX3, ByVal Scalar As Single) As Boolean
Public Declare Function M3_DivideSM Lib "UXMath.dll" (ByRef retMatrix As D3DMATRIX3, ByRef Scalar As Single, ByVal Matrix As D3DMATRIX3) As Boolean
Public Declare Function M3_DivideMM Lib "UXMath.dll" (ByRef retMatrix As D3DMATRIX3, ByRef Matrix1 As D3DMATRIX3, ByRef Matrix2 As D3DMATRIX3) As Boolean
Public Declare Function M3_MultiplyMM Lib "UXMath.dll" (ByRef retMatrix As D3DMATRIX3, ByRef Matrix1 As D3DMATRIX3, ByRef Matrix2 As D3DMATRIX3) As Boolean
Public Declare Function M3_MultiplyMS Lib "UXMath.dll" (ByRef retMatrix As D3DMATRIX3, ByRef Matrix As D3DMATRIX3, ByVal Scalar As Single) As Boolean
Public Declare Function M3_MultiplySM Lib "UXMath.dll" (ByRef retMatrix As D3DMATRIX3, ByRef Scalar As Single, ByVal Matrix As D3DMATRIX3) As Boolean
Public Declare Function M3_MultiplyMV Lib "UXMath.dll" (ByRef retMatrix As D3DMATRIX3, ByRef Matrix As D3DMATRIX3, ByVal Vector As D3DVECTOR) As Boolean
Public Declare Function M3_MultiplyVM Lib "UXMath.dll" (ByRef retMatrix As D3DMATRIX3, ByRef Vector As D3DVECTOR, ByVal Matrix As D3DMATRIX3) As Boolean


'===4x4 Matrix============================================================================
'-----------------------------------------------------------------------------------------


'Matrix 4x4 Math/Manipulation Functions
Public Declare Function M4_Zero Lib "UXMath.dll" (ByRef retMatrix As D3DMATRIX) As Boolean
Public Declare Function M4_Identity Lib "UXMath.dll" (ByRef retMatrix As D3DMATRIX) As Boolean
Public Declare Function M4_IsIdentity Lib "UXMath.dll" (ByRef Matrix As D3DMATRIX) As Boolean
Public Declare Function M4_Copy Lib "UXMath.dll" (ByRef retMatrix As D3DMATRIX, ByRef Matrix As D3DMATRIX) As Boolean
Public Declare Function M4_Inverse Lib "UXMath.dll" (ByRef retMatrix As D3DMATRIX, ByRef Matrix As D3DMATRIX) As Boolean
Public Declare Function M4_Transpose Lib "UXMath.dll" (ByRef retMatrix As D3DMATRIX, ByRef Matrix As D3DMATRIX) As Boolean
Public Declare Function M4_GetLocation Lib "UXMath.dll" (ByRef retVector As D3DVECTOR, ByRef Matrix As D3DMATRIX) As Boolean
Public Declare Function M4_RotateX Lib "UXMath.dll" (ByRef retMatrix As D3DMATRIX, ByVal Angle As Single) As Boolean
Public Declare Function M4_RotateY Lib "UXMath.dll" (ByRef retMatrix As D3DMATRIX, ByVal Angle As Single) As Boolean
Public Declare Function M4_RotateZ Lib "UXMath.dll" (ByRef retMatrix As D3DMATRIX, ByVal Angle As Single) As Boolean
Public Declare Function M4_Scale Lib "UXMath.dll" (ByRef retMatrix As D3DMATRIX, ByRef Amount As D3DVECTOR) As Boolean
Public Declare Function M4_Position Lib "UXMath.dll" (ByRef retMatrix As D3DMATRIX, ByRef Position As D3DVECTOR) As Boolean
Public Declare Function M4_Translate Lib "UXMath.dll" (ByRef retMatrix As D3DMATRIX, ByRef Position As D3DVECTOR) As Boolean
Public Declare Function M4_Add Lib "UXMath.dll" (ByRef retMatrix As D3DMATRIX, ByRef Matrix1 As D3DMATRIX, ByRef Matrix2 As D3DMATRIX) As Boolean
Public Declare Function M4_Subtract Lib "UXMath.dll" (ByRef retMatrix As D3DMATRIX, ByRef Matrix1 As D3DMATRIX, ByRef Matrix2 As D3DMATRIX) As Boolean
Public Declare Function M4_DivideMS Lib "UXMath.dll" (ByRef retMatrix As D3DMATRIX, ByRef Matrix As D3DMATRIX, ByVal Scalar As Single) As Boolean
Public Declare Function M4_DivideSM Lib "UXMath.dll" (ByRef retMatrix As D3DMATRIX, ByRef Scalar As Single, ByVal Matrix As D3DMATRIX) As Boolean
Public Declare Function M4_DivideMM Lib "UXMath.dll" (ByRef retMatrix As D3DMATRIX, ByRef Matrix1 As D3DMATRIX, ByRef Matrix2 As D3DMATRIX) As Boolean
Public Declare Function M4_MultiplyMM Lib "UXMath.dll" (ByRef retMatrix As D3DMATRIX, ByRef Matrix1 As D3DMATRIX, ByRef Matrix2 As D3DMATRIX) As Boolean
Public Declare Function M4_MultiplyMS Lib "UXMath.dll" (ByRef retMatrix As D3DMATRIX, ByRef Matrix As D3DMATRIX, ByVal Scalar As Single) As Boolean
Public Declare Function M4_MultiplySM Lib "UXMath.dll" (ByRef retMatrix As D3DMATRIX, ByRef Scalar As Single, ByVal Matrix As D3DMATRIX) As Boolean
Public Declare Function M4_MultiplyMV Lib "UXMath.dll" (ByRef retMatrix As D3DMATRIX, ByRef Matrix As D3DMATRIX, ByVal Vector As D3DVECTOR4) As Boolean
Public Declare Function M4_MultiplyVM Lib "UXMath.dll" (ByRef retMatrix As D3DMATRIX, ByRef Vector As D3DVECTOR4, ByVal Matrix As D3DMATRIX) As Boolean

'Advanced/Usefull Matrix 4x4 Functions
Public Declare Function M4_AxisAngle Lib "UXMath.dll" (ByRef retMatrix As D3DMATRIX, ByRef Axis As D3DVECTOR, ByVal Angle As Single) As Boolean
Public Declare Function M4_RotateEX Lib "UXMath.dll" (ByRef retMatrix As D3DMATRIX, ByRef Matrix As D3DMATRIX, ByVal AngleX As Single, ByVal AngleY As Single, ByVal AngleZ As Single) As Boolean
Public Declare Function M4_ObjectLookAt Lib "UXMath.dll" (ByRef retMatrix As D3DMATRIX, ByRef Location As D3DVECTOR, ByRef LookAt As D3DVECTOR, ByRef Up As D3DVECTOR) As Boolean
Public Declare Function M4_CameraLookAt Lib "UXMath.dll" (ByRef retMatrix As D3DMATRIX, ByRef Location As D3DVECTOR, ByRef LookAt As D3DVECTOR, ByRef Up As D3DVECTOR) As Boolean
Public Declare Function M4_OpMatrix Lib "UXMath.dll" (ByRef retMatrix As D3DMATRIX, ByRef Position As D3DVECTOR, ByRef Rotation As D3DVECTOR, ByRef ScaleAmount As D3DVECTOR) As Boolean


'===Quaternion============================================================================
'-----------------------------------------------------------------------------------------


'Quaternion Math/Manipulation Functions
Public Declare Function QT_Identity Lib "UXMath.dll" (ByRef retQuat As D3DQUATERNION) As Boolean
Public Declare Function QT_IsIdentity Lib "UXMath.dll" (ByRef Quat As D3DQUATERNION) As Boolean
Public Declare Function QT_Zero Lib "UXMath.dll" (ByRef retQuat As D3DQUATERNION) As Boolean
Public Declare Function QT_Negate Lib "UXMath.dll" (ByRef retQuat As D3DQUATERNION) As Boolean
Public Declare Function QT_Copy Lib "UXMath.dll" (ByRef retQuat As D3DQUATERNION, ByRef Quat As D3DQUATERNION) As Boolean
Public Declare Function QT_Add Lib "UXMath.dll" (ByRef retQuat As D3DQUATERNION, ByRef Quat1 As D3DQUATERNION, ByRef Quat2 As D3DQUATERNION) As Boolean
Public Declare Function QT_Average Lib "UXMath.dll" (ByRef retQuat As D3DQUATERNION, ByRef Quat1 As D3DQUATERNION, ByRef Quat2 As D3DQUATERNION) As Boolean
Public Declare Function QT_Subtract Lib "UXMath.dll" (ByRef retQuat As D3DQUATERNION, ByRef Quat1 As D3DQUATERNION, ByRef Quat2 As D3DQUATERNION) As Boolean
Public Declare Function QT_DivideSQ Lib "UXMath.dll" (ByRef retQuat As D3DQUATERNION, ByVal Scalar As Single, ByRef Quat As D3DQUATERNION) As Boolean
Public Declare Function QT_DivideQS Lib "UXMath.dll" (ByRef retQuat As D3DQUATERNION, ByVal Quat As D3DQUATERNION, ByRef Scalar As Single) As Boolean
Public Declare Function QT_DivideQQ Lib "UXMath.dll" (ByRef retQuat As D3DQUATERNION, ByRef Quat1 As D3DQUATERNION, ByRef Quat2 As D3DQUATERNION) As Boolean
Public Declare Function QT_MultiplySQ Lib "UXMath.dll" (ByRef retQuat As D3DQUATERNION, ByVal Scalar As Single, ByRef Quat As D3DQUATERNION) As Boolean
Public Declare Function QT_MultiplyQS Lib "UXMath.dll" (ByRef retQuat As D3DQUATERNION, ByVal Quat As D3DQUATERNION, ByRef Scalar As Single) As Boolean
Public Declare Function QT_MultiplyQQ Lib "UXMath.dll" (ByRef retQuat As D3DQUATERNION, ByRef Quat1 As D3DQUATERNION, ByRef Quat2 As D3DQUATERNION) As Boolean
Public Declare Function QT_MultiplyQV Lib "UXMath.dll" (ByRef retQuat As D3DQUATERNION, ByRef Quat As D3DQUATERNION, ByRef Vector As D3DVECTOR) As Boolean
Public Declare Function QT_MultiplyVQ Lib "UXMath.dll" (ByRef retQuat As D3DQUATERNION, ByRef Vector As D3DVECTOR, ByRef Quat As D3DQUATERNION) As Boolean

'Advanced/Usefull Quaternion Functions
Public Declare Function QT_CreateMatrix Lib "UXMath.dll" (ByRef Quat As D3DQUATERNION, ByRef Matrix As D3DMATRIX) As Boolean
Public Declare Function QT_Magnitude Lib "UXMath.dll" (ByRef Quat As D3DQUATERNION) As Single
Public Declare Function QT_MagnitudeSquared Lib "UXMath.dll" (ByRef Quat As D3DQUATERNION) As Single
Public Declare Function QT_GetScalar Lib "UXMath.dll" (ByRef Quat As D3DQUATERNION) As Single
Public Declare Function QT_GetVector Lib "UXMath.dll" (ByRef retVector As D3DVECTOR, ByRef Quat As D3DQUATERNION) As Boolean
Public Declare Function QT_QuaternionGetAngle Lib "UXMath.dll" (ByRef Quat As D3DQUATERNION) As Single
Public Declare Function QT_QuaternionGetAxis Lib "UXMath.dll" (ByRef retVector As D3DVECTOR, ByRef Quat As D3DQUATERNION) As Boolean
Public Declare Function QT_QuaternionRotate Lib "UXMath.dll" (ByRef retQuat As D3DQUATERNION, ByRef Quat1 As D3DQUATERNION, ByRef Quat2 As D3DQUATERNION) As Boolean
Public Declare Function QT_QuaternionVectorRotate Lib "UXMath.dll" (ByRef retVector As D3DVECTOR, ByRef Quat As D3DQUATERNION, ByRef Vector As D3DVECTOR) As Boolean
Public Declare Function QT_CreateEularAnglesFromQuaternion Lib "UXMath.dll" (ByRef retVector As D3DVECTOR, ByRef Quat As D3DQUATERNION) As Boolean
Public Declare Function QT_CreateQuaternionFromEularAngles Lib "UXMath.dll" (ByRef retQuat As D3DQUATERNION, ByVal X As Single, ByVal Y As Single, ByVal Z As Single) As Boolean
Public Declare Function QT_CreateQuaternionFromAxisAngle Lib "UXMath.dll" (ByRef retQuat As D3DQUATERNION, ByVal X As Single, ByVal Y As Single, ByVal Z As Single, ByVal Degrees As Single) As Boolean

 
'===Usefull Functions=====================================================================
'-----------------------------------------------------------------------------------------


Public Function PI() As Single

 PI = 3.14159265358979
 
End Function

Public Function Inverse_PI() As Single

 Inverse_PI = 0.318309886183791
 
End Function

Public Function Degrees_90() As Single

 Degrees_90 = 1.5707963267949
 
End Function

Public Function Degrees_180() As Single

 Degrees_180 = 3.14159265358979
 
End Function

Public Function Degrees_270() As Single
 
 Degrees_270 = 4.71238898038469
 
End Function

Public Function Degrees_360() As Single
 
 Degrees_360 = 6.28318530717959
 
End Function

Public Function Epsilon() As Single
 
 Epsilon = 0.0001
 
End Function

Public Function Radiant() As Single
 
 Radiant = 1.74532925199433E-02
 
End Function

Public Function HugeSingle() As Single
 
 HugeSingle = 1E+38
 
End Function

Public Function Radian_to_Degree(Radians As Single) As Single
 
 Radian_to_Degree = ((Radians * 180) / PI)
 
End Function

Public Function Degrees_To_Radian(Degrees As Single) As Single
 
 Degrees_To_Radian = ((Degrees * PI) / 180)
 
End Function

Public Function V2_Vector(ByVal X As Single, ByVal Y As Single) As D3DVECTOR2
 
 V2_Vector.X = X
 V2_Vector.Y = Y
 
End Function

Public Function V3_Vector(ByVal X As Single, ByVal Y As Single, ByVal Z As Single) As D3DVECTOR
 
 V3_Vector.X = X
 V3_Vector.Y = Y
 V3_Vector.Z = Z
 
End Function

Public Function V4_Vector(ByVal X As Single, ByVal Y As Single, ByVal Z As Single, ByVal W As Single) As D3DVECTOR4
 
 V4_Vector.X = X
 V4_Vector.Y = Y
 V4_Vector.Z = Z
 V4_Vector.W = W
 
End Function

Public Function CLR_Color(ByVal Red As Single, ByVal Green As Single, ByVal Blue As Single, ByVal Alpha As Single) As D3DCOLORVALUE
 
 CLR_Color.r = Red
 CLR_Color.g = Green
 CLR_Color.b = Blue
 CLR_Color.a = Alpha
 
End Function

Public Function M3_Matrix(ByVal m11 As Single, ByVal m12 As Single, ByVal m13 As Single, _
                          ByVal m21 As Single, ByVal m22 As Single, ByVal m23 As Single, _
                          ByVal m31 As Single, ByVal m32 As Single, ByVal m33 As Single) As D3DMATRIX3
 
 M3_Matrix.m11 = m11: M3_Matrix.m12 = m12: M3_Matrix.m13 = m13
 M3_Matrix.m21 = m21: M3_Matrix.m22 = m22: M3_Matrix.m23 = m23
 M3_Matrix.m31 = m31: M3_Matrix.m32 = m32: M3_Matrix.m33 = m33
 
End Function

Public Function M4_Matrix(ByVal m11 As Single, ByVal m12 As Single, ByVal m13 As Single, ByVal m14 As Single, _
                          ByVal m21 As Single, ByVal m22 As Single, ByVal m23 As Single, ByVal m24 As Single, _
                          ByVal m31 As Single, ByVal m32 As Single, ByVal m33 As Single, ByVal m34 As Single, _
                          ByVal m41 As Single, ByVal m42 As Single, ByVal m43 As Single, ByVal m44 As Single) As D3DMATRIX
 
 M4_Matrix.m11 = m11: M4_Matrix.m12 = m12: M4_Matrix.m13 = m13: M4_Matrix.m14 = m14
 M4_Matrix.m21 = m21: M4_Matrix.m22 = m22: M4_Matrix.m23 = m23: M4_Matrix.m24 = m24
 M4_Matrix.m31 = m31: M4_Matrix.m32 = m32: M4_Matrix.m33 = m33: M4_Matrix.m34 = m34
 M4_Matrix.m41 = m41: M4_Matrix.m42 = m42: M4_Matrix.m43 = m43: M4_Matrix.m44 = m44
 
End Function

Public Function QT_Quaternion(ByVal X As Single, ByVal Y As Single, ByVal Z As Single, ByVal W As Single) As D3DQUATERNION
 
 QT_Quaternion.X = X
 QT_Quaternion.Y = Y
 QT_Quaternion.Z = Z
 QT_Quaternion.W = W
 
End Function
