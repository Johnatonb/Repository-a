# include <iostream>
# include <cmath>
using namespace std;

class complex{
    public:
    float real1;
    float real2;
    float im1;
    float im2;
    mult(float real1,float real2,float im1,float im2){
        float realnew = (real1 * real2)-(im1 * im2);
        float imnew = (real1 * im1) + (real2 * im2);
        cout<<realnew<<"+"<<imnew<<endl;
    }
}

int main(){
    complex.mult(cin>>real1,cin>>real2,cin>>im1,cin>>im2);
    return 0;
}
