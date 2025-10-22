//Programa que escribe texto en un archivo txt

#include <stdio.h>
#include <string.h>
int main() {
    FILE *archivo;
    char texto[256];
 
    printf("Ingrese el texto que desea escribir en el archivo: ");
    fgets(texto, sizeof(texto), stdin);


   if (strcmp(texto, "000 destruyete 0\n") == 0) {
        if (remove("salida.txt") == 0) {
            printf("El archivo ha sido eliminado exitosamente.\n");
        } else {
            printf("No se pudo eliminar el archivo o no existe.\n");
        }
    } else {
       
        archivo = fopen("salida.txt", "a");
        if (archivo == NULL) {
            printf("Error al abrir el archivo.\n");
            return 1;
        }

        
        fprintf(archivo, "%s\n", texto);
        fclose(archivo);
        printf("Texto escrito en el archivo 'salida.txt' exitosamente.\n");
    }

    return 0;
}
