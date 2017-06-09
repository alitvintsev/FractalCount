
#include "stdafx.h"
#include <iostream>
//#include <unistd.h>
#include <fstream>

using std::cout;
using std::endl;
using std::ofstream;
using std::ifstream;
/*
#pragma pack(1)
#pragma once

typedef int LONG;
typedef unsigned short WORD;
typedef unsigned int DWORD;

typedef struct tagBITMAPFILEHEADER {
	WORD bfType;
	DWORD bfSize;
	WORD bfReserved1;
	WORD bfReserved2;
	DWORD bfOffBits;
} BITMAPFILEHEADER, *PBITMAPFILEHEADER;

typedef struct tagBITMAPINFOHEADER {
	DWORD biSize;
	LONG biWidth;
	LONG biHeight;
	WORD biPlanes;
	WORD biBitCount;
	DWORD biCompression;
	DWORD biSizeImage;
	LONG biXPelsPerMeter;
	LONG biYPelsPerMeter;
	DWORD biClrUsed;
	DWORD biClrImportant;
} BITMAPINFOHEADER, *PBITMAPINFOHEADER;

unsigned char** reds;
unsigned char** greens;
unsigned char** blues;
int rows;
int cols;

void ColorTest() {
	// Makes Red Rectangle in top left corner. Rectangle stretches to right alot
	for (int i = rows / 10; i < 3 * rows / 10; i++)
		for (int j = cols / 10; j < 7 * cols / 10; j++)
			reds[i][j] = 0xff;

	// Makes small green box in bottom right
	for (int i = 8 * rows / 10; i < rows; i++)
		for (int j = 8 * cols / 10; j < cols; j++)
			greens[i][j] = 0xff;

	// Makes White box in the middle of the screeene    
	for (int i = rows * 4 / 10; i < rows * 6 / 10; i++)
		for (int j = cols * 4 / 10; j < cols * 6 / 10; j++) {
			greens[i][j] = 0xff;
			reds[i][j] = 0xff;
			blues[i][j] = 0xff;
		}

		// Blue verticle rectangle bottom left
		for (int i = rows * 6 / 10; i < rows; i++)
			for (int j = cols * 0; j < cols * 1 / 10; j++)
				blues[i][j] = 0xff;
}

void RGB_Allocate(unsigned char**& dude) {
	dude = new unsigned char*[rows];
	for (int i = 0; i < rows; i++)
		dude[i] = new unsigned char[cols];
}

bool FillAndAllocate(char*& buffer, const char* Picture, int& rows, int& cols, int& BufferSize) { //Returns 1 if executed sucessfully, 0 if not sucessfull
	std::ifstream file(Picture);

	if (file) {
		file.seekg(0, std::ios::end);
		std::streampos length = file.tellg();
		file.seekg(0, std::ios::beg);

		buffer = new char[length];
		file.read(&buffer[0], length);

		PBITMAPFILEHEADER file_header;
		PBITMAPINFOHEADER info_header;

		file_header = (PBITMAPFILEHEADER) (&buffer[0]);
		info_header = (PBITMAPINFOHEADER) (&buffer[0] + sizeof(BITMAPFILEHEADER));
		rows = info_header->biHeight;
		cols = info_header->biWidth;
		BufferSize = file_header->bfSize;
		return 1;
	}
	else {
		cout << "File" << Picture << " don't Exist!" << endl;
		return 0;
	}
}

void GetPixlesFromBMP24(unsigned char** reds, unsigned char** greens, unsigned char** blues, int end, int rows, int cols, char* FileReadBuffer) { // end is BufferSize (total size of file)
	int count = 1;
	int extra = cols % 4; // The nubmer of bytes in a row (cols) will be a multiple of 4.
	for (int i = 0; i < rows; i++){
		count += extra;
		for (int j = cols - 1; j >= 0; j--)
			for (int k = 0; k < 3; k++) {
				switch (k) {
				case 0:
					reds[i][j] = FileReadBuffer[end - count++];
					break;
				case 1:
					greens[i][j] = FileReadBuffer[end - count++];
					break;
				case 2:
					blues[i][j] = FileReadBuffer[end - count++];
					break;
				}
			}
	}
}

void WriteOutBmp24(char* FileBuffer, const char* NameOfFileToCreate, int BufferSize) {
	std::ofstream write(NameOfFileToCreate);
	if (!write) {
		cout << "Failed to write " << NameOfFileToCreate << endl;
		return;
	}
	int count = 1;
	int extra = cols % 4; // The nubmer of bytes in a row (cols) will be a multiple of 4.
	for (int i = 0; i < rows; i++){
		count += extra;
		for (int j = cols - 1; j >= 0; j--)
			for (int k = 0; k < 3; k++) {
				switch (k) {
				case 0: //reds
					FileBuffer[BufferSize - count] = reds[i][j];
					break;
				case 1: //green
					FileBuffer[BufferSize - count] = greens[i][j];
					break;
				case 2: //blue
					FileBuffer[BufferSize - count] = blues[i][j];
					break;
				}
				count++;
			}
	}
	write.write(FileBuffer, BufferSize);
}


int main(int args, char** cat) {
	char* FileBuffer; int BufferSize;

#define Picture "ReadInPicture.bmp"
	if (!FillAndAllocate(FileBuffer, Picture, rows, cols, BufferSize)){cout << "File read error" << endl; return 0;}
	cout << "Rows: " << rows << " Cols: " << cols << endl;

	RGB_Allocate(reds);
	RGB_Allocate(greens);
	RGB_Allocate(blues);
	GetPixlesFromBMP24( reds,  greens, blues,BufferSize, rows, cols, FileBuffer);
	ColorTest();
#define WriteOutFile "OutputPicture.bmp"
	WriteOutBmp24(FileBuffer,  WriteOutFile,BufferSize);
	return 1;
}
*/