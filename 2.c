// #include<stdio.h>

// int main(){


//   for(int i=1; i<= 100; i++) {  
//     int x,y,z;
//     scanf("%d",&x);
//     scanf("%d",&y);
//     scanf("%d",&z);

//     if( x< 0) {
//         break;
//     }

//     if(y<0){
//         break;
//     }

//     if(z<0){
//         break;
//     }

//     int sum = x+y+z;
//     int avg = sum / 3;

//     printf("The sum is : %d",sum);
//     printf(" The average is  : %d",avg);
//   }

//     return 0;

// }


#include<stdio.h>

int main(){
  
//   for(int i=1; i<10; i++){
//       int x;
//       scanf("%d",&x);
//       if(x<0){
//         break;
//       }
//       printf("%d",x);
//   }
int x;
int count=0;
int sum=0;
int avg=0;


 while (1) {
        scanf("%d", &x);

        if (x <= 0) {
            break;
        } else if (x > 100) {
            continue;
        }
        count++;
        sum += x;
    }
    avg=sum/count;

    printf("The sum is : %d",sum);
    printf("The avg is : %d",avg);


  return 0;


}