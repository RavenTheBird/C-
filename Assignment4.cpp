#include<iostream>
#include<cmath>
#include<stdlib.h>
using namespace std;


bool ok(int q[], int c){
    for(int i = 0; i < c; i++){
        if(q[i] == q[c] || (c-i) == abs(q[c] - q[i]))
            return false;
    }
    return true;
}


void print(int q[]){
    static int numSolutions = 0;
    cout << "Solution #" << ++numSolutions << ":\n";
    for(int c = 0; c < 8; c++){
        cout << " q[" << c << "]" << " = " << q[c] << endl;
    }
    cout << "\n";
}



void backtrack(int &col){
    col--;
    if(col == -1)
      exit(1);
}


int main(){

int q[8] = {0};
int c = 0;

while(c >= 0){ //next col
    c++; //Changing the col

if(c == 8){ // check col
  print(q);
  backtrack(c);
}
else q[c] = -1; //Start back at the row before the top row

    while(c >= 0){ //next row
        q[c]++;//Changing the row
        if(q[c] == 8) //check row
        backtrack(c);

        else{
          if(ok(q, c) == true){ //Checks if its a legal position
             break; // Breaks out of the row loop, and goes to the col.
          }
        }
    }

}
return 0;
}
