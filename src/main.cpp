#include <iostream>

#include <opencv2/opencv.hpp>
#include <opencv2/core/cuda.hpp>
#include <opencv2/cudaimgproc.hpp>
#include <opencv2/cudaarithm.hpp>
#include <opencv2/cudafilters.hpp>
#include <opencv2/cudabgsegm.hpp>
#include <opencv2/cudacodec.hpp>
#include <opencv2/cudaobjdetect.hpp>
#include <opencv2/cudaoptflow.hpp>
#include <opencv2/cudastereo.hpp>
#include <opencv2/cudawarping.hpp>
#include <opencv2/cudafeatures2d.hpp>

using namespace std;
using namespace cv;

VideoCapture cap(0);

RNG rng(12345);//random number

int main(int argc, char** argv )
{   

    cuda::printCudaDeviceInfo(0);

    Mat img;
    cuda::GpuMat imgGpu, gray;

    Mat corners;
    cuda::GpuMat cornersGpu;
  
    return 0;
}
