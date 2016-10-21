# include <iostream>
# include <chrono>
# include <thread>
using namespace std;

int main(){
    int desiredTime = 0;
    for(cin>>desiredTime;desiredTime>0;desiredTime--){
        std::this_thread::sleep_for (std::chrono::seconds(1));
        cout<<"There are "<<desiredTime<<" seconds left."<<endl;
    }
    return 0;
}