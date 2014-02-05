#include <iostream>

using namespace std;

int search2Insert(int A[], int start, int end, int target){
        
        if(start>end){
            return start;
        }
        int pivot = (start + end)/2;
        
        if(target == A[pivot]){
            return pivot;
        }
        else{
            if(target<A[pivot]){
                search2Insert(A, start, pivot-1, target);
            }else{
                search2Insert(A, pivot+1, end, target);
            }
        }
    }

int searchInsert(int A[], int n, int target) {
        if(A==NULL|| n ==0 )
            return 0;
 
        return search2Insert(A,0,n-1,target);
    }

    int main(){
        int a[]= {0,1,20,30,31};
        int target;
        cin>>target;
        cout<<searchInsert(a, 5, target)<<endl;
    return 0;
    }