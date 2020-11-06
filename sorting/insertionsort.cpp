#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

using namespace std;

void insertion_sort(int A[], int n)
{ int value,hole;
    for (int i=1;i<n;i++)
    {value=A[i];
    hole=i;

   while (hole>0 && A[hole-1]>value) 
    {
       A[hole] = A[hole-1];
       hole--;
    }
    A[hole] = value;

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
   
   insertion_sort(A ,n);
   cout<< "the sorted array is: ";
   for(int i=0; i<n; i++)
   {cout<<A[i]<<" ";}
   
    return 0;
    
}