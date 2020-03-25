#include <stdio.h>
#include "max.h"

using namespace std;


int max(int *iptr[], int n){

}
 
int main() {
    int n, i;
    int array[100];
    int *iptr[100];
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> array[(i + 3) % n]);
        iptr[i] = &(array[(i + 3) % n]);
    }
    printf("%d\n", max(iptr, n));
    return 0;
}