#include<bits/stdc++.h>

using namespace std;
class Petrol{
    public:
        int petrol;
        int distance;
};

int circularPetrol(Petrol p[], int n){
    int start = 0;
    int end = 1;
    int current_petrol = p[start].petrol - p[start].distance;
    while(end != start or current_petrol < 0){

        while (current_petrol < 0 and start != end)
        {
            current_petrol -= p[start].petrol - p[start].distance;
            start = (start + 1) % n;
        }
        
        current_petrol += p[end].petrol - p[end].distance;
        end = (end + 1) % n;
    }
}
int main(){
    
    return 0;
}



