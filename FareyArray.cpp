#include <stdio.h>

struct f
{
    int p, q, next;
};

int main() {
    struct f drobi[1000];
    int n = 6;
    drobi[0].p = 0;
    drobi[0].q = 1;
    drobi[0].next = 1;
    drobi[1].p = 1;
    drobi[1].q = 1;
    drobi[1].next = 0;
    int k = 2;
    int j1, j2;
    for (int i = 0; i <= n; i++) {
        j1 = 0;
        j2 = drobi[j1].next;
        while (j2 != 0) {
            if ((drobi[j1].q + drobi[j2].q) == i) {
                drobi[k].p = drobi[j1].p + drobi[j2].p;
                drobi[k].q = i;
                drobi[k].next = j2;
                drobi[j1].next = k;
                k++;
            }
            j1 = j2;
            j2 = drobi[j1].next;
        }
    }
    for (int i = 0; i < k; i++){
        printf("%d/%d\n", drobi[i].p, drobi[i].q);
    }
}
