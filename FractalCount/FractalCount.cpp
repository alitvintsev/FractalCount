// FractalCount.cpp: главный файл проекта.

#include "stdafx.h"
#include "Form1.h"
//#include <winuser.h>
#include <windows.h>
#include <Vfw.h>
#include <stdlib.h>
#include <tchar.h> 
#include <fstream>
#include <iostream>
#include <string>
#include <array>
#include <vector>
#include <iterator>
#include <string> 
#include <map> 
#include <math.h> 
#include <utility>  // make_pair()

using namespace FractalCount;
using namespace System;
using namespace System::Windows::Forms;
using namespace System::Collections::Generic;



[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Включение визуальных эффектов Windows XP до создания каких-либо элементов управления
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 
	
	// Создание главного окна и его запуск
	Application::Run(gcnew Form1());

	void Fractal_Dimension();

	return 0;
}

void Fractal_Start()
{
	MessageBox::Show("ХЗ", "ХЗ",MessageBoxButtons::OK,MessageBoxIcon::Asterisk);
}

/*


void Fractal_Dimension()
{
	// Initial parameters
	//	IDictionary<double, double> baList = new Dictionary<double, double>();
	MessageBox::Show("Start", "Start", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
//	std::map<double,double> baList;
//	IDictionary<double, double> baList = new Dictionary<double, double>();
	Dictionary<double, double>^ baList = gcnew Dictionary<double, double>();
	Bitmap^ bw; 
	int startSize;
	int finishSize; 
	int step = 1;
	System::String^ dataPath = "D:\\Fractals\\test3.bmp";
	bw = gcnew Bitmap(dataPath, true);
//	bw = gcnew Bitmap (Form1::bitmap1);

	for (int b = startSize; b <= finishSize; b += step)
	{
		int hCount = bw->Height/b;
		int wCount = bw->Width/b;
		bool *filledBoxes = new bool ( wCount + (bw->Width > wCount*b ? 1 : 0), hCount + (bw->Height > hCount*b ? 1 : 0) );

		for (int x = 0; x < bw->Width; x++)
		{
			for (int y = 0; y < bw->Height; y++)
			{
				Color pixelColor = bw->GetPixel (x,y);
				Color fractalColor = Color::FromArgb(0,0,0);
				if (pixelColor == fractalColor)
				{
				int xBox = x/b;
				int yBox = y/b;
				filledBoxes[xBox, yBox] = true;
				}
			}
		}


		int a = 0;
		for (int i = 0; i < filledBoxes[0]; i++)
		{
			for (int j = 0; j < filledBoxes[1]; j++)
			{
				if (filledBoxes[i, j])
				{
					a++;
				}
			}
		}
		double mapA, mapB;
		
		double aD = a;

		mapA = log(1.0/b);
		mapB = log(aD);

		 baList->Add(mapA, mapB);

		// end of for (int b = startSize; b <= finishSize; b += step)
	Application::DoEvents();
	}

	double* y = new double [baList->Count];
	double* x = new double [baList->Count];
	int c = 0;
	
	for each (double key in baList->Keys)
	{
		y[c] = baList[key];
		x[c] = key;
		c++;
	}
	
	

	// NormalEquations2d (y, x)
	//x^t * x

	double* xtx = new double[2, 2];

	for (int i = 0; i < sizeof(x); i++)
	{
		xtx[0, 1] += x[i];
		xtx[0, 0] += x[i] * x[i];
	}
	xtx[1, 0] = xtx[0, 1];
	xtx[1, 1] = sizeof(x);
	
	//inverse
	double* xtxInv = new double[2, 2];
	double d = 1/(xtx[0, 0]*xtx[1, 1] - xtx[1, 0]*xtx[0, 1]);
	xtxInv[0, 0] = xtx[1, 1]*d;
	xtxInv[0, 1] = -xtx[0, 1]*d;
	xtxInv[1, 0] = -xtx[1, 0]*d;
	xtxInv[1, 1] = xtx[0, 0]*d;
	
	//times x^t
	double* xtxInvxt = new double[2, sizeof(x)];
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < sizeof(x); j++)
		{
			xtxInvxt[i, j] = xtxInv[i, 0]*x[j] + xtxInv[i, 1];
		}
	}
	
	//times y
	double* theta = new double [2];
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < sizeof(x); j++)
		{
			theta[i] += xtxInvxt[i, j]*y[j];
		}
	}
	System::String^ resultDimension = System::Convert::ToString(theta[0]);

	MessageBox::Show("Dimension", resultDimension, MessageBoxButtons::OK, MessageBoxIcon::Asterisk);

	// end of NormalEquations2d (y, x)

	// end of void Fractal_Dimension()
}


*/
//////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////
/*
			 #define _countof(array) (sizeof(array)/sizeof(array[0]));

			 

			 String^ fileName = "out.txt";  
			 StreamWriter^ sw = gcnew StreamWriter(fileName);  
			 sw->WriteLine("Starting Box Counting Algorithm"); 
			 sw->WriteLine(DateTime::Now);  

			 label1->Text = "Start processing...";
			 System::Collections::Generic::Dictionary<double, double>^ baList = gcnew  System::Collections::Generic::Dictionary<double, double>();
			 Bitmap^ bw; 
			 int startSize = 5;
			 int finishSize = 100; //100
			 int step = 1;
			 sw->WriteLine("Start Size = "+System::Convert::ToString(startSize));  
			 sw->WriteLine("Finish Size = "+System::Convert::ToString(finishSize)); 
			 sw->WriteLine("Step = "+System::Convert::ToString(step));  
			 System::String^ dataPath = "D:\\Fractals\\graf.bmp";
			 sw->WriteLine("File: "+System::Convert::ToString(dataPath));  
			 bw = gcnew Bitmap(dataPath, true);
			 sw->WriteLine("Width: "+System::Convert::ToString(bw->Width)); 
			 sw->WriteLine("Height: "+System::Convert::ToString(bw->Height));  
			 const unsigned int bitmapMatrix_Width = bw->Width;
			 const unsigned int bitmapMatrix_Height = bw->Height;
			 			 
			 int **bitmapMatrix = new int* [bitmapMatrix_Height]; // строки в массиве
			 for (int count = 0; count < bitmapMatrix_Height; count++)
				 bitmapMatrix[count] = new int [bitmapMatrix_Width]; // столбцы в массиве
			 
		  // bitmapMatrix = (int **)malloc(sizeof(int*)*N);
			 
			 for (int x = 0; x < bw->Width; x++)
			 {
				 for (int y = 0; y < bw->Height; y++)
				 {
					 
					 Color pixelColor = bw->GetPixel (x,y); // y x
					 Color fractalColor = Color::FromArgb(0,0,0);
					 if (pixelColor == fractalColor)
					 {
					 bitmapMatrix[x][y] = 1;
					 }
					 else if (pixelColor != fractalColor)
					 {
					 bitmapMatrix[x][y] = 0;
					 }
					 					 
				//	 sw->Write(System::Convert::ToString(bitmapMatrix[x][y])); 				 
				 }
		//	 sw->WriteLine(); 	
			 Application::DoEvents();
			 }


			 for (int b = startSize; b <= finishSize; b += step)
			 {
				
				 
				 int hCount = bw->Height/b;
				 int wCount = bw->Width/b;
				 int bitmap_array = bw->Height * bw->Width;
				 int bitmap_pixel = 0;
				 int bitmap_pixel_black = 0;
				 bool* filledBoxes = new bool [ wCount + (bw->Width > wCount*b ? 1 : 0), hCount + (bw->Height > hCount*b ? 1 : 0) ];
				 int fractal_count_fB_0 = wCount + (bw->Width > wCount*b ? 1 : 0);
				 int fractal_count_fB_1 = hCount + (bw->Height > hCount*b ? 1 : 0);
				
				
				 
				 for (int x = 0; x < bw->Width; x++)
				 {
					 for (int y = 0; y < bw->Height; y++)
					 {
						 Color pixelColor = bw->GetPixel (x,y); // x, y
						 Color fractalColor = Color::FromArgb(0,0,0);
						 if (pixelColor == fractalColor)
						 {
							 int xBox = x/b;
							 int yBox = y/b;
							 filledBoxes[xBox, yBox] = true;
							 bitmap_pixel_black++;
						 }
						 bitmap_pixel++;
					 }
			//	label1->Text = "Pixels: " + bitmap_pixel + " / " + bitmap_array + ", " + bitmap_pixel_black + " is black";
			//	Application::DoEvents();
				 }
			//	 sw->WriteLine("Black pixels: "+System::Convert::ToString(bitmap_pixel_black)+" / Pixels: "+System::Convert::ToString(bitmap_pixel));  

				
				 int a = 0;
		

				 for (int i = 0; i < fractal_count_fB_0; i++)
				 {
					 for (int j = 0; j < fractal_count_fB_1; j++)
					 {
						 if (filledBoxes[i, j] == true)
						 {
							 a++;
						 }
					 }
				 }
				 

			

				 double mapA, mapB;

				 double aD = a;

				 mapA = System::Math::Log(1.0/b);
				 mapB = System::Math::Log(aD);

				 baList->Add(mapA, mapB);

				 // end of for (int b = startSize; b <= finishSize; b += step)
			//	 label1->Text = "BoxCounting: b is " + b + " of " + finishSize;
			//	 label1->Text = "Log(1.0/b): " + mapA + ", Log(aD): " + aD;
				 sw->WriteLine("Log(1.0/b): " + mapA + ", Log(aD): " + aD); 
				 Application::DoEvents();
			 }

			
			 

			 double* y = new double [baList->Count];
			 double* x = new double [baList->Count];
			 int c = 0;

			 for each (double key in baList->Keys)
			 {
				 y[c] = baList[key];
				 x[c] = key;
				 c++;
			 }

			 //MessageBox::Show(System::Convert::ToString(y[0]), "Test", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			 
			 // NormalEquations2d (y, x)
			 //x^t * x
			 

			 double* xtx = new double[2, 2];

			 int fractal_count_x = _countof(x);

			 for (int i = 0; i < fractal_count_x; i++)
			 {
				 xtx[0, 1] += x[i];
				 xtx[0, 0] += x[i] * x[i];
			 }
			 xtx[1, 0] = xtx[0, 1];
			 xtx[1, 1] = fractal_count_x;

			 //inverse
			 double* xtxInv = new double[2, 2];
			 double d = 1/(xtx[0, 0]*xtx[1, 1] - xtx[1, 0]*xtx[0, 1]);
			 xtxInv[0, 0] = xtx[1, 1]*d;
			 xtxInv[0, 1] = -xtx[0, 1]*d;
			 xtxInv[1, 0] = -xtx[1, 0]*d;
			 xtxInv[1, 1] = xtx[0, 0]*d;

			 //times x^t
			 double* xtxInvxt = new double[2, fractal_count_x];
			 for (int i = 0; i < 2; i++)
			 {
				 for (int j = 0; j < fractal_count_x; j++)
				 {
					 xtxInvxt[i, j] = xtxInv[i, 0]*x[j] + xtxInv[i, 1];
				 }
			 }

			 //times y
			 double* theta = new double [2];
			 for (int i = 0; i < 2; i++)
			 {
				 for (int j = 0; j < fractal_count_x; j++)
				 {
					 theta[i] += xtxInvxt[i, j]*y[j];
				 }
			 }

			 

			 System::String^ resultDimension = System::Convert::ToString(theta[0]);
			 System::String^ resultDelta = System::Convert::ToString(theta[1]);
			 label1->Text = "Dimension is: "+resultDimension+", delta is: "+resultDelta;
			 sw->Close();  // close Stream Writer sw
			 

			 // end of NormalEquations2d (y, x)

			 // end of void Fractal_Dimension()
		 

///////////////////////////////////////////////////////////////////////////////////////////////////
			
			 //  bitmap1->PixelFormat = pf24bit;
				 
				 progressBar1->Maximum = bitmap1->Width - 1;
				 for (int x=0; x<bitmap1->Width; x++) 
				 {
					 for (int y=0; y<bitmap1->Height; y++)
					 {
						 Color pixelColor = bitmap1->GetPixel (x,y);
						 Color fractalColor = Color::FromArgb(0,0,0);
						 
						 if (pixelColor == fractalColor)
						 {
						 bitmap_pixel_black++;
						 }
						 
						 //bitmap1->SetPixel (x,y, fractalColor);
						 label1->Text = "Pixels: " + bitmap_pixel_ptr + " / " + bitmap_array_ptr + ", " + bitmap_pixel_black + " is black";
						 bitmap_pixel_ptr++;
						 Application::DoEvents();
						// Color newColor = Color::FromArgb(pixelColor.R,pixelColor.G,pixelColor.B);
						 
					 }
					 progressBar1->Value = x;
					 //pictureBox1->Image = bitmap1;
				 }

		 //MessageBox::Show("ХЗ", "ХЗ",MessageBoxButtons::OK,MessageBoxIcon::Asterisk); 
		 


*/