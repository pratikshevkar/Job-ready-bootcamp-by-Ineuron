// #include<stdio.h>

// int main() {
//     int a[10],i,sum=0;
//     float avg;

//     printf("Enter 10 numbers:- ");
//     for(i=0;i<10;i++){
//         scanf("%d",&a[i]);
//     }

//     for(i=0;i<10;i++){
//         sum=sum+a[i];
//     }
//     avg=sum/10.00;
//     printf("Avg is %f",avg);
 
//  return 0;   
// }


#include<stdio.h>

int main() {
    int a[5],i,sume=0,sumo=0;

    printf("Enter 5 numbers:- ");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }

    for(i=0;i<5;i++){
        if(a[i]%2==0) {
            sume=sume+a[i];
        } else {
            sumo=sumo+a[i];
        }   
    }
    printf("even is %d\n",sume);
    printf("odd is %d",sumo);
 
 return 0;   
}