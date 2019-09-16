#include<iostream>
#include<cmath>
#include<stdlib.h>
using namespace std;


bool ok(int q[], int c) { // Finish this code
  static int mp[3][3] = { { 0,2,1 },     // Man#0's preferences
              { 0,2,1 },    // Man#1's preferences
              { 1,2,0 } };  // Man#2's preferences
            
  static int wp[3][3] = { { 2,1,0 },    // Woman#0's preferences
              { 0,1,2 },    // Woman#1's preferences
              { 2,0,1 } };   // Woman#2's preferences

  /*Similar to 1D Queens, use a loop to check the array.
    Inside the loop we chould check for 3 conditions
    First condition checks is the same women is married to two different man *hint we need to check if two things are equal*
    Second condition checks if (Man#i) and (Man#c's wife) both like each other more than their own spouse
    Third condition checks if (Man#c) and (Man#i's wife) both like each other more than their own spouse

    mp[i][j] tells you how much Man#i likes Woman#j. (0 = favorite; 2 = least favorite)
    wp[i][j] tells you how much Woman#i likes Man#j.
 
    mp[i][q[i]] tells you how much Man#i likes his own wife.
    mp[i][q[c]] tells you how much Man#i likes Man#c's wife.
    wp[q[i]][i] tells you how much Man#i's wife likes Man#i. How much she likes the current man.
    wp[q[i]][c] tells you how much Man#i's wife likes Man#c. How much she likes her own husband
    If mp[i][q[c]] < mp[i][q[i]], it means that Man#i likes Man#c's wife more than his own wife
  */
  for(int i = 0; i <c; i++){
    if(q[c] == q[i])
      return false;
  if(mp[i][q[i]] > mp[i][q[c]] && wp[q[i]][c] < wp[q[i]][i]||mp[c][q[c]] < mp[c][q[i]] && wp[q[c]][c] > wp[q[c]][i]){
    return false;
  }
  }
  //if we pass the loop, what do we return?
  return true;
}


void print(int q[]){
    static int numSolutions = 0;
    cout << "Solution #" << ++numSolutions << ":\n";
    for(int c = 0; c < 3; c++){
        cout << "Man " << c  << " is married to women " << q[c] << endl;
    }
    cout << "\n";
}



void backtrack(int &col){
    col--;
    if(col == -1)
      exit(1);
}


int main(){
int q[3] = {0};
int c = 0;

while(c >= 0){ //next col
    c++; //Changing the col

if(c == 3){ // check col
  print(q);
  backtrack(c);
}
else q[c] = -1; //Start back at the row before the top row

    while(c >= 0){ //next row
        q[c]++;//Changing the row
        if(q[c] == 3) //check row
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
