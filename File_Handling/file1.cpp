#include<iostream>
#include<fstream>
using namespace std;

int main(){
    char x[200];
    fstream fileName;
    fileName.open("file.txt", ios::out | ios::in);
    cout<<"Text to be written on file" <<endl;
    cin.getline(x, sizeof(x));

    fileName<<"\n Hello Bridgelabzians...!!!"<<endl;
    fileName<<"\n Welcome to File Handling Program"<<endl;
    fileName>>x;
    cout<<x<<endl;
        
    fileName.close();
    return 0;
}