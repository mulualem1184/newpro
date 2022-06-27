	  #include <iostream>
//#include <ctime>
#include <cstdlib>
using namespace std;
int main() 
{
	  int arr1[3][3];
	  int arr2[3][3];
	//to insert value into the firt array
 for(int i=0;i<3;i++)
     {
     	for(int j=0;j<3;j++)
     	{
     		arr1[i][j]=(rand()% 10);
		 }
	 }
	 
	 	//to insert value into the second array
 for(int i=0;i<3;i++)
     {
     	for(int j=0;j<3;j++)
     	{
     		arr2[i][j]=(rand()% 10);
		 }
	 }
//Display

for( int i=0;i<3;i++)
     {
     	for(int j=0;j<3;j++)
     	{ 
     	cout<<arr1[i][j]<<" ";
     }
     
     cout<<"\n";
 }
 
 //Display
cout<<"\n\n\n"; 
for( int i=0;i<3;i++)
     {
     	for(int j=0;j<3;j++)
     	{ 
     	cout<<arr2[i][j]<<" ";
     }
     
     cout<<"\n";
 }
 cout<<"\n\n\n";
 for( int i=0;i<3;i++)
     {
     	for(int j=0;j<3;j++)
     	{ 
     	cout<<arr2[i][j]+ arr1[i][j]<<" ";
     }
     
     cout<<"\n";
 }
 return 0; 
}
