#include<bits/stdc++.h>
using namespace std;
int main(){
int arr[]={3,8,6,0,5,9,1,2};
int len=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<len;i++){
    cout<<arr[i]<<" ";
    
}
cout<<endl;


//                                    Selection Sorting 
// for(int i=0;i<len;i++){

// for(int j=i+1;j<=len;j++){
//     if(arr[i]>arr[j]){
        
//     int temp=arr[j];
//         arr[j]=arr[i];
//         arr[i]=temp;
// }
// }}
// for(int i=0;i<len;i++){
    
//     cout<<arr[i]<<" ";
//}





//                                     binary search
// int key=5;
// int s=0;
// int e=len;

// for(int i=0;i<len;i++){
    
//     int mid=(s+e)/2;
// if (arr[mid]>key){
//     e=mid-1;
// }
// else if (arr[mid]<key)
// s=mid+1;
// else
// cout<<mid ;
// break;
// }


//                                 Insertion sort

// for(int i=1;i<=len;i++){
// int temp=arr[i];
// int j=i-1;
// while(j>=0 && arr[j]>temp){
// arr[j+1]=arr[j];
// j--;
// }
// arr[j+1]=temp;

// }






//                        Once again insertion sort
//                       using for loop 

// for(int i=1;i<len;i++){
// int temp=arr[i];
// int j=i-1;
// for(;j>=0;j--){
// if(arr[j]>temp){
//     arr[j +1]=arr[j];
// }
// else
// break;
// }
// arr[j+1]=temp;
// }


//                          insertion sort using while loop
for(int i=1;i<len;i++){
    int temp=arr[i];                    
    int j=i-1;                          // i th element s just peeche k liy chlega dusra loop
    while(j>=0){
        if(arr[j]>temp){               // agr i th element s chhota hai j th element to....
            arr[j+1]=arr[j];          //  j th element ko ek position se right shift krado. Remember, swap nahi, shift
            }                        // ese krne s jo sorted subarray bnta jayga, wo poora right shift hota jayga, instead of single elements
            else 
            break;                  // agr j th element already chhota h, to loop k bahar aajao ar i th element ko us chhote element k right position, jo ki j+1 th position hai, waha rkhj do
        
        j--;                       
    }
    arr[j+1]=temp;                  // read the above statement 
}






for(int i=0;i<len;i++){
    cout<<arr[i]<<" ";          
    
}
return 0;
}
