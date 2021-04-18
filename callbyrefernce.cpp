#include<iostream>
using namespace std;
// call by reference
void swapPointer(int* a, int* b){ //temp a b
    int temp = *a;          //4   4  5   
    *a = *b;               //4   5  5
    *b = temp;            //4   5  4 
}
//     call by value
void swap(int a, int b){ //temp a b
    int temp = a;        //4   4  5   
    a = b;               //4   5  5
    b = temp;            //4   5  4 
}
void disp(int* a,int* b){
 int   temp = *a;
 *a = *b;
 temp = *a;
 return ;

}




int main(){
    int x =4, y=5;
//     cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
//     swap(x, y); 
//     cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl; 
//     return 0;




    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl;
    swapPointer(&x, &y);   //This will swap a and b using pointer reference
    cout<<"The value of x is "<<x<<" and the value of y is "<<y<<endl; 
                disp(&x,&y);
        cout<<" The value of x is : "<<x<<"The value of y : "<<y<<endl;

    return 0;

}






