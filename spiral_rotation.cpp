#include<iostream>
#include<vector>
using namespace std;
int main(){
	int row,col,val,i,j,dir=0,top=0,left=0,down,right;
	std::cout<<"Enter no: of rows and columns: ";
	std::cin>>row;
	std::cin>>col;
	down=row-1;
	right=col-1;
	if(row!=col)
	{
		std::cout<<"Not a square matrix ";
		exit(0);
	}
	else
	{
  	vector<vector<int>> arr;
	std::cout<<"Enter array values "<<endl;
	for(i=0;i<row;i++)	
	{
		vector<int>temp;
		for(j=0;j<col;j++)
		{       std::cout<<"Enter value ";
			std::cin>>val;
			temp.push_back(val);
			
		}
		arr.push_back(temp);
	}
	std::cout<<"Given array ";
	for(i=0;i<arr.size();i++)
	{
		for(j=0;j<arr[0].size();j++)
		{
			std::cout<<arr[i].at(j)<<" ";
		}
	}
	std::cout<<endl;
	std::cout<<"Spiral_matrix:"<<endl;
	while(top<=down && left<=right)
	{
		if(dir==0)
		{
			for(i=left;i<=right;i++)
			{
				std::cout<<arr[top][i]<<" ";
			}
		top+=1;
		}
		else if(dir==1)
		{
			for(i=top;i<=down;i++)
			{
				std::cout<<arr[i][right]<<" ";
			}
		right-=1;
		}
		else if(dir==2)
		{
			for(i=right;i>=left;i--)
			{
				std::cout<<arr[down][i]<<" ";
			}
		down-=1;
		}
		else
		{
			for(i=down;i>=top;i--)
			{
				std::cout<<arr[i][left]<<" ";
			}
		left+=1;
		}
	dir=(dir+1)%row;
	}
}
	
return 0;
}		



