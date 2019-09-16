#include <iostream>
#include <cmath>
using namespace std;


bool ok(int q[], int c){
  for(int i = 0; i < c; i++){
    if(q[i] == q[c] || (c-i) == abs(q[c] - q[i]))
      return false;
  }
return true;
}



// This function should return the number of solutions for the given board size (you don't need to print the solutions).
int nqueens(int n) {
  int count =0;
  int *q;
  q= new int [n];
int c = 0;
q[0]=0;


while(c >= 0){ //next col
c++; //Changing the col


if(c == n){ // check col
  ++count;
  c--;
}


else q[c] = -1; //Start back at the row before the top row


  while(c >= 0){ //next row


    q[c]++;//Changing the row


    if(q[c] == n) //check row
      c--;


    else{
      if(ok(q, c) == true){ //Checks if its a legal position
        break; // Breaks out of the row loop, and goes to the col.


      }
    }
  }


}
// Reuse the code from your 1D 8 queens program to find the solutions (you may have to make changes).
   delete[]q;// Delete the array.
   return count;// Return the number of solutions.
}


int main() {
   int n = 12;
   for (int i = 1; i <= n; ++i)
      cout << "There are " << nqueens(i) << " solutions to the " << i << " queens problem.\n";
   return 0;
}
