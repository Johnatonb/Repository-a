# include <iostream>
# include <cmath>
using namespace std;
#define PI 3.14159265

int main(){
    double vector1Magnitude;
    double vector2Magnitude;
    double vector1AngleDegrees;
    double vector2AngleDegrees;
    cout<<"Please input the magnitude for the first vector."<<endl;
    cin>>vector1Magnitude;
    cout<<"Please input the angle of the first vector."<<endl;
    cin>>vector1AngleDegrees;
    cout<<"Please input the magnitude for the second vector."<<endl;
    cin>>vector2Magnitude;
    cout<<"Please input the angle of the second vector."<<endl;
    cin>>vector2AngleDegrees;
    double vector1AngleRadians = ( vector1AngleDegrees * PI / 180 );
    double vector2AngleRadians = ( vector2AngleDegrees * PI / 180 );
    double xValue = ( vector1Magnitude * cos(vector1AngleRadians)) + ( vector2Magnitude * cos(vector2AngleRadians));
    double yValue = ( vector1Magnitude * sin(vector1AngleRadians)) + ( vector2Magnitude * sin(vector2AngleRadians));
    cout<<"The coordinates of the resulting vector is ("<<xValue<<","<<yValue<<")."<<endl;
    double resultingMagnitude = sqrt((pow(xValue,2))+(pow(yValue,2)));
    cout<<"The resulting magnitude is "<<resultingMagnitude<<"."<<endl;
    double resultingAngle = ((atan(yValue/xValue)) * 180) / PI ;
    cout<<"The resulting angle is "<<resultingAngle<<"."<<endl;
}

