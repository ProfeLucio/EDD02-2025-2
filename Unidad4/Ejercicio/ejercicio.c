#include <stdio.h>
int llenarArray(int vector[8]);
int mostrarArray(int vector[8]);
void bubbleSort(int arr[], int n);
int main(){
    int vectorPrincipal[8];
    int opcion;
    do {
        printf("1. Llenar Vector\n");
        printf("2. Mostrar Vector\n");
        printf("3. Ordenamiento Burbuja\n");
        printf("10. Salir\n");
        printf("Elija una opción: ");
        scanf("%d", &opcion);
            switch(opcion){
                case 1: llenarArray(&vectorPrincipal[8]); break;
                case 2: mostrarArray(&vectorPrincipal[8]); break;
                case 3: bubbleSort(&vectorPrincipal[8], 8);

            } 
    }while(opcion!=10);
}

int llenarArray(int vector[8]){
    for(int i=0; i<8; i++){
        printf("Digite los puntos de %d ", i+1);
        scanf("%d", &vector[i]);
    }
    return 0;
}

int mostrarArray(int vector[8]){
    for(int i=0; i<8; i++){
        printf("Los puntos de %d son %d\n", i+1, vector[i]);
        
    }
    return 0;
};

void bubbleSort(int arr[8], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            // Si el elemento actual es mayor que el siguiente, intercambiarlos
            if (arr[j] > arr[j + 1]) {
            int temp = arr[j];
            arr[j] = arr[j + 1];
            arr[j + 1] = temp;
            }
        }
    }
}
