#include <assert.h>

int fact_recursive(int n) {
    assert(n > 0);
    if (n == 1) {
        return 1;
    } else {
        int result = fact_recursive(n - 1);
        return n * result;
    }
}

int main() {
    int n = 3;
    int n1 = 4;
    int n2 = 5;
    assert(fact_recursive(n) == 6);
    assert(fact_recursive(n1) == 24);
    assert(fact_recursive(n2)== 120);
    return 0;
}