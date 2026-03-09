// Passing argumets by reference
#include <stdio.h>
int num(int *a){
    *a = 30;
}
int main() {
    int a = 10;
    num(&a);
    printf("%d",a);
    return 0;
}

// Math functionx
#include <stdio.h>
#include <math.h>

int main() {
    int a = 25;
    printf("%.f\n",sqrt(a));
    printf("%.f\n",ceil(4.2));
    printf("%.f\n",floor(4.7));
    printf("%.f\n",round(4.7));
    printf("%.f\n",pow(2,3));
    return 0;
}

// Auto datatype
#include <stdio.h>
// stores in RAM
int main() {
    auto int a = 25;
    printf("%d\n",a);
    return 0;
}

// Register datatype
#include <stdio.h>
// stores in registers in CPU
int main() {
    register int a = 25;
    printf("%d\n",a);
    return 0;
}

// Static datatype
#include <stdio.h>
// makes variable static
void counter(){
    static int a = 1;
    a++;
    printf("%d\n",a);
}
int main() {
    counter();
    counter();
    counter();
    return 0;
}

a