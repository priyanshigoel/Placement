#include <stdio.h>

void update(int *a,int *b) {
     int c,d;
     c=*a + *b;
     if((*a-*b)>0)
        d=*a-*b;
     else {
         d=-1*(*a-*b);
     }
      *a=c;
      *b=d;   
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
