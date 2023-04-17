#include "float_vector.h"
#include <stdio.h>

int main() {
    FloatVector *vec = create(2);
    print(vec);

    append(vec, 0.0);
    append(vec, 1.0);
    print(vec);
    
    append(vec, 2.0);
    
    print(vec);

    destroy(&vec);

    return 0;
}

// gcc -c float_vector.c
// gcc app.c float_vector.o -o app
// ./app