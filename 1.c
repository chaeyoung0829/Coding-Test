#include <stdio.h>

// int main() {
//     int i, j;

//     // 구구단 출력
//     for (i = 1; i <= 9; i++) {
//         for (j = 1; j <= 9; j++) {
//             printf("%d x %d = %d\t", i, j, i * j);
//         }
//         printf("\n"); // 각 단마다 줄바꿈
//     }

//     return 0;k
// }

int main(){
  int x;
  scanf("%d",&x);
//   scanf("%d",&x);
//   scanf("%d",&x);
//   scanf("%d",&x);
//   scanf("%d",&x);
//   scanf("%d",&x);

  switch (x) {

  case 12:
  case 1:
  case 2:
   printf("겨울");
   break;
  
  case 3:
  case 4:
  case 5:
   printf("봄");
   break;
  
  case 6:
  case 7:
  case 8:
   printf("여름");
   break;

  case 9:
  case 10:
  case 11:
   printf("가을");
   break;
  }
  return 0;
}
