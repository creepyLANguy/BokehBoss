#ifndef FUNCTIONDEFINITIONS_H_
#define FUNCTIONDEFINITIONS_H_


#include <opencv2/highgui/highgui.hpp>


using namespace cv;
using namespace std;

const char* kConfigFileName = "../img/config.txt";
const int MAX_FILENAME_LENGTH = 256;
const char* kImagePathPrefix = "../img/";

const int CANVAS_TYPE = CV_8UC3;

struct Pixel
{
	uchar r, g, b;
};

namespace bb
{
  int ShowImageInWindow(
    const Mat& image, 
    const char* windowName = "", 
    const int showTime = 0, 
    const int windowFlags = WINDOW_AUTOSIZE);
}
#endif//FUNCTIONDEFINITIONS_H_