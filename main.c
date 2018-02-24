#include<stdio.h>
#define X 1
#define Y 1
#define columns 3
int id(int x, int y);
int const_point(int x, int y);
int point(int x, int y);
int main(){
    printf("%d\n", id(X, Y));
    printf("%d\n", const_point(X, Y));
    printf("%d\n", point(X, Y));
}
int point(int x, int y){
    int arr[][columns] = {{1, 4, 6}, {8, 9, 12}};
    int p = x * columns + y;
    return *(*arr + p);
}
int const_point(int x, int y){
    int arr[][columns] = {{1, 4, 6}, {8, 9, 12}};
    return *(*(arr + x) + y);
}
int id(int x, int y){
    int arr[][columns] = {{1, 4, 6}, {8, 9, 12}};
    return arr[x][y];
}
