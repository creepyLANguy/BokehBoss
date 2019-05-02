#include "Definitions.h"

int bb::ShowImageInWindow(
  const Mat& image, 
  const char* windowName/*=""*/, 
  const int showTime/*= 0*/, 
  const int windowFlags /*=WINDOW_AUTOSIZE*/)
{
  namedWindow(windowName, windowFlags); // Create a window for display.
  imshow(windowName, image);						      // Show our image inside it.
  return waitKeyEx(showTime);           // Wait until key input or time runs out. Return key pressed.
}


void main()
{

}