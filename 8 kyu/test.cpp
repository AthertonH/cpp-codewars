#include <iostream>

int main(){
    int a[] = {2, 8};

    int s1 = sizeof(a);
    int s2 = sizeof(a[0]);

    printf("size a=%d, size a[0]=%d", s1, s2);

}