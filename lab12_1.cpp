#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){

    string grade;
    srand(time(0));
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    int luck = rand()%8;

    if(luck==0) grade = "A";
    else if(luck==1) grade = "B+" ;
    else if(luck==2) grade = "B";
    else if(luck==3) grade = "C+";
    else if(luck==4) grade = "C";
    else if(luck==5) grade = "D+";
    else if(luck==6) grade = "D";
    else grade = "F";

    cout << "You will get " << grade << " in this 261102.";

    return 0;
}