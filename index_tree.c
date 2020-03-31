#include <stdio.h>
#define NUMBER 7

int tree[NUMBER];

int sum(int i) {
    int res = 0;
    while (i > 0) {
        res += tree[i];
        i -= (i & -i);
    }
    return res;
}

void update (int i, int diff) {
    while (i <= NUMBER) {
        tree[i] += diff;
        i += (i & -i);
    }
}

int getSection (int start, int end) {
    return sum(end) - sum(start-1);
}

int main(void) {
   update(1,7);
   update(2,1);
   update(3,9);
   update(4,5);
   update(5,6);
   update(6,4);
   update(7,1);
   printf("prefix sum(1~7) :%d\n", getSection(1,7));
   update(6,3);
   printf("prefix sum(4~7) :%d\n", getSection(4,7));
   system("pause");
}








