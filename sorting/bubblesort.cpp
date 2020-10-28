#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

using namespace std;

void bubble_sort(int A[], int n)
{ int flag = 0; 
for (int k=0; k<n-1; k++)
 {
     for (int i=0; i<n-1; i++)
     {
         if(A[i] > A[i+1])
         {
           swap(A[i],A[i+1]);
           flag = 1;
         }
     }
     if (flag==0)
     break;
 }
}

int main()
{
     int n;
  cout<<"enter the number of elements of your array?"<<endl;
  cin>>n;
  int A[n];
  cout<<"enter the elements:"<<endl;  
    for(int i=0; i<n; i++)
    {
        cin>>A[i];
    }
   
   bubble_sort(A ,n);
   cout<< "the sorted array is: ";
   for(int i=0; i<n; i++)
   {cout<<A[i]<<" ";}
   
    return 0;
    
}