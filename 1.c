#include <stdio.h>

// int main() {
//     int i, j;

//     // ������ ���
//     for (i = 1; i <= 9; i++) {
//         for (j = 1; j <= 9; j++) {
//             printf("%d x %d = %d\t", i, j, i * j);
//         }
//         printf("\n"); // �� �ܸ��� �ٹٲ�
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
   printf("�ܿ�");
   break;
  
  case 3:
  case 4:
  case 5:
   printf("��");
   break;
  
  case 6:
  case 7:
  case 8:
   printf("����");
   break;

  case 9:
  case 10:
  case 11:
   printf("����");
   break;
  }
  return 0;
}
