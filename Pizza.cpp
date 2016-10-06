# include <iostream>
# include <math.h>
//# include <tgmath.h>
using namespace std;

int pizza(){
    cout<<"How many slices does everyone want?"<<endl;
    double slice = 1;
    cin>>slice;
    cout<<endl<<"It looks like everyone wants "<<slice<<" slices of pizza."<<endl<<"How many people are you feeding?"<<endl;
    double people=1;
    cin>>people;
    cout<<endl<<"You are feeding "<<people<<" people."<<endl<<"How many slices are in a box?"<<endl;
    double sliceBox=1;
    cin>>sliceBox;
    cout<<endl<<"There are "<<sliceBox<<" slices in a box."<<endl<<"What is the cost of a box?"<<endl;
    double costPerBox=1;
    cin>>costPerBox;
    double boxes=ceil((slice*people)/sliceBox);
    double cost=((boxes*costPerBox)*1.0825)/people;
    double costTotal=boxes*costPerBox;
    cout<<endl<<"You will need "<<boxes<<" boxes."<<endl<<"It will cost "<<costTotal<<"."<<endl;
    cout<<"It will cost "<<cost<<" per person with tax included."<<endl;
    return 0;
}

int main(){
    pizza();
    return 0;
}
//-std=c++11