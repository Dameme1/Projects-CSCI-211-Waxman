//Tameem Ahmed
//Recursive 8 Queens

#include <iostream> 
#include <cmath>
using namespace std;

bool ok(int q[], int c){.  //standard 'ok' function, does all the tests (diagonals and row checks)
    for(int i = 0; i < c; i++){
        if(q[c] == q[i] || abs(q[c] - q[i]) == (c-i)){
            return false;
        }
    }

    return true;
}

void print(int q[]){ //Prints each solution 
    static int sol_num = 0;
    cout << "Solution #: " << ++sol_num << endl;


    for(int i = 0; i < 8; i++){
        for(int j = 0; j < 8; j++){
            if(q[j] == i) cout << " X ";
            else cout << " O ";
        }
        cout << endl;
    }
    cout << endl;
}

void next(int q[], int c){             //this is the recursive call
    if(c == 8){                        
        print(q);
    }
    else{
        for(q[c] = 0; q[c] < 8; q[c]++){
            if(ok(q, c)) next(q, c + 1);
        }
    }
}


int main(){
    int q[8];
    next(q,0);
    return 0;
}

