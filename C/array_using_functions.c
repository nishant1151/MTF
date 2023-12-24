#include<stdio.h>
// int * print_array(int * ,int *);
// void copy_array(int * ,int *);
// int duplicate(int *ptr);
void min_max(int *,int *, int*);

int main(){

    int arr1[5]={175,2,3,4,5};
    int arr2[5]={174,2,992,4,885};
    int i,rus;
    int arr3[5];
    int temp2,temp3;
    int *ptr2=&temp2;
    int * ptr3=&temp3;
    // int *pt=print_array(arr1,arr);

    // for(i=0;i<5;i++){

        // printf("%d\n",*pt);
        // pt++;
    // }

    // // copy_array(arr1,arr3);
    
    min_max(arr2,ptr2,ptr3);
    // for(i=0;i<5;i++){
    //     printf("%d",arr3[i]);
    // }
    printf("%d\n",temp2);
    printf("%d\n",temp3);


    // reverse_of_array()
    return 0;
}

// int* print_array(int *ptr,int *ptr1){
//     int i, arr5[5];
//     for(i=0;i<5;i++){
//         arr5[i]=ptr1[i]+ptr[i];
//         // printf("%d\n",);  
//     }
//     return arr5;
// }


// void copy_array(int *ptr,int *ptr1){
//     int i;
//     for(i=0;i<5;i++){
//         ptr1[i]=ptr[i];
//     }
// }

// int duplicate(int*ptr){
//     int j,i,count=0,count1=0;
// int temp;
// // printf("%d\n",temp);
//     for(i=0;i<5;i++){
//         temp=ptr[i];
//         count=0;
//         for(j=0;j<=5;j++){
//         if(temp==ptr[j]){
//             printf("%d",temp);
//             printf("%d\n",ptr[j]);
//             count++;

//         }
//         }
//         if(count>1){
//             count1++;
//         }
        
        

//     }
//     return count1;
    
// }




// void min_max(int *ptr,int *ptr2,int* ptr3){
//     printf("hello");
//     int temp,temp1,i,j;
//     temp=*ptr;
//     for(i=0;i<5;i++){
        
//         for(j=0;j<5;j++){
//             if(ptr[j]>temp){
//                 temp=ptr[j];
//             }
//             if(ptr[j]<temp1){
//                 temp1=ptr[j];
//             }
//             }

//     }
//     *ptr2=temp;
//     *ptr3=temp1;
                                                                                                 
// }

// printf("")

