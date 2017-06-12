#pragma once

namespace FractalCount {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
		

	/// <summary>
	/// —водка дл€ Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}

	protected: 

	protected: 
	private: System::Windows::Forms::Button^  buttonOpenBitmap;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  buttonStart;
	private: System::Windows::Forms::ProgressBar^  progressBar1;
	private: System::Windows::Forms::Button^  button1;


	private:
		/// <summary>
		/// “ребуетс€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ќб€зательный метод дл€ поддержки конструктора - не измен€йте
		/// содержимое данного метода при помощи редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->buttonOpenBitmap = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->buttonStart = (gcnew System::Windows::Forms::Button());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// buttonOpenBitmap
			// 
			this->buttonOpenBitmap->Location = System::Drawing::Point(12, 12);
			this->buttonOpenBitmap->Name = L"buttonOpenBitmap";
			this->buttonOpenBitmap->Size = System::Drawing::Size(75, 23);
			this->buttonOpenBitmap->TabIndex = 1;
			this->buttonOpenBitmap->Text = L"Open";
			this->buttonOpenBitmap->UseVisualStyleBackColor = true;
			this->buttonOpenBitmap->Click += gcnew System::EventHandler(this, &Form1::buttonOpenBitmap_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// panel1
			// 
			this->panel1->AutoScroll = true;
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Location = System::Drawing::Point(12, 63);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(760, 486);
			this->panel1->TabIndex = 2;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(3, 3);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(754, 480);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(174, 17);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(32, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Pixel:";
			// 
			// buttonStart
			// 
			this->buttonStart->Enabled = false;
			this->buttonStart->Location = System::Drawing::Point(93, 12);
			this->buttonStart->Name = L"buttonStart";
			this->buttonStart->Size = System::Drawing::Size(75, 23);
			this->buttonStart->TabIndex = 4;
			this->buttonStart->Text = L"Start";
			this->buttonStart->UseVisualStyleBackColor = true;
			this->buttonStart->Click += gcnew System::EventHandler(this, &Form1::buttonStart_Click);
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(12, 41);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(760, 16);
			this->progressBar1->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(736, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(36, 23);
			this->button1->TabIndex = 6;
			this->button1->Text = L"\?";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(784, 561);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->progressBar1);
			this->Controls->Add(this->buttonStart);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->buttonOpenBitmap);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"FormMain";
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public:
		 int bitmap_height_ptr, bitmap_width_ptr, bitmap_array_ptr, bitmap_pixel_ptr, bitmap_pixel_black;
	
		// extern 
			 Bitmap^ bitmap1;
			 Bitmap^ bitmap2;
		

	private: System::Void buttonOpenBitmap_Click(System::Object^  sender, System::EventArgs^  e) 
			 {
		
				 openFileDialog1->InitialDirectory = "c:\\";
				 openFileDialog1->Filter = "Bitmap(*.bmp)|*.bmp|All files (*.*)|*.*"; 
				 if(openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
				 {
					 //	this->pictureBox1->ImageLocation = this->openFileDialog1->FileName;
					 Image ^ Img = gcnew Bitmap(openFileDialog1->FileName);
					 pictureBox1->Image = Img;
				 }

				 bitmap1 = gcnew Bitmap (pictureBox1->Image);
				
				/*
				 bitmap_height_ptr = bitmap1->Height;
				 bitmap_width_ptr = bitmap1->Width;
				 bitmap_array_ptr = bitmap_height_ptr * bitmap_width_ptr;
				 bitmap_array_ptr = bitmap_array_ptr - 1;
				 bitmap_pixel_ptr = 0;
				 bitmap_pixel_black = 0;
				 label1->Text = bitmap_pixel_ptr + " / " + bitmap_array_ptr;
				 */
				 buttonStart->Enabled = true;

			 }

private: System::Void buttonStart_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
			#define _countof(array) (sizeof(array)/sizeof(array[0]));
			#define min(a, b)  (((a) < (b)) ? (a) : (b)); 

			int minHorW = min(bitmap1->Height, bitmap1->Width);
			int startSize = 5;
			int finishSize = min(minHorW, 20);
			int step = 1;
			int bitmap_array = bitmap1->Height * bitmap1->Width;
			String^ fileName = "out.txt";  
			StreamWriter^ sw = gcnew StreamWriter(fileName);  
			sw->WriteLine("Starting Box Counting Algorithm"); 
			sw->WriteLine(DateTime::Now);  	 
			
			const unsigned int bitmapMatrix_Height = bitmap1->Height;
			const unsigned int bitmapMatrix_Width = bitmap1->Width;
						
			//int bitmapMatrix [bitmapMatrix_Height][bitmapMatrix_Width];  
			/*
			int **bitmapMatrix = new int* [bitmapMatrix_Width]; // строки в массиве
			for (int count = 0; count < bitmapMatrix_Width; count++)
				bitmapMatrix[count] = new int [bitmapMatrix_Height]; // столбцы в массиве
			
			for (int x = 0; x < bitmapMatrix_Width; x++)
			{
				for (int y = 0; y < bitmapMatrix_Height; y++)
				{
					bitmapMatrix[x][y] = 0;
				}
			}

			for (int x = 0; x < bitmapMatrix_Width; x++)
			{
				for (int y = 0; y < bitmapMatrix_Height; y++)
				{
					Color pixelColor = bitmap1->GetPixel (x,y);
					int int_pixelColor = pixelColor.System::Drawing::Color::ToArgb();

					Color fractalColor = Color::Black;
					int int_fractalColor = fractalColor.System::Drawing::Color::ToArgb();

					if (int_pixelColor == int_fractalColor)
					{
						bitmapMatrix[x][y] = 1;
						
					}
					sw->Write(System::Convert::ToString(bitmapMatrix[x][y])); 
					Application::DoEvents();
				}
				//	label1->Text = "Pixels: " + bitmap_pixel + " / " + bitmap_array + ", " + bitmap_pixel_black + " is black";
				//	Application::DoEvents();
				sw->WriteLine();
			}
			*/

			System::Collections::Generic::Dictionary<double, double>^ baList = gcnew  System::Collections::Generic::Dictionary<double, double>();

			progressBar1->Maximum = finishSize;
			progressBar1->Value = 0;
			for (int b = startSize; b <= finishSize; b += step)
			{
				int hCount = bitmap1->Height/b;
				int wCount = bitmap1->Width/b;
				
				
				int fractal_count_fB_0 = wCount + (bitmap1->Width > wCount*b ? 1 : 0);
				int fractal_count_fB_1 = hCount + (bitmap1->Height > hCount*b ? 1 : 0);

				sw->WriteLine("fractal_count_fB_0: "+System::Convert::ToString(fractal_count_fB_0)+" / fractal_count_fB_1: "+System::Convert::ToString(fractal_count_fB_1)); 

				bool **filledBoxes = new bool* [fractal_count_fB_0]; // строки в массиве
				for (int count = 0; count < fractal_count_fB_0; count++)
					filledBoxes[count] = new bool [fractal_count_fB_1]; // столбцы в массиве
				
				
				
				for (int i = 0; i < fractal_count_fB_0; i++)
				{
					for (int j = 0; j < fractal_count_fB_1; j++)
					{
						filledBoxes[i][j] = false;
						Application::DoEvents();
					}
				}


				int bitmap_pixel = 0;
				int bitmap_pixel_black = 0;
				for (int x = 0; x < bitmapMatrix_Width; x++)
				{
					for (int y = 0; y < bitmapMatrix_Height; y++)
					{
						

						Color pixelColor = bitmap1->GetPixel (x,y);
						int int_pixelColor = pixelColor.System::Drawing::Color::ToArgb();
													
						Color fractalColor = Color::Black;
						int int_fractalColor = fractalColor.System::Drawing::Color::ToArgb();
						
						if (int_pixelColor == int_fractalColor)
						{
						int xBox = x/b;
						int yBox = y/b;
						filledBoxes[xBox][yBox] = true;
						bitmap_pixel_black++;
						}
						bitmap_pixel++;
						
						Application::DoEvents();
					}
					//	label1->Text = "Pixels: " + bitmap_pixel + " / " + bitmap_array + ", " + bitmap_pixel_black + " is black";
					//	Application::DoEvents();
					
				}
			//	sw->WriteLine("Black pixels: "+System::Convert::ToString(bitmap_pixel_black)+" / Pixels: "+System::Convert::ToString(bitmap_pixel)); 
				
				
				int a = 0;


				for (int i = 0; i < fractal_count_fB_0; i++)
				{
					for (int j = 0; j < fractal_count_fB_1; j++)
					{
						if (filledBoxes[i][j] == true)
						{
							a++;
						}
						Application::DoEvents();
					}
				}

				sw->WriteLine("Filled Boxes: "+System::Convert::ToString(a)+" / Box: "+System::Convert::ToString(b));


				double mapA, mapB;

				double aD = System::Convert::ToDouble(a);

				mapA = System::Math::Log(1.0 / System::Convert::ToDouble(b));
				mapB = System::Math::Log(aD);
				baList->Add(mapA, mapB);

				
				// Bitmap graphics

						Image ^ Img2 = gcnew Bitmap(bitmap1);
						Graphics^ bitmap2_Grapghics = Graphics::FromImage(Img2);
						Pen^ pinkPen = gcnew Pen( Color::HotPink );
						Brush^ redBrush = gcnew SolidBrush( Color::Red );
						String ^fractalFile = "Bitmap_" +  System::Convert::ToString(b) + ".bmp"; 

						for (int i = 0; i < fractal_count_fB_0; i++)
						{
						bitmap2_Grapghics->DrawLine(pinkPen, i * b, 0, i * b, Img2->Height);
						}
						for (int j = 0; j < fractal_count_fB_1; j++)
						{
						bitmap2_Grapghics->DrawLine(pinkPen, 0, j * b, Img2->Width, j * b);
						}
						
						/*
						for (int i = 0; i < fractal_count_fB_0; i++)
						{
							for (int j = 0; j < fractal_count_fB_1; j++)
							{
								if (filledBoxes[i][j] == true)
								{
									bitmap2_Grapghics->FillRectangle(redBrush, i * b, j * b, i * b + b, j * b + b);
									
								}
							
								
							}
						}
						*/
						
						bitmap2_Grapghics->DrawImage(Img2, 0, 0);
						pictureBox1->Image = Img2;
						
						
					//	Img2->Save(fractalFile, System::Drawing::Imaging::ImageFormat::Bmp);
					

		//	System::Threading::Thread::Sleep(100);
			progressBar1->Value = b;
			label1->Text = "Box: " + b + " / " + finishSize + "; filled boxes: " + a;
			Application::DoEvents();
			}

			double* y = new double [baList->Count];
			double* x = new double [baList->Count];
			int c = 0;
			
		//	label1->Text = "OK1";

			for each (double key in baList->Keys)
			{
				y[c] = baList[key];
				x[c] = key;
				c++;
			
			}

			/*
			for (int i = 0; i < baList->Count; i++)
			{
			sw->WriteLine("y ["+i+"]: "+System::Convert::ToString(y[i])+" / x ["+i+"]: "+System::Convert::ToString(x[i])); 
			}
			*/

			
			StreamWriter^ swCSV = gcnew StreamWriter("ba.csv");
			swCSV->WriteLine("NumberOfBoxes;LengthOfSideInv");
			
				for each (double bInv in baList->Keys)
				{
					swCSV->WriteLine(baList[bInv] + ";" + bInv);
				}
				
				swCSV->Close();
			

			// NormalEquations2d (y, x)
			//x^t * x
			

			double xtx [2][2];
			xtx [0][0] = 0.0;
			xtx [0][1] = 0.0;
			xtx [1][0] = 0.0;
			xtx [1][1] = 0.0;

			int fractal_count_x = baList->Count;
							
			for (int i = 0; i < fractal_count_x; i++)
			{
			xtx[0][1] += x[i];
			xtx[1][1] += x[i] * x[i];
			}
			xtx[1][0] = xtx[0][1];
			xtx[0][0] = (double)fractal_count_x;

			/*
			sw->WriteLine("xtx [0][0]"+ xtx[0][0]); 
			sw->WriteLine("xtx [0][1]"+ xtx[0][1]); 
			sw->WriteLine("xtx [1][0]"+ xtx[1][0]); 
			sw->WriteLine("xtx [1][1]"+ xtx[1][1]); 
			*/
			
			double d1, d2;
			d1 = 0.0;
			d2 = 0.0;

			for (int i = 0; i < fractal_count_x; i++)
			{
			d1 += y[i];
			d2 += x[i] * y[i];
			}

			double D_BIG, D_1, D_2;

			D_BIG = xtx[0][0] * xtx[1][1] - xtx[1][0] * xtx[0][1];
			D_1 = d1 * xtx[1][1] - d2 * xtx[0][1];
			D_2 = xtx[0][0] * d2 - xtx[1][0] * d1;

			double* theta = new double [2];
			theta[0] = D_1 / D_BIG;
			theta[1] = D_2 / D_BIG;
	
			System::String^ resultDimension = System::Convert::ToString(theta[1]);
			System::String^ resultDelta = System::Convert::ToString(theta[0]);
			label1->Text = "Dimension is: "+resultDimension+", delta is: "+resultDelta;
			sw->WriteLine("Dimension is: "+resultDimension+", delta is: "+resultDelta);
			sw->Close();  // close Stream Writer sw
			


			// end of NormalEquations2d (y, x)

			// end of void Fractal_Dimension()
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) 
		 {
		 MessageBox::Show("Code: Alexander Litvintsev, 2017\nSee GitHub for details", "About", MessageBoxButtons::OK, MessageBoxIcon::Information);
		 }
};
}

