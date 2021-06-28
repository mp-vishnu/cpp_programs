#include<iostream>
using namespace std;
int main(){
	int val,b,i,j,len;
	std::cout<<"Enter length ";
	std::cin>>len;
	int* arr1=new int[len];
	int* arr2=new int[len];
	std::cout<<"Enter array values"<<endl;
	for(i=0;i<len;i++)	
	{      std::cout<<"Enter value ";
	       std::cin>>val;
	       arr1[i]=val;
	}
	std::cout<<"Given array"<<" ";
	for(i=0;i<len;i++)	
{
	std::cout<<arr1[i]<<" ";
}
	std::cout<<endl<<"Enter rotation number"<<" ";
	std::cin>>b;
	b=b%len;
	for(i=0;i<len;i++)
{
	if((i+b)>=len)
	{
		j=(i+b)-len;
		arr2[i]=arr1[j];
	}
	else
	{
		arr2[i]=arr1[i+b];
	}
}
std::cout<<endl;
std::cout<<"Rotated array"<<" ";
for(i=0;i<len;i++)	
{
	std::cout<<arr2[i]<<" ";;
}
delete[] arr1;
delete[] arr2;
return 0;
}		



