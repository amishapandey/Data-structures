#include <stdio.h>
void merge(int a[],int n1,int index1,int b[],int n2,int index2,int c[],int index){
    while(n1&&n2){
        if(a[index1]<b[index2]){
            c[index]=a[index1];
            index++;
            index1++;
            n1--;
        }
        else{
            c[index]=b[index2];
            index++;
            index2++;
            n2--;
        }
    }
    while(n1){
        c[index]=a[index1];
        index++;
        index1++;
        n1--;
    }
    while(n2){
        c[index]=b[index2];
        index++;
        index2++;
        n2--;
    }
    
}
void mergePass(int a[],N,l,int b[]){
    int Q,S,Rj,LB;
    Q=N/2*l;//no of pairs to be merged
    S=2*l*Q;//no. of elements considered
    R=N-S;//no.of remaining elements
    for(j=0;j<Q;j++){
    LB=(2*j)*l;//Lower bound index of first element
    merge(a,l,LB,a,l,LB+1,b,LB);
    }
    if(R<=l)//residual has only 1 array 
    {
        for(j=0;j<=R;j++)
        b[S+j]=a[S+j];
    }
    else//residual of more than 1 array of diff size
    merge(a,l,S,a,R-l,S+l,b,S);
    
}
void mergeSort(int a[],N){
    int l=1,b[N];
while(l<N){
    mergePass(a,N,l,b);
    mergePass(b,2*l,a);
    l=4*l;
    }
}

int main()
{
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    int arr[n],i;
    printf("enter the elements of the array");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    mergeSort(arr,n);
    printf("Hello World");

    return 0;
}
