#include <stdio.h>
#include <math.h>

#define MAX 3

typedef struct {
    int x;
    int y;
} coordenadas;

float DistanciaEuclidiana(coordenadas punto_combate, coordenadas batallon);
void PedirDatos(coordenadas *datos);

int main() {
    coordenadas punto_combate;
    coordenadas batallon[MAX];

    printf("\nIntroduce los datos del punto de combate:");
    PedirDatos(&punto_combate);

    for (int i = 0; i < MAX; i++) {
        printf("\nIntroduce los datos del batallon %d: ", i+1);
        PedirDatos(&batallon[i]);
    }

    float distancia_menor = DistanciaEuclidiana(punto_combate, batallon[0]);
    int num_batallon;

    for (int j = 0; j < MAX; j++) {
        float distancia_actual = DistanciaEuclidiana(punto_combate, batallon[j]);
        if (distancia_actual < distancia_menor) {
            distancia_menor = distancia_actual;
            num_batallon = j+1;
        }
    }

    printf("\nEl batallon mas cercano al punto de combate es %d con una distancia de %.2f", num_batallon, distancia_menor);

    return 0;
}

void PedirDatos(coordenadas *datos) {
    printf("\nIntroduce la coordenada X: ");
    scanf("%d", &datos->x);

    printf("\nIntroduce la coordenada Y: ");
    scanf("%d", &datos->y);
}

float DistanciaEuclidiana(coordenadas punto_combate, coordenadas batallon) {
    float distancia = sqrt( pow(batallon.x - punto_combate.x, 2) + pow(batallon.y - punto_combate.y, 2));

    return distancia;
}