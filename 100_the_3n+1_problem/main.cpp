#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    int i,j,countCL,maxCL=0;
    unsigned int n=0;

    while(scanf("%d %d",&i,&j)!=EOF){
        cout << i << " " << j << " ";
        if(j<i){
            int temp=i;
            i=j;
            j=temp;
        }
        maxCL=0;
        for(int k=i;k<=j;k++){
            countCL=1;
            n=k;
            while(n!=1){
                if(n%2){
                    n=3*n+1;
                    n=n>>1;
                    countCL++;
                }else{
                    n=n>>1;
                }
                countCL++;
            }
            if(countCL>maxCL){
                maxCL=countCL;
            }
        }

        cout << maxCL << endl;
    }

    return 0;
}
