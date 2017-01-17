// LoadImageTest.cpp : Defines the entry point for the console application.
//

// TestOpenCV.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <opencv2/core/core.hpp>
//#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <iostream>
#include <string>
#include "microtimer.h"
using namespace cv;
using namespace std;
int main(int argc, char** argv)
{
	//Excution timer
	//microtimer            microtime;
	//microtimer::size_type start, end, end1, end2, end3, end4, end5, end6;

	string imageName("test.jpg"); // by default
	//imageName = "E:/10.JPG";
	if (argc > 1)
	{
		imageName = argv[1];
	}
	Mat image, imageOriginal;
	image = imread(imageName.c_str(), IMREAD_COLOR); // Read the file
	imageOriginal = image;
	if (image.empty())                      // Check for invalid input
	{
		cout << "Could not open or find the image" << std::endl;
		return -1;
	}
	namedWindow("Display window", WINDOW_AUTOSIZE); // Create a window for display.

	imshow("Display window", image);                // Show our image inside it.
	

	waitKey(0); // Wait for a keystroke in the windowd
	return 0;
}



//#include "stdafx.h"
//#include <opencv2/core.hpp>
//#include <opencv2/imgcodecs.hpp>
//#include <opencv2/highgui.hpp>
//#include <iostream>
//
//using namespace cv;
//using namespace std;
//
//int main(int argc, char** argv)
//{
//	if (argc != 2)
//	{
//		cout << " Usage: display_image ImageToLoadAndDisplay" << endl;
//		return -1;
//	}
//
//	Mat image;
//	image = imread("test.jpg", IMREAD_COLOR); // Read the file
//
//	if (image.empty()) // Check for invalid input
//	{
//		cout << "Could not open or find the image" << std::endl;
//		return -1;
//	}
//
//	namedWindow("Display window", WINDOW_AUTOSIZE); // Create a window for display.
//	imshow("Display window", image); // Show our image inside it.
//
//	waitKey(0); // Wait for a keystroke in the window
//	return 0;
//}


