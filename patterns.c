// #include <stdio.h>         // star triangle
// int main() {
//     int j,i,n;
//     printf("enter the number of stars: ");
//     scanf("%d", &n);
//     for (j=1;j<=3;j++) {
//         for (i=1;i<=n;i++) {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }





// #include <stdio.h>     // number square
// int main() {
//     int j,i,n;
//     printf("enter the number of rows and columns: ");
//     scanf("%d", &n);
//     for (j=1;j<=n;j++) {
//         for (i=1;i<=4;i++) {
//             printf("%d ", i);
//         }
//         printf("\n");
//     }
//     return 0;
// }





// #include <stdio.h>       // star right triangle
// int main() {
//     int i,j,n;
//     printf("enter the number of rows: ");
//     scanf("%d", &n);

//     for (i=1;i<=n;i++) {
//         for (j=1;j<=i;j++) {
//             printf("*"); 
//         }
//         printf("\n");
//     }
//     return 0;
// }





// #include <stdio.h>      //inverted right triangle
// int main() {
//     int i,j,n;
//     printf("enter the number of rows: ");
//     scanf("%d", &n);

//     for (i=n;i>=1;i--) {
//         for (j=i;j>=1;j--) {
//             printf("*");
//         }
//         printf("\n");
//     }
//     return 0;
// }





// #include <stdio.h>       // number right triangle
// int main() {
//     int i,j,n;
//     printf("enter the number of rows: ");
//     scanf("%d", &n);

//     for (i=1;i<=n;i++) {
//         for (j=1;j<=i;j++) {
//             printf("%d", j); 
//         }
//         printf("\n");
//     }
//     return 0;
// }





// #include <stdio.h>       // odd number right triangle
// int main() {
//     int i,j,n;
//     printf("enter the number of rows: ");
//     scanf("%d", &n);

//    for (i=1;i<=2*n-1;i=i+2) {
//         for (j=1;j<=i;j++) {
//             if (j%2!=0) {
//                 printf("%d", j);
//             }
                
            
//         }
//         printf("\n");
//    }
   
//     return 0;
// }





// #include <stdio.h>     //alphabet square
// int main() {
//     int i,j,n;

//     printf("enter the number of rows: ");
//     scanf("%d", &n);

//     for (i=1;i<=n;i++) {
//         int a = 1;
//         for (j=1;j<=n;j++) {
//             int d = a + 64;
//             char ch = (char)d;
//             printf("%c ", ch);
//             a++;
//         }
//         printf("\n");
//     }
//     return 0;
// }





// #include <stdio.h>     //alphabet triangle
// int main() {
//     int i,j,n;

//     printf("enter the number of rows: ");
//     scanf("%d", &n);

//     for (i=1;i<=n;i++) {
//         int a = 1;
//         for (j=1;j<=i;j++) {
//             int d = a + 64;
//             char ch = (char)d;
//             printf("%c ", ch);
//             a++;
//         }
//         printf("\n");
//     }
//     return 0;
// }





// #include <stdio.h>    //number alphabet triangle
// int main() {
//     int i,j,n;
    
//     printf("Enter a no.: ");
//     scanf("%d", &n);
    
//     for (i=1;i<=n;i++) {
//         int a = 65;
//         for (j=1;j<=i;j++) {
//             if (i%2!=0) {
//                 printf("%d", j);            
//             }
//             else {
//                 printf("%c", a);
//                 a++;
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }





// #include <stdio.h>        //star plus
// int main() {
//     int i,j,n;
//     printf("enter an odd number: ");
//     scanf("%d", &n);

//     for (i=1;i<=n;i++) {     // i is working as rows
//         for (j=1;j<=n;j++) {     // j is working as columns
//             int a = n/2+1; 
//             if (i==a || j ==a) {
//                 printf("*");     // overall this works like a matrix
//             }
//             else {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }





// #include <stdio.h>      // hollow rectangle
// int main() {
//     int i,j,n,m;

//     printf("enter the number of rows: ");
//     scanf("%d", &n);
//     printf("enter the number of columns: ");
//     scanf("%d", &m);

//     for (i=1;i<=n;i++) {
//         for (j=1;j<=m;j++) {
//             if ((i==1 || j==1) || (i==n || j==m)) {
//                 printf("*");
//             }
//             else {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }





// #include <stdio.h>       // star cross
// int main() {
//     int i,j,n;
//     printf("enter the number of rows and columns: ");
//     scanf("%d", &n);

//     for (i=1;i<=n;i++) {
//         for (j=1;j<=n;j++) {
//             if (i==j || i+j==n+1) {
//                 printf("*");
//             }
//             else {
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }

// }





// #include <stdio.h>       // floyd's triangle
// int main() {
//     int i,j,k,n;
//     printf("enter the number of rows: ");
//     scanf("%d", &n);
//     int a=1;
//     for (i=1;i<=n;i++) {
//         for (j=1;j<=i;j++) {
//             printf("%d", a);
//             a++;
//         }
//         printf("\n");
//     }
//     return 0;
// }





// #include <stdio.h>       //floyds odd number triangle
// int main() {
//     int i,j;
//     int a=1;
//     for (i=1;i<=3;i++) {
//         for (j=1;j<=i;j++) {
//             printf("%d ", a);
//             a+=2;
//         }
//         printf("\n");
//     }
//     return 0;
// }





// #include <stdio.h>           // 01010 triangle
// int main() {
//     int i,j,n;
//     printf("enter the number of rows: ");
//     scanf("%d", &n);
//     int a;
//     for (i=1;i<=n;i++) {
//         if (a%2!=0) {
//             a=1;
//         }
//         else {
//             a=0;
//         }
//         for (j=1;j<=i;j++) {
//             printf("%d ", a);
//             if (a==0) {
//                 a=1;
//             }
//             else {
//                 a=0;
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }





// #include <stdio.h>       // star triangle mast
// int main() { 
//     int i,j,n,k;
//     printf("enter the number of rows: ");
//     scanf("%d", &n);
//     for (i=0;i<=n;i++) {
//         for(j=1;j<=n-i;j++) {
//             printf(" ");
//         }
//         for(k=1;k<=i;k++) {
//             printf("*");
//         }
//         printf("\n");
//     }
// return 0;
// }





// #include <stdio.h>      // rhombus
// int main() {
//     int i,j,n;
//     printf("enter the number of rows: ");
//     scanf("%d", &n);

//     for(i=n;i>=1;i--) {
//         for (j=1;j<=i;j++) {
//             printf(" ");
//         }
//         for (j=1;j<=n;j++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }




// #include <stdio.h>      // star pyramid
// int main() {
//     int i,j,n;
//     printf("enter the number of rows: ");
//     scanf("%d", &n);

//     for (i=1;i<=n;i++) {
//         for (j=1;j<=n-i;j++) {
//             printf(" ");
//         }
//         for (j=1;j<=i;j++) {
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }





// #include <stdio.h>      // number pyramid
// int main() {
//     int i,j,n,k;
//     printf("enter the number of rows: ");
//     scanf("%d", &n);

//     for (i=1;i<=n;i++) {
//         for (j=1;j<=n-i;j++) {
//             printf(" ");
//         }
//         for (j=1;j<=i;j++) {
//             for (k=1;k<=j;k++) {
//                 printf("%d ", k);
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }



