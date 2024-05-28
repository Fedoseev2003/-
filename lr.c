#define _CRT_SECURE_NO_WARNINGS
#include "lr.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define K 3
#define N 4
double sqrtsf(double x) {
 if (x < 0) {
 return -1;
 }
 double left = 0, right = x + 1;

 for (int i = 0; i < 20; i++) {
 double middle = (left + right) / 2;
 if (middle * middle < x) {
 left = middle;
 } else {
 right = middle;
 }
 } return left;
}
int lr1()
{
 float D,x1,x2;
 int a,b,c;
 a=1;
 b=1;
 c=-12;
 D=b*b-4*a*c;
 if (D>=0) {
 x1=(-b+sqrtsf(D))/2;
 x2=(-b-sqrtsf(D))/2;
 }
else
{
 printf("no roots");
}
printf("Roots of the equation - %.2f\n",x1);
printf("Roots of the equation - %.2f\n",x2);
return 0;
}
int lr1dop()
{
 float D,x1,x2;
 int a,b,c;
 printf("Enter odds a, b, c");
 scanf("%d,%d,%d",&a,&b,&c);
 D=b*b-4*a*c;
 if (D>=0) {
 x1=(-b+sqrtsf(D))/2;
 x2=(-b-sqrtsf(D))/2;
 }
else
{
 printf("no roots");
}
printf("Roots of the equation - %.2f\n",x1);
printf("Roots of the equation - %.2f\n",x2);
return 0;
}
int lr2()
{
 float k, m, s, E, L;
 k = 1;
 m = 1;
 s = 0;
 printf("Enter E: ");
 scanf("%f", &E);
 L = k / m;
 while (s <= E)
 {
 s = s + L;
 k = k + 2;
 m = m + 3;
 L = k / m;
 }
 printf("answer = %f", s);
 return 0;
}
#include <math.h>
int lr2dop()
{
 float k, m, s, E, L;
 int n=0;
 k = 1;
 m = 1;
 s = 0;
 printf("Enter E: ");
 scanf("%f", &E);
 L = k / m;
 for (;s <= E;)
 {
 s = s + L;
 k = k + 2;
 m = m + 3;
 L = k / m;
 n++;
 }
 printf("answer = %f", s);
 return 0;
}
  int lr3() {
     char str[1000];
    char ch;
    int len = 0;
    int prev_len = 0;
    int words_same_length = 1;

    printf("Roots of the equation: \n");
    
    int i = 0;
    while ((ch = getchar()) != EOF && i < 999) {
        if (ch == EOF) break; 
        str[i] = ch;
        i++;
    }
    str[i] = '\0';

    for (int j = 0; str[j] != '\0'; j++) {
        ch = str[j];

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            len++;
        } else {
            if (len != 0) {
                if (prev_len != 0 && len != prev_len) {
                    words_same_length = 0;
                    break;
                }
                prev_len = len;
                len = 0;
            }
        }
    }

    if (len != 0 && len != prev_len) {
        words_same_length = 0;
    }
printf("\n");
    if (words_same_length) {
        printf("All words in a line are the same length. \n");
    } else {
        printf("Some words in a line are of different lengths. \n");
    }

    return 0;
}
    
    int lr3dop() {
    char str[1000];
    char ch;
    int len = 0;
    int prev_len = 0;
    int words_same_length = 1;
    int same_length_count = 0;
    int diff_length_count = 0;
    int total_count = 0;

    printf("Enter the string: ");
    
    int i = 0;
    while ((ch = getchar()) != EOF && i < 999) {
        if (ch == '\n') break;
        str[i] = ch;
        i++;
    }
    str[i] = '\0';

    for (int j = 0; str[j] != '\0'; j++) {
        ch = str[j];

        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
            len++;
        } else {
            if (len != 0) {
                total_count++;
                if (prev_len != 0 && len != prev_len) {
                    words_same_length = 0;
                    diff_length_count++;
                } else {
                    same_length_count++;
                }
                prev_len = len;
                len = 0;
            }
        }
    }

    if (len != 0 && len != prev_len) {
        total_count++;
        words_same_length = 0;
        diff_length_count++;
    }

    if (words_same_length) {
        printf("All words in a line are the same length.\n");
    } else {
        printf("Some words in a line are of different lengths.\n");
        printf("Number of words of the same length: %d\n", same_length_count);
        printf("Number of words of different lengths: %d\n", diff_length_count);
        printf("Total number of words: %d\n", total_count);
    }

    return 0;
}
int i, j;
int lr4() {
   char str[1000];
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    
    for (i = 0, j = 0; str[i] != '\0'; i++) {
        if ((str[i] < '0' || str[i] > '9')) { 
            str[j++] = str[i]; 
        }
    }
    str[j] = '\0'; 

    printf("Result: %s\n", str);

    return 0;
}
int containsNumber(char* str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            return 1;
        }
    }
    return 0;
}

int lr4dop() {

    char str[1000];
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin); 

    int wordCount = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            wordCount++;
            while ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
                i++;
            }
        }
    }

    int deleteNumbers = wordCount % 2 == 0 ? 1 : 0;

    int j = 0;
    for (int i = 0; str[i] != '\0';) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            int start = i;
            while ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
                i++;
            }
            if (deleteNumbers == containsNumber(&str[start])) {
                while (start < i) {
                    str[j++] = str[start++];
                }
            }
        } else {
            str[j++] = str[i++];
        }
    }
    str[j] = '\0';

    printf("Result: %s\n", str);

    return 0;
}
int lr5() {
    struct Stats {
    int max;
    float average;
    char g;
};
    struct Stats stats;
    printf("Enter the array numbers:\n");
    int arr[10];
    int evenSum = 0, oddSum = 0;
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            evenSum += arr[i];
        } else {
            oddSum += arr[i];
        }
    }
    
    if (evenSum < oddSum) {
        for (int i = 0; i < 10; i += 2) {
            arr[i] = 0;
        }
    } else {
        for (int i = 1; i < 10; i += 2) {
            arr[i] = 0;
        }
    }
    
    stats.max = arr[0];
    float total = 0;
    for (int i = 0; i < 10; i++) {
        if (arr[i] > stats.max) {
            stats.max = arr[i];
        }
        total += arr[i];
    }

    stats.average = total / 10.0;

    
    if(evenSum == oddSum) {
        stats.g = 1; 
    } else {
        stats.g = 0; 
    }

    printf("Sum of elements with odd indices: %d\n", evenSum);
    printf("Sum of elements with even indices: %d\n", oddSum);
    printf("Maximum value in the array: %d\n", stats.max);
    printf("Average of all elements: %f\n", stats.average);
    
    if (stats.g == 1) {
        printf("The array represents an arithmetic progression.\n");
    } else {
        printf("The array does not represent an arithmetic progression.\n");
    }

    printf("Array after zeroing some elements:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
int lr5dop() {
    struct Stats {
    int max;
    float average;
    char g;
};
    struct Stats stats;
    printf("Enter the array numbers:\n");
    int arr[10];
    int evenSum = 0, oddSum = 0;
    
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            evenSum += arr[i];
        } else {
            oddSum += arr[i];
        }
    }
    
    if (evenSum < oddSum) {
        for (int i = 0; i < 10; i += 2) {
            arr[i] = 0;
        }
    } else {
        for (int i = 1; i < 10; i += 2) {
            arr[i] = 0;
        }
    }
    
    stats.max = arr[0];
    float total = 0;
    for (int i = 0; i < 10; i++) {
        if (arr[i] > stats.max) {
            stats.max = arr[i];
        }
        total += arr[i];
    }

    stats.average = total / 10.0;

    
    if(evenSum == oddSum) {
        stats.g = 1; 
    } else {
        stats.g = 0; 
    }

    printf("Sum of elements with odd indices: %d\n", evenSum);
    printf("Sum of elements with even indices: %d\n", oddSum);
    printf("Maximum value in the array: %d\n", stats.max);
    printf("Average of all elements: %f\n", stats.average);
    
    if (stats.g == 1) {
        printf("The array represents an arithmetic progression.\n");
    } else {
        printf("The array does not represent an arithmetic progression.\n");
    }

    printf("Array after zeroing some elements:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}
int lr6() {
    int x[K][N];
    int str;
    int aver; 
    int i, j;
    for( i = 0; i < K; i++ )
        for( j = 0; j < N; j++ )
            scanf("%d", &x[i][j]);
    aver = 0;
    for( i = 0; i < K; i++ )
        for( j = 0; j < N; j++ )
            aver = aver + x[i][j];
    aver = aver / (K*N);
    str=0;
    for( i = 0; i < K; i++ )
    {
        for( j = 0; j < N; j++ )
            str = str + x[i][j];
        str = str / N;
        {
            if( str < aver )
                for( j = 0; j < N; j++ )
                     x[i][j] = 0;
        }
    }
    printf("Final array:\n");
    for( i = 0; i < K; i++ )
    {
        for( j = 0; j < N; j++ )
            printf("%4d ", x[i][j]);
        printf("\n");
    }
    return 0;
}
int lr6dop() {
    int x[K][N];
    int str;
    int aver;
    int i, j;

    srand(time(0)); 

    for (i = 0; i < K; i++)
        for (j = 0; j < N; j++)
            scanf("%d", &x[i][j]);

    aver = 0;
    for (i = 0; i < K; i++)
        for (j = 0; j < N; j++)
            aver = aver + x[i][j];
    aver = aver / (K * N);

    for (i = 0; i < K; i++) {
        str = 0; 

        for (j = 0; j < N; j++)
            str = str + x[i][j];

        str = str / N;
        if (str < aver) { 
            for (j = 0; j < N; j++) {
                x[i][j] = rand() % 10; 
            }
        }
    }

    printf("Final array:\n");
    for (i = 0; i < K; i++) {
        for (j = 0; j < N; j++)
            printf("%4d ", x[i][j]);
        printf("\n");
    }
    
    return 0;
}



unsigned char swapBitsInByte(unsigned char x)
{
    x = ((x >> 4) & 0x0F) | ((x << 4) & 0xF0);
    x = ((x >> 2) & 0x33) | ((x << 2) & 0xCC);
    x = ((x >> 1) & 0x55) | ((x << 1) & 0xAA);

    return x;
}

unsigned long swapBytesInLong(unsigned long Q)
{
    unsigned long result = 0;
    for (int i = 0; i < sizeof(unsigned long); i++) {
        unsigned char byte = (Q >> (i * 8)) & 0xFF;
        byte = swapBitsInByte(byte);
        result |= ((unsigned long)byte << (i * 8));
    }

    return result;
}

int lr7()
{
    unsigned long Q;
    printf("Enter an integer: ");
    scanf("%lu", &Q);

    unsigned long result = swapBytesInLong(Q);

    printf("Original number: %lu\n", Q);
    printf("Number after exchange of binary digits in each byte: %lu\n", result);

    return 0;
}

