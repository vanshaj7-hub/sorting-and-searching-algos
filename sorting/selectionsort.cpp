#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

using namespace std;

void selection_sort(int A[], int n)
{
   for(int i=0; i<n-1; i++)
   {   int temp;
       for(int j=i+1; j<n; j++)
       if (A[i] > A[j])
       {
        temp = A[i];
         A[i] = A[j];
        A[j] = temp;         
       }

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
   
   selection_sort(A ,n);
   cout<< "the sorted array is: ";
   for(int i=0; i<n; i++)
   {cout<<A[i]<<" ";}
   
    return 0;
    
}