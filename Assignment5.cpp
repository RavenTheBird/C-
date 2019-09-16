#include<iostream>
#include<cmath>
#include<stdlib.h>
using namespace std;

bool test(int cross[], int c) {
  static int checkList[8][5] = {
    {-1},
    {0,-1},
    {1,-1},
    {0,1,2,-1},
    {1,2,3,-1},
    {2,4,-1},
    {0,3,4,-1},
    {3,4,5,6,-1},
  };

for(int i=0; checkList[c][i] !=-1; i++){
   if(abs(cross[checkList[c][i]]-cross[c])==1)
      return false;
}
for(int i=0; i<c;i++){
   if(cross[i] == cross[c])
    return false;
}
return true;
}

void print(int cross[], int cap) {
  static int count = 0;
  cout << " Soultion number: " << ++count << endl;
  cout << " " << cross[1] << cross[2] << endl;
  cout << cross[0] << cross[3] << cross[4] << cross[5] << endl;
  cout << " " << cross[6] << cross[7] << endl;
  return;
}



void backtrack(int& col){
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
  print(q,c);
  backtrack(c);
}

else q[c] = -1; //Start back at the row before the top row

  while(c >= 0){ //next row

    q[c]++;//Changing the row

    if(q[c] == 8) //check row
      backtrack(c);

    else{
      if(test(q, c) == true){ //Checks if its a legal position
        break; // Breaks out of the row loop, and goes to the col.

      }
    }
  }

}

return 0;

}
