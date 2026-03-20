// Program to find the Greatest of Three Numbers in C++
// Here we will discuss how to find the greatest of three numbers in C++ entered by the user in c++ programming language.

// To find the greatest of three numbers if else-if statement is used along with ‘>’ ad ‘&&’ operator in the condition. 

#include<bits/stdc++.h>
using namespace std;
int main(){
    int num1,num2,num3;

    cin>>num1>>num2>>num3;

    if(num1>num2 && num1>num3)
        cout<< num1<< ":is a greatest";

    else if(num2>num1 && num2>num3)
        cout<< num2 <<": is a greatest";
    else 
        cout<< num3 <<":is a greatest";

return 0;

}
