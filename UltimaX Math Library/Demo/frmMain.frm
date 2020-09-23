VERSION 5.00
Begin VB.Form frmMain 
   BackColor       =   &H00E0E0E0&
   BorderStyle     =   1  'Fixed Single
   Caption         =   "UXMath Demo"
   ClientHeight    =   4005
   ClientLeft      =   45
   ClientTop       =   330
   ClientWidth     =   9735
   Icon            =   "frmMain.frx":0000
   LinkTopic       =   "Form1"
   MaxButton       =   0   'False
   MinButton       =   0   'False
   ScaleHeight     =   267
   ScaleMode       =   3  'Pixel
   ScaleWidth      =   649
   StartUpPosition =   2  'CenterScreen
   Begin VB.CheckBox Dummy 
      Caption         =   "Dummy"
      Height          =   255
      Left            =   -225
      TabIndex        =   23
      Top             =   1320
      Width           =   135
   End
   Begin VB.Frame Frame1 
      BackColor       =   &H00E0E0E0&
      Height          =   1620
      Left            =   0
      TabIndex        =   0
      Top             =   -75
      Width           =   9735
      Begin VB.TextBox txtW 
         Alignment       =   2  'Center
         BackColor       =   &H00E0E0E0&
         Enabled         =   0   'False
         Height          =   285
         Index           =   1
         Left            =   8820
         TabIndex        =   22
         Text            =   "15"
         Top             =   960
         Width           =   615
      End
      Begin VB.TextBox txtZ 
         Alignment       =   2  'Center
         BackColor       =   &H00E0E0E0&
         Enabled         =   0   'False
         Height          =   285
         Index           =   1
         Left            =   8040
         TabIndex        =   20
         Text            =   "15"
         Top             =   960
         Width           =   615
      End
      Begin VB.TextBox txtY 
         Alignment       =   2  'Center
         Height          =   285
         Index           =   1
         Left            =   7320
         TabIndex        =   18
         Text            =   "15"
         Top             =   960
         Width           =   615
      End
      Begin VB.TextBox txtX 
         Alignment       =   2  'Center
         Height          =   285
         Index           =   1
         Left            =   6570
         TabIndex        =   16
         Text            =   "15"
         Top             =   960
         Width           =   615
      End
      Begin VB.TextBox txtW 
         Alignment       =   2  'Center
         BackColor       =   &H00E0E0E0&
         Enabled         =   0   'False
         Height          =   285
         Index           =   0
         Left            =   4980
         TabIndex        =   13
         Text            =   "10"
         Top             =   960
         Width           =   615
      End
      Begin VB.TextBox txtZ 
         Alignment       =   2  'Center
         BackColor       =   &H00E0E0E0&
         Enabled         =   0   'False
         Height          =   285
         Index           =   0
         Left            =   4230
         TabIndex        =   11
         Text            =   "10"
         Top             =   960
         Width           =   615
      End
      Begin VB.TextBox txtY 
         Alignment       =   2  'Center
         Height          =   285
         Index           =   0
         Left            =   3480
         TabIndex        =   9
         Text            =   "10"
         Top             =   960
         Width           =   615
      End
      Begin VB.TextBox txtX 
         Alignment       =   2  'Center
         Height          =   285
         Index           =   0
         Left            =   2730
         TabIndex        =   7
         Text            =   "10"
         Top             =   960
         Width           =   615
      End
      Begin VB.OptionButton optVectorType 
         BackColor       =   &H00E0E0E0&
         Caption         =   "Use 4D Vector"
         BeginProperty Font 
            Name            =   "Arial"
            Size            =   8.25
            Charset         =   0
            Weight          =   700
            Underline       =   0   'False
            Italic          =   0   'False
            Strikethrough   =   0   'False
         EndProperty
         Height          =   255
         Index           =   2
         Left            =   120
         Style           =   1  'Graphical
         TabIndex        =   5
         Top             =   1200
         Width           =   1695
      End
      Begin VB.OptionButton optVectorType 
         BackColor       =   &H00E0E0E0&
         Caption         =   "Use 3D Vector"
         BeginProperty Font 
            Name            =   "Arial"
            Size            =   8.25
            Charset         =   0
            Weight          =   700
            Underline       =   0   'False
            Italic          =   0   'False
            Strikethrough   =   0   'False
         EndProperty
         Height          =   255
         Index           =   1
         Left            =   120
         Style           =   1  'Graphical
         TabIndex        =   4
         Top             =   840
         Width           =   1695
      End
      Begin VB.OptionButton optVectorType 
         BackColor       =   &H00E0E0E0&
         Caption         =   "Use 2D Vector"
         BeginProperty Font 
            Name            =   "Arial"
            Size            =   8.25
            Charset         =   0
            Weight          =   700
            Underline       =   0   'False
            Italic          =   0   'False
            Strikethrough   =   0   'False
         EndProperty
         Height          =   255
         Index           =   0
         Left            =   120
         Style           =   1  'Graphical
         TabIndex        =   3
         Top             =   480
         Value           =   -1  'True
         Width           =   1695
      End
      Begin VB.Line Line16 
         BorderColor     =   &H000000FF&
         X1              =   8370
         X2              =   8370
         Y1              =   765
         Y2              =   960
      End
      Begin VB.Line Line15 
         BorderColor     =   &H000000FF&
         X1              =   9090
         X2              =   9090
         Y1              =   735
         Y2              =   955
      End
      Begin VB.Label Label11 
         AutoSize        =   -1  'True
         BackStyle       =   0  'Transparent
         Caption         =   "W"
         BeginProperty Font 
            Name            =   "Arial"
            Size            =   9
            Charset         =   0
            Weight          =   700
            Underline       =   0   'False
            Italic          =   0   'False
            Strikethrough   =   0   'False
         EndProperty
         Height          =   225
         Left            =   9015
         TabIndex        =   21
         Top             =   600
         Width           =   180
      End
      Begin VB.Line Line14 
         BorderColor     =   &H000000FF&
         X1              =   8400
         X2              =   9060
         Y1              =   720
         Y2              =   720
      End
      Begin VB.Line Line13 
         BorderColor     =   &H000000FF&
         X1              =   7635
         X2              =   8320
         Y1              =   720
         Y2              =   720
      End
      Begin VB.Label Label10 
         AutoSize        =   -1  'True
         BackStyle       =   0  'Transparent
         Caption         =   "Z"
         BeginProperty Font 
            Name            =   "Arial"
            Size            =   9
            Charset         =   0
            Weight          =   700
            Underline       =   0   'False
            Italic          =   0   'False
            Strikethrough   =   0   'False
         EndProperty
         Height          =   225
         Left            =   8325
         TabIndex        =   19
         Top             =   600
         Width           =   105
      End
      Begin VB.Line Line12 
         BorderColor     =   &H000000FF&
         X1              =   7590
         X2              =   7590
         Y1              =   735
         Y2              =   955
      End
      Begin VB.Label Label9 
         AutoSize        =   -1  'True
         BackStyle       =   0  'Transparent
         Caption         =   "Y"
         BeginProperty Font 
            Name            =   "Arial"
            Size            =   9
            Charset         =   0
            Weight          =   700
            Underline       =   0   'False
            Italic          =   0   'False
            Strikethrough   =   0   'False
         EndProperty
         Height          =   225
         Left            =   7560
         TabIndex        =   17
         Top             =   600
         Width           =   105
      End
      Begin VB.Line Line11 
         BorderColor     =   &H000000FF&
         X1              =   6915
         X2              =   7560
         Y1              =   720
         Y2              =   720
      End
      Begin VB.Line Line10 
         BorderColor     =   &H000000FF&
         X1              =   6870
         X2              =   6870
         Y1              =   735
         Y2              =   955
      End
      Begin VB.Line Line9 
         BorderColor     =   &H000000FF&
         X1              =   6540
         X2              =   6820
         Y1              =   720
         Y2              =   720
      End
      Begin VB.Label Label8 
         AutoSize        =   -1  'True
         BackStyle       =   0  'Transparent
         Caption         =   "X"
         BeginProperty Font 
            Name            =   "Arial"
            Size            =   9
            Charset         =   0
            Weight          =   700
            Underline       =   0   'False
            Italic          =   0   'False
            Strikethrough   =   0   'False
         EndProperty
         Height          =   225
         Left            =   6825
         TabIndex        =   15
         Top             =   600
         Width           =   120
      End
      Begin VB.Label Label7 
         AutoSize        =   -1  'True
         BackStyle       =   0  'Transparent
         Caption         =   "Vector2"
         BeginProperty Font 
            Name            =   "Arial"
            Size            =   8.25
            Charset         =   0
            Weight          =   700
            Underline       =   0   'False
            Italic          =   0   'False
            Strikethrough   =   0   'False
         EndProperty
         Height          =   210
         Left            =   5880
         TabIndex        =   14
         Top             =   600
         Width           =   645
      End
      Begin VB.Line Line8 
         BorderColor     =   &H000000FF&
         X1              =   4530
         X2              =   4530
         Y1              =   765
         Y2              =   960
      End
      Begin VB.Line Line7 
         BorderColor     =   &H000000FF&
         X1              =   5250
         X2              =   5250
         Y1              =   735
         Y2              =   955
      End
      Begin VB.Label Label6 
         AutoSize        =   -1  'True
         BackStyle       =   0  'Transparent
         Caption         =   "W"
         BeginProperty Font 
            Name            =   "Arial"
            Size            =   9
            Charset         =   0
            Weight          =   700
            Underline       =   0   'False
            Italic          =   0   'False
            Strikethrough   =   0   'False
         EndProperty
         Height          =   225
         Left            =   5175
         TabIndex        =   12
         Top             =   600
         Width           =   180
      End
      Begin VB.Line Line6 
         BorderColor     =   &H000000FF&
         X1              =   4560
         X2              =   5220
         Y1              =   720
         Y2              =   720
      End
      Begin VB.Line Line5 
         BorderColor     =   &H000000FF&
         X1              =   3795
         X2              =   4480
         Y1              =   720
         Y2              =   720
      End
      Begin VB.Label Label5 
         AutoSize        =   -1  'True
         BackStyle       =   0  'Transparent
         Caption         =   "Z"
         BeginProperty Font 
            Name            =   "Arial"
            Size            =   9
            Charset         =   0
            Weight          =   700
            Underline       =   0   'False
            Italic          =   0   'False
            Strikethrough   =   0   'False
         EndProperty
         Height          =   225
         Left            =   4485
         TabIndex        =   10
         Top             =   600
         Width           =   105
      End
      Begin VB.Line Line4 
         BorderColor     =   &H000000FF&
         X1              =   3750
         X2              =   3750
         Y1              =   735
         Y2              =   955
      End
      Begin VB.Label Label4 
         AutoSize        =   -1  'True
         BackStyle       =   0  'Transparent
         Caption         =   "Y"
         BeginProperty Font 
            Name            =   "Arial"
            Size            =   9
            Charset         =   0
            Weight          =   700
            Underline       =   0   'False
            Italic          =   0   'False
            Strikethrough   =   0   'False
         EndProperty
         Height          =   225
         Left            =   3720
         TabIndex        =   8
         Top             =   600
         Width           =   105
      End
      Begin VB.Line Line3 
         BorderColor     =   &H000000FF&
         X1              =   3075
         X2              =   3720
         Y1              =   720
         Y2              =   720
      End
      Begin VB.Line Line2 
         BorderColor     =   &H000000FF&
         X1              =   3030
         X2              =   3030
         Y1              =   735
         Y2              =   955
      End
      Begin VB.Line Line1 
         BorderColor     =   &H000000FF&
         X1              =   2700
         X2              =   2980
         Y1              =   720
         Y2              =   720
      End
      Begin VB.Label Label3 
         AutoSize        =   -1  'True
         BackStyle       =   0  'Transparent
         Caption         =   "X"
         BeginProperty Font 
            Name            =   "Arial"
            Size            =   9
            Charset         =   0
            Weight          =   700
            Underline       =   0   'False
            Italic          =   0   'False
            Strikethrough   =   0   'False
         EndProperty
         Height          =   225
         Left            =   2985
         TabIndex        =   6
         Top             =   600
         Width           =   120
      End
      Begin VB.Label Label2 
         AutoSize        =   -1  'True
         BackStyle       =   0  'Transparent
         Caption         =   "Vector1"
         BeginProperty Font 
            Name            =   "Arial"
            Size            =   8.25
            Charset         =   0
            Weight          =   700
            Underline       =   0   'False
            Italic          =   0   'False
            Strikethrough   =   0   'False
         EndProperty
         Height          =   210
         Left            =   2040
         TabIndex        =   2
         Top             =   600
         Width           =   645
      End
      Begin VB.Label Label1 
         AutoSize        =   -1  'True
         BackStyle       =   0  'Transparent
         Caption         =   "Constants"
         BeginProperty Font 
            Name            =   "Arial"
            Size            =   9
            Charset         =   0
            Weight          =   700
            Underline       =   0   'False
            Italic          =   0   'False
            Strikethrough   =   0   'False
         EndProperty
         Height          =   225
         Left            =   75
         TabIndex        =   1
         Top             =   120
         Width           =   870
      End
   End
   Begin VB.Frame Frame2 
      BackColor       =   &H00E0E0E0&
      Height          =   2535
      Left            =   0
      TabIndex        =   24
      Top             =   1470
      Width           =   9735
      Begin VB.Frame fraFunctions 
         BackColor       =   &H00E0E0E0&
         Caption         =   "Is Collision"
         BeginProperty Font 
            Name            =   "Arial"
            Size            =   8.25
            Charset         =   0
            Weight          =   700
            Underline       =   0   'False
            Italic          =   0   'False
            Strikethrough   =   0   'False
         EndProperty
         Height          =   975
         Index           =   5
         Left            =   6720
         TabIndex        =   40
         Top             =   1440
         Width           =   2895
         Begin VB.CommandButton cmdCompute 
            BackColor       =   &H00E0E0E0&
            Caption         =   "Compute"
            BeginProperty Font 
               Name            =   "Arial"
               Size            =   8.25
               Charset         =   0
               Weight          =   700
               Underline       =   0   'False
               Italic          =   0   'False
               Strikethrough   =   0   'False
            EndProperty
            Height          =   255
            Index           =   5
            Left            =   120
            Style           =   1  'Graphical
            TabIndex        =   41
            Top             =   280
            Width           =   1095
         End
         Begin VB.Label lblResult 
            AutoSize        =   -1  'True
            BackColor       =   &H00E0E0E0&
            Caption         =   "Result - N/A"
            BeginProperty Font 
               Name            =   "Arial"
               Size            =   8.25
               Charset         =   0
               Weight          =   700
               Underline       =   0   'False
               Italic          =   0   'False
               Strikethrough   =   0   'False
            EndProperty
            Height          =   210
            Index           =   5
            Left            =   120
            TabIndex        =   42
            Top             =   645
            Width           =   945
         End
      End
      Begin VB.Frame fraFunctions 
         BackColor       =   &H00E0E0E0&
         Caption         =   "Magnitude Vector 1"
         BeginProperty Font 
            Name            =   "Arial"
            Size            =   8.25
            Charset         =   0
            Weight          =   700
            Underline       =   0   'False
            Italic          =   0   'False
            Strikethrough   =   0   'False
         EndProperty
         Height          =   975
         Index           =   4
         Left            =   3360
         TabIndex        =   37
         Top             =   1440
         Width           =   3015
         Begin VB.CommandButton cmdCompute 
            BackColor       =   &H00E0E0E0&
            Caption         =   "Compute"
            BeginProperty Font 
               Name            =   "Arial"
               Size            =   8.25
               Charset         =   0
               Weight          =   700
               Underline       =   0   'False
               Italic          =   0   'False
               Strikethrough   =   0   'False
            EndProperty
            Height          =   255
            Index           =   4
            Left            =   120
            Style           =   1  'Graphical
            TabIndex        =   38
            Top             =   280
            Width           =   1095
         End
         Begin VB.Label lblResult 
            AutoSize        =   -1  'True
            BackColor       =   &H00E0E0E0&
            Caption         =   "Result - N/A"
            BeginProperty Font 
               Name            =   "Arial"
               Size            =   8.25
               Charset         =   0
               Weight          =   700
               Underline       =   0   'False
               Italic          =   0   'False
               Strikethrough   =   0   'False
            EndProperty
            Height          =   210
            Index           =   4
            Left            =   120
            TabIndex        =   39
            Top             =   645
            Width           =   945
         End
      End
      Begin VB.Frame fraFunctions 
         BackColor       =   &H00E0E0E0&
         Caption         =   "Normalize Vector 1"
         BeginProperty Font 
            Name            =   "Arial"
            Size            =   8.25
            Charset         =   0
            Weight          =   700
            Underline       =   0   'False
            Italic          =   0   'False
            Strikethrough   =   0   'False
         EndProperty
         Height          =   975
         Index           =   3
         Left            =   120
         TabIndex        =   34
         Top             =   1440
         Width           =   2895
         Begin VB.CommandButton cmdCompute 
            BackColor       =   &H00E0E0E0&
            Caption         =   "Compute"
            BeginProperty Font 
               Name            =   "Arial"
               Size            =   8.25
               Charset         =   0
               Weight          =   700
               Underline       =   0   'False
               Italic          =   0   'False
               Strikethrough   =   0   'False
            EndProperty
            Height          =   255
            Index           =   3
            Left            =   120
            Style           =   1  'Graphical
            TabIndex        =   35
            Top             =   280
            Width           =   1095
         End
         Begin VB.Label lblResult 
            AutoSize        =   -1  'True
            BackColor       =   &H00E0E0E0&
            Caption         =   "Result - N/A"
            BeginProperty Font 
               Name            =   "Arial"
               Size            =   8.25
               Charset         =   0
               Weight          =   700
               Underline       =   0   'False
               Italic          =   0   'False
               Strikethrough   =   0   'False
            EndProperty
            Height          =   210
            Index           =   3
            Left            =   120
            TabIndex        =   36
            Top             =   645
            Width           =   945
         End
      End
      Begin VB.Frame fraFunctions 
         BackColor       =   &H00E0E0E0&
         Caption         =   "Average"
         BeginProperty Font 
            Name            =   "Arial"
            Size            =   8.25
            Charset         =   0
            Weight          =   700
            Underline       =   0   'False
            Italic          =   0   'False
            Strikethrough   =   0   'False
         EndProperty
         Height          =   975
         Index           =   2
         Left            =   6720
         TabIndex        =   31
         Top             =   240
         Width           =   2895
         Begin VB.CommandButton cmdCompute 
            BackColor       =   &H00E0E0E0&
            Caption         =   "Compute"
            BeginProperty Font 
               Name            =   "Arial"
               Size            =   8.25
               Charset         =   0
               Weight          =   700
               Underline       =   0   'False
               Italic          =   0   'False
               Strikethrough   =   0   'False
            EndProperty
            Height          =   255
            Index           =   2
            Left            =   120
            Style           =   1  'Graphical
            TabIndex        =   32
            Top             =   280
            Width           =   1095
         End
         Begin VB.Label lblResult 
            AutoSize        =   -1  'True
            BackColor       =   &H00E0E0E0&
            Caption         =   "Result - N/A"
            BeginProperty Font 
               Name            =   "Arial"
               Size            =   8.25
               Charset         =   0
               Weight          =   700
               Underline       =   0   'False
               Italic          =   0   'False
               Strikethrough   =   0   'False
            EndProperty
            Height          =   210
            Index           =   2
            Left            =   120
            TabIndex        =   33
            Top             =   645
            Width           =   945
         End
      End
      Begin VB.Frame fraFunctions 
         BackColor       =   &H00E0E0E0&
         Caption         =   "Subtract"
         BeginProperty Font 
            Name            =   "Arial"
            Size            =   8.25
            Charset         =   0
            Weight          =   700
            Underline       =   0   'False
            Italic          =   0   'False
            Strikethrough   =   0   'False
         EndProperty
         Height          =   975
         Index           =   1
         Left            =   3360
         TabIndex        =   28
         Top             =   240
         Width           =   3015
         Begin VB.CommandButton cmdCompute 
            BackColor       =   &H00E0E0E0&
            Caption         =   "Compute"
            BeginProperty Font 
               Name            =   "Arial"
               Size            =   8.25
               Charset         =   0
               Weight          =   700
               Underline       =   0   'False
               Italic          =   0   'False
               Strikethrough   =   0   'False
            EndProperty
            Height          =   255
            Index           =   1
            Left            =   120
            Style           =   1  'Graphical
            TabIndex        =   29
            Top             =   280
            Width           =   1095
         End
         Begin VB.Label lblResult 
            AutoSize        =   -1  'True
            BackColor       =   &H00E0E0E0&
            Caption         =   "Result - N/A"
            BeginProperty Font 
               Name            =   "Arial"
               Size            =   8.25
               Charset         =   0
               Weight          =   700
               Underline       =   0   'False
               Italic          =   0   'False
               Strikethrough   =   0   'False
            EndProperty
            Height          =   210
            Index           =   1
            Left            =   120
            TabIndex        =   30
            Top             =   645
            Width           =   945
         End
      End
      Begin VB.Frame fraFunctions 
         BackColor       =   &H00E0E0E0&
         Caption         =   "Add"
         BeginProperty Font 
            Name            =   "Arial"
            Size            =   8.25
            Charset         =   0
            Weight          =   700
            Underline       =   0   'False
            Italic          =   0   'False
            Strikethrough   =   0   'False
         EndProperty
         Height          =   975
         Index           =   0
         Left            =   120
         TabIndex        =   25
         Top             =   240
         Width           =   2895
         Begin VB.CommandButton cmdCompute 
            BackColor       =   &H00E0E0E0&
            Caption         =   "Compute"
            BeginProperty Font 
               Name            =   "Arial"
               Size            =   8.25
               Charset         =   0
               Weight          =   700
               Underline       =   0   'False
               Italic          =   0   'False
               Strikethrough   =   0   'False
            EndProperty
            Height          =   255
            Index           =   0
            Left            =   120
            Style           =   1  'Graphical
            TabIndex        =   26
            Top             =   280
            Width           =   1095
         End
         Begin VB.Label lblResult 
            AutoSize        =   -1  'True
            BackColor       =   &H00E0E0E0&
            Caption         =   "Result - N/A"
            BeginProperty Font 
               Name            =   "Arial"
               Size            =   8.25
               Charset         =   0
               Weight          =   700
               Underline       =   0   'False
               Italic          =   0   'False
               Strikethrough   =   0   'False
            EndProperty
            Height          =   210
            Index           =   0
            Left            =   120
            TabIndex        =   27
            Top             =   645
            Width           =   945
         End
      End
   End
