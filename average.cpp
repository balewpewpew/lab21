#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc,char* agrc[]){
    int avg,sum=0;
    if(argc-1>0){
        for(int i=1;i<argc;i++){
            sum += atoi(agrc[i]);
        }
        avg = sum/(argc-1);
        cout << "---------------------------------" << endl;
        cout << "Average of " << argc-1 << " numbers = " << avg << endl;
        cout << "---------------------------------" << endl;
    }else{
        cout << "Please input numbers to find average." << endl;
    }
    
    return 0;
}
