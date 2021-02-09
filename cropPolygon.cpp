#include <opencv2/opencv.hpp>
#include <iostream>
#include <random>


using namespace std;
using namespace cv;

cv::Mat MyPolygon( Mat img )
{
  int lineType = 8;
// [(892, 145), (965, 150), (933, 199), (935, 238), (970, 248), (1219, 715), (836, 709), (864, 204)]

  /** Create some points */
  Point rook_points[1][8];
  rook_points[0][0] = Point(892, 145);
  rook_points[0][1] = Point(965, 150);
  rook_points[0][2] = Point(933, 199);
  rook_points[0][3] = Point(935, 238);
  rook_points[0][4] = Point(970, 248);
  rook_points[0][5] = Point(1219, 715);
  rook_points[0][6] = Point(836, 709);
  rook_points[0][7] = Point(864, 204);

  const Point* ppt[1] = { rook_points[0] };
  int npt[] = { 8 };

  cv::Mat mask = cv::Mat::zeros(img.size(), img.type());

  fillPoly( mask,
            ppt,
            npt,
            1,
            Scalar( 255, 0, 0 ),
            lineType
            );

    cv::bitwise_and(mask,img, img);
    
    return img; 
 }

 int main() {
    /* code */
    cv::Mat srcImage = cv::imread("/home/gourav/Pictures/L1 Image.png", cv::IMREAD_GRAYSCALE);
    resize(srcImage, srcImage, Size(1280, 720));
    // cout << " Width : " << srcImage.cols << endl;
    // cout << " Height: " << srcImage.rows << endl;

    if (srcImage.empty()){
        std::cerr<<"Ref Image not found\n";
        return 1;
    }
    cv::Mat img = MyPolygon(srcImage);
    
    Mat grayBlur;
    GaussianBlur(srcImage, grayBlur, Size(5, 5), 0);

    VideoCapture cap("/home/gourav/GenralCode/LD3LF1_stream1.mp4"); 
    Mat frames;
    if(!cap.isOpened()){

        std::cout << "Error opening video stream or file" << endl;

        return -1;
    }
    while (1)
    {
        cap >> frames;
        if (frames.empty())
            break;
        
        // Convert current frame to grayscale
        cvtColor(frames, frames, COLOR_BGR2GRAY);

        // cout << "Frame Width : " << frames.cols << endl;
        // cout << "Frame Height: " << frames.rows << endl;

        Mat imageBlure;
        GaussianBlur(frames, imageBlure, Size(5, 5), 0);

        cv::Mat frame = MyPolygon(imageBlure);

        Mat dframe;
        absdiff(frame, grayBlur, dframe);
        
        // imshow("grayBlur", grayBlur);

        // Threshold to binarize
        threshold(dframe, dframe, 30, 255, THRESH_BINARY);        
        
        //White Pixels
        int number = cv::countNonZero(dframe);
        cout<<"Count: "<< number <<"\n";
        if (number > 3000)
        {
            cout<<"generate Alert ";
        }
        // Display Image
        imshow("dframe", dframe);

        char c=(char)waitKey(25);
        if (c==27)
            break;
    }
    cap.release();
    return 0;

 }