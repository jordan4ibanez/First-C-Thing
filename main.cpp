//This is the first real thing I've done in C++
#include <iostream>
using namespace std;


int main()
{
    int scale  = 10;
    int map[scale][scale];
    bool game_over = false;
    
    
    
    
    for (int x = 0; x < scale; x++){
        for (int y = 0; y < scale; y++){ 
            map[x][y] = 0;
        }
    }
    while (game_over == false){
        for (int x = 0; x < scale; x++){
            for (int y = 0; y < scale; y++){ 
                cout << map[x][y];
                //cout << y;
                if (y == scale-1){
                    cout << "\n";
                }
            }
        }
    }
    
    return(0);
}