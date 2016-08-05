#include <iostream>
#include <ctime>
#include <cstdlib>



using namespace std;


int main () {
    
    // make a list of true random numbers
    

    int num;
    
    srand(time(0));
    
    for(int x=0; x < 200; x++){
        
    num = (rand() % 50);  
    
    
    
    cout << "Random number: " << (x+1) << "  " <<num << "    ";
        
        if(num==35) {
            
            cout << "You found the magic number!!!" << endl;
            break;
        }
        
    }
    
    
    
    
}