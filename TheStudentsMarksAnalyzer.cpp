#include <iostream>
using namespace std ;
int main(){
    int st;
    double marks;
    double total = 0;
    double avg; 
    cout<<"No. of students : ";
    cin>>st;
    
    for(int i = 1; i<=st;i++){
        cout<<"Enter marks of student "<<i<<" : ";
        cin>>marks;
        total+=marks;
        avg=total/st;
        
    }

    cout<<"Total Marks = "<<total<<endl;
    cout<<"Average Marks = "<<avg<<endl;
return 0;
}