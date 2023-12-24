#include<stdio.h>

int main(){ 
//     int arr1[5],arr2[5],arr3[5],i;

//     printf("enter 5 numbers");
    
//     for(i=0;i<5;i++){
//         scanf("%d",&arr1[i]);
//     }
//      printf("enter 5 numbers"); 

//      for(i=0;i<5;i++){
//         scanf("%d",&arr2[i]);
//     }

//      for(i=0;i<5;i++){
//         arr3[i]=arr1[i]+arr2[i];
//     }
// printf("the addition is");
//      for(i=0;i<5;i++){
//         printf("%d\n",arr3[i]);
//         }



// count
// int arr[5]={2,2,2,2,5};
// int i,j,count;
// // printf("hello");

// for(i=0;i<5;i++){
    
//     count=0;
//     for(j=0;j<5;j++){
//         if(arr[i]==arr[j]){
//             count=count+1;
            

//         }
//         // --i;
//     }
//     if(count>=2){
//         printf("%d=%d\n",arr[i],count);
//     }
// }




// int arr[]={7,2,8,1,5};

// int i,j,min,max,temp,temp1;

// temp=arr[0];
// temp1=arr[0];

// for(i=0;i<5;i++){
//     if(arr[i]>temp){
//         temp=arr[i];
//     }

//     if(temp1>arr[i]){
//         temp1=arr[i];
//     }
    
// }

// printf("%d",temp1);


// merging of two arrays

   int arr3[10];
   int arr1[5]={1,2,3,4,5};
   int arr2[5]={1,2,3,4,5};

    int i,temp=5,k;

    for(i=0;i<10;i++){

        if(i<5){
            arr3[i]=arr1[i];
        }
        else{
            // k=i-temp;
            arr3[i]=arr2[i-temp];
            // printf("%d\n",k);
            //
        }
    }

    for(i=0;i<10;i++){
        printf("%d\n",arr3[i]);
    }



return 0;
}