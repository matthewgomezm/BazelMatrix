#include <Eigen/Dense>
#include <iostream>
#include <cstdlib>
using namespace std;

int main() 
{
    //A is a 1x10 row vector   
    Eigen::Matrix<int, 1, 10> A;
    A << 7, 3,5, 7, 9,9,5, 2, 2, 3;
    
    // B is a 10x1 column vector
    Eigen::Matrix<int, 10, 1> B;
    B << 8, 3,8,3,9, 4,2, 3, 6, 5;
    
  //  Eigen::Matrix<int,10,10> C;
  //  Eigen::Matrix<int, 10,10> D
   //creating 2 more matrices in case for more arithmetic (or edit A and B)
  
    // using dot() function
    int result = A.dot(B);
    cout << "A * B = " << result << endl; //also verifying the result works thru terminal

    //displays alert onto my screen
    string alert = "osascript -e 'display alert \"A * B = " + to_string(result) + "\"'";
    system(alert.c_str());
    return 0;
}
