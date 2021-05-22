#include<iostream>
using namespace std;
int top=-1;
void Display(int arr[]){
    for(int i=0;i<=top;i++)
    {
        std::cout<<arr[i]<<" ";
    }
    std::cout<<endl;
}
void Delete(int arr[], int num){
    int* temp=new int[top];
    int j=-1,i;
    for(i=top;i>-1;i--)
    {
        if(arr[i]!=num){
            j++;
            temp[j]=arr[i];
        }
        else{
            break;
        }
    }
    if(j==top)
    {
        std::cout<<"Element "<<num<<" is not present in the array"<<endl;
    }
    else{
        for(int k=j;k>=0;k--){
        arr[i]=temp[k];
        i++;
    }
     top=top-1;
    }
    delete[] temp;
}
void Insert(int arr[],int num){
    top++;
    arr[top]=num;
}
int main()
{
    int choice,size,num;
    char ch='y';
    std::cout<<"Enter size"<<endl;
    std::cin>>size;
    int* arr=new int[size];
    std::cout<<"array of size "<<size<<" is created"<<endl;
    do{
        std::cout<<"choose"<<endl;
        std::cout<<"1.display 2.delete 3.insert"<<endl;
        std::cin>>choice;
    switch(choice)
    {
        case 1:
        if(top!=-1){
            std::cout<<"Array elements"<<endl;
             Display(arr);
        }
        else{
            std::cout<<"No elements to be found"<<endl;
        }
        break;
           
        case 2:
            std::cout<<"Enter value to be deleted"<<endl;
            std::cin>>num;
            if(top!=-1){
            Delete(arr,num);
            }
            else{
                std::cout<<"Underflow"<<endl;
            }
            break;
        case 3:
            std::cout<<"Enter value to be inserted"<<endl;
            std::cin>>num;
            if(top!=size){
                Insert(arr,num);
            }
            else{
                std::cout<<"Overflow"<<endl;
            }
            break;
        default:
            std::cout<<"Enter valid choice(1-4)"<<endl;
    }
    std::cout<<"Enter (y/n) to continue or stop"<<endl;
    std::cin>>ch;
}while(ch=='y'|ch=='Y');
    delete[] arr;
   return 0;
}
    

