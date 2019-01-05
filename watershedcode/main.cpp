#include <iostream>
#include "cv.h"
#include "highgui.h"
int main()
{
    IplImage* img = cvLoadImage("test.jpg");
    cvNamedWindow( "test", 0 );
    cvShowImage("test", img);
    cvWaitKey(0);
    cvReleaseImage( &img );
    cvDestroyWindow( "test" );
    return 0;
}

//---------------------
//作者：goomaple
//来源：CSDN
//原文：https://blog.csdn.net/goomaple/article/details/45642499
//版权声明：本文为博主原创文章，转载请附上博文链接！
