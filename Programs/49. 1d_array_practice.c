/* Sample programs to practie 1D array */

/* Program 1 :Find minimum and maximum in array */
#include<stdio.h>
int main(){
    int arr[10]={35,-27,47,8,-90,-100,104,-152,71,17};
    int min = arr[0];
    int max = arr[0];
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++){
        if(arr[i]<min)
            min=arr[i];
        if(arr[i]>max)
            max=arr[i];
        printf("%d\n",max);
    }
    printf("min: %d, max: %d\n",min,max);
    return 0;
}

/* Program 2 :  Print alternate array elements starting from given index in given direction 
you can assumge direction as: 0 - left , 1 - right
*/
#include<stdio.h>
int main(){
    int arr[10]={35,-27,47,8,-90,-100,104,-152,71,17};
    int n = sizeof(arr)/sizeof(arr[0]);
    //0- left , 1 - right
    int dir=0;
    int index = 10;
    if(index < 0 || index >=n){
        printf("invalid index\n");
        return 0;
    }
    if(dir==0){
        for(int i=index;i>=0;i-=2)
            printf("%d\n",arr[i]);
    }
    else{
        for(int i=index;i<n;i+=2)
            printf("%d\n",arr[i]);
    }
    return 0;
}

/* Program3 : Copy contents of one array to another array in reverse order */
#include<stdio.h>
int main(){
    int arr1[10]={35,-27,47,8,-90,-100,104,-152,71,17};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int arr2[10];
    int i=n-1;
    int j=0;
    while(i>=0){
        arr2[j]=arr1[i];
        i--;
        j++;
    }
    for(int x=0;x<n;x++){
        printf("%d\n",arr2[x]);
    }
    return 0;
}

