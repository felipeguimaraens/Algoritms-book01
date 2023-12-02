#include <iostream>
using namespace std;

bool isSorted(int A[], int n)
{
  if(n == 1)
    return true;
  return (A[n-1] < A[n-2])?false:isSorted(A,n-1);
}

int main() 
{
    int A[] = {1,2,3,4,5,6};
    int Asize = end(A)-begin(A);
    cout << "Is array A sorted? \n";
    cout << isSorted(A,Asize);
    cout << "\n";
    
    int B[] = {1,2,3,6,5,4};
    int Bsize = end(A)-begin(A);
    cout << "Is array B sorted? \n";
    cout << isSorted(B,Bsize);
    return 0;
}

