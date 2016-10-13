# include <iostream>
# include <chrono>
using namespace std;

int main(){
    int desiredTime = 0;
    cin >> desiredTime;
    chrono::high_resolution_clock     hi_res_clock;
     chrono::steady_clock              monotonic_clock;
      chrono::system_clock              wall_clock;
    for(int desiredTime;desiredTime>0;desiredTime--)
        chrono::time_point<chrono::steady_clock, chrono::duration<int,nano>> lastTime;
        chrono::time_point<chrono::steady_clock, chrono::duration<int,nano>> currentTime;
        currentTime = hi_res_clock.now();
        lastTime = currentTime;
        chrono::duration<int,nano> timeDelta = currentTime - lastTime;
        while(timeDelta<1ms){
            currentTime = hi_res_clock.now();
            timeDelta =currentTime-lastTime;
        }
        cout<<"There are "<<desiredTime<<" seconds left."
        
    }
    return 0;
}