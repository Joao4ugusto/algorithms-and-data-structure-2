typedef struct {
    int *data;
    int size;
} Vector;

void init(Vector *v, int size) {
    v->data = (int*)malloc(size * sizeof(int));
    v->size = size;
}

int get(Vector v, int index) {
    return v.data[index];
}

void set(Vector *v, int index, int value) {
    v->data[index] = value;
}

int dot_product(Vector v1, Vector v2) {
    if (v1.size != v2.size) {
        printf("Os vetores devem ter o mesmo tamanho!");
        return 0;
    }
    int result = 0;
    for (int i = 0; i < v1.size; i++) {
        result += v1.data[i] * v2.data[i];
    }
    return result;
}

float norm(Vector v) {
    float result = 0.0;
    for (int i = 0; i < v.size; i++) {
        result += pow(v.data[i], 2);
    }
    return sqrt(result);
}