End
Attribute VB_Name = "frmMain"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Option Explicit

'This is just a little demo, nothing major

Private Sub cmdCompute_Click(Index As Integer)
 Dim V2Vector1 As D3DVECTOR2
 Dim V2Vector2 As D3DVECTOR2
 Dim V2retVector As D3DVECTOR2
  
 Dim V3Vector1 As D3DVECTOR
 Dim V3Vector2 As D3DVECTOR
 Dim V3retVector As D3DVECTOR
  
 Dim V4Vector1 As D3DVECTOR4
 Dim V4Vector2 As D3DVECTOR4
 Dim V4retVector As D3DVECTOR4
  
 Dim IsV2 As Boolean 'Is Vector 2
 Dim IsV3 As Boolean 'Is Vector 3
 Dim IsV4 As Boolean 'Is Vector 4
 
 If optVectorType(0).Value Then
  IsV2 = True
  V2Vector1 = UXMath.V2_Vector(CSng(txtX(0).Text), CSng(txtY(0).Text))
  V2Vector2 = UXMath.V2_Vector(CSng(txtX(1).Text), CSng(txtY(1).Text))
 ElseIf optVectorType(1).Value Then
  IsV3 = True
  V3Vector1 = UXMath.V3_Vector(CSng(txtX(0).Text), CSng(txtY(0).Text), CSng(txtZ(0).Text))
  V3Vector2 = UXMath.V3_Vector(CSng(txtX(1).Text), CSng(txtY(1).Text), CSng(txtZ(1).Text))
 ElseIf optVectorType(2).Value Then
  IsV4 = True
  V4Vector1 = UXMath.V4_Vector(CSng(txtX(0).Text), CSng(txtY(0).Text), CSng(txtZ(0).Text), CSng(txtW(0).Text))
  V4Vector2 = UXMath.V4_Vector(CSng(txtX(1).Text), CSng(txtY(1).Text), CSng(txtZ(1).Text), CSng(txtW(1).Text))
 End If
 
 Select Case Index
  Case 0 'Add
   
   If IsV2 Then
    UXMath.V2_Add V2retVector, V2Vector1, V2Vector2
    lblResult(Index).Caption = "Result - " & V2retVector.X & ", " & V2retVector.Y
   ElseIf IsV3 Then
    UXMath.V3_Add V3retVector, V3Vector1, V3Vector2
    lblResult(Index).Caption = "Result - " & V3retVector.X & ", " & V3retVector.Y & ", " & V3retVector.Z
   ElseIf IsV4 Then
    UXMath.V4_Add V4retVector, V4Vector1, V4Vector2
    lblResult(Index).Caption = "Result - " & V4retVector.X & ", " & V4retVector.Y & ", " & V4retVector.Z & ", " & V4retVector.W
   End If
   
  Case 1 'Subtract
  
   If IsV2 Then
    UXMath.V2_Subtract V2retVector, V2Vector1, V2Vector2
    lblResult(Index).Caption = "Result - " & V2retVector.X & ", " & V2retVector.Y
   ElseIf IsV3 Then
    UXMath.V3_Subtract V3retVector, V3Vector1, V3Vector2
    lblResult(Index).Caption = "Result - " & V3retVector.X & ", " & V3retVector.Y & ", " & V3retVector.Z
   ElseIf IsV4 Then
    UXMath.V4_Subtract V4retVector, V4Vector1, V4Vector2
    lblResult(Index).Caption = "Result - " & V4retVector.X & ", " & V4retVector.Y & ", " & V4retVector.Z & ", " & V4retVector.W
   End If
   
  Case 2 'Average
  
   If IsV2 Then
    UXMath.V2_Average V2retVector, V2Vector1, V2Vector2
    lblResult(Index).Caption = "Result - " & V2retVector.X & ", " & V2retVector.Y
   ElseIf IsV3 Then
    UXMath.V3_Average V3retVector, V3Vector1, V3Vector2
    lblResult(Index).Caption = "Result - " & V3retVector.X & ", " & V3retVector.Y & ", " & V3retVector.Z
   ElseIf IsV4 Then
    UXMath.V4_Average V4retVector, V4Vector1, V4Vector2
    lblResult(Index).Caption = "Result - " & V4retVector.X & ", " & V4retVector.Y & ", " & V4retVector.Z & ", " & V4retVector.W
   End If
   
  Case 3 'Normalize
  
   If IsV2 Then
    UXMath.V2_Normalize V2Vector1
    lblResult(Index).Caption = "Result - " & Format(V2Vector1.X, "0.00") & ", " & Format(V2Vector1.Y, "0.00")
   ElseIf IsV3 Then
    UXMath.V3_Normalize V3Vector1
    lblResult(Index).Caption = "Result - " & Format(V3Vector1.X, "0.00") & ", " & Format(V3Vector1.Y, "0.00") & ", " & Format(V3Vector1.Z, "0.00")
   ElseIf IsV4 Then
    UXMath.V4_Normalize V4Vector1
    lblResult(Index).Caption = "Result - " & Format(V4Vector1.X, "0.00") & ", " & Format(V4Vector1.Y, "0.00") & ", " & Format(V4Vector1.Z, "0.00") & ", " & Format(V4Vector1.W, "0.00")
   End If
   
  Case 4 'Magnitude
  
   If IsV2 Then
    lblResult(Index).Caption = "Result - " & Format(UXMath.V2_Magnitude(V2Vector1), "0.00000")
   ElseIf IsV3 Then
    lblResult(Index).Caption = "Result - " & Format(UXMath.V3_Magnitude(V3Vector1), "0.00000")
   ElseIf IsV4 Then
    lblResult(Index).Caption = "Result - " & Format(UXMath.V4_Magnitude(V4Vector1), "0.00000")
   End If
   
  Case 5 'Collision
  
   If IsV2 Then
    lblResult(Index).Caption = "Result - " & UXMath.V2_IsCollisionEX(V2Vector1, 1, V2Vector2, 1)
   ElseIf IsV3 Then
    lblResult(Index).Caption = "Result - " & UXMath.V3_IsCollisionEX(V3Vector1, 1, V3Vector2, 1)
   ElseIf IsV4 Then
    lblResult(Index).Caption = "Result - " & UXMath.V4_IsCollisionEX(V4Vector1, 1, V4Vector2, 1)
   End If
   
 End Select
 
End Sub

Private Sub Form_Resize()
 Dummy.SetFocus
End Sub

Private Sub optVectorType_Click(Index As Integer)
 
 Dummy.SetFocus
 Select Case Index
  Case 0
   txtZ(0).BackColor = &HE0E0E0
   txtZ(1).BackColor = &HE0E0E0
   txtZ(0).Enabled = False
   txtZ(1).Enabled = False
   
   txtW(0).BackColor = &HE0E0E0
   txtW(1).BackColor = &HE0E0E0
   txtW(0).Enabled = False
   txtW(1).Enabled = False
  Case 1
   txtZ(0).BackColor = &H80000005
   txtZ(1).BackColor = &H80000005
   txtZ(0).Enabled = True
   txtZ(1).Enabled = True
   
   txtW(0).BackColor = &HE0E0E0
   txtW(1).BackColor = &HE0E0E0
   txtW(0).Enabled = False
   txtW(1).Enabled = False
  Case 2
   txtZ(0).BackColor = &H80000005
   txtZ(1).BackColor = &H80000005
   txtZ(0).Enabled = True
   txtZ(1).Enabled = True
   
   txtW(0).BackColor = &H80000005
   txtW(1).BackColor = &H80000005
   txtW(0).Enabled = True
   txtW(1).Enabled = True
 End Select

End Sub
