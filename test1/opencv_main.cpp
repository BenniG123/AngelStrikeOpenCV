#include "stdafx.h"
#include "opencv2/highgui/highgui.hpp"
#include <iostream>

using namespace cv;
using namespace std;

int main( int argc, const char** argv )
{
	Mat img(500, 1000, CV_8UC3, Scalar(0,0, 100));

	if (img.empty())
	{
		cout << "Image cannot be loaded..!!" << endl;
		system("pause");
		return -1;
	}

	namedWindow("MyWindow", CV_WINDOW_AUTOSIZE);

	imshow("MyWindow", img);

	waitKey(0);

	destroyWindow("MyWindow");

	return 0;
}