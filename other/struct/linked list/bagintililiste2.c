#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/*Urun adlı bir bağlı struct yapısı oluşturunuz bu yapı ürün adı ürün barkodu ve fiyat bilgilerini alsın
daha sonra bu listeyi yazdırmak için listele fonksiyonu ve bu listeden eleman ekleme veya cıkarma fonksiyonlarını yazınız.Maın
fonsiyonnunda da bu işlemleri yapapcak bir menü oluşturunuz.*/

typedef struct product {
    char name[40];
    int barcode;
    int price;
    struct product *next;
} Product;

Product *root = NULL;
Product **ptr = &root;

void listProducts();
void addProduct();
void removeProduct();

int main(void) {
    int select;

    while (1) {
        printf("Choose section [1-4]:\n ");
        printf("1-List Products\n");
        printf("2-Add Product\n");
        printf("3-Remove Product\n");
        printf("4-Exit\n");
        scanf("%d", &select);

        switch (select) {
            case 1:
                listProducts();
                break;
            case 2:
                addProduct();
                break;
            case 3:
                removeProduct();
                break;
            case 4:
                exit(0);
            default:
                printf("Selected invalid value!!!\n");
                break;
        }
    }

    return 0;
}

void addProduct() {
    Product *newProduct = malloc(sizeof(Product));
    if (newProduct == NULL) {
        printf("Memory allocation failed!\n");
        return;
    }

    printf("Enter Product Name: ");
    scanf("%s", newProduct->name);
    printf("Enter Product Barcode: ");
    scanf("%d", &newProduct->barcode);
    printf("Enter Product Price: ");
    scanf("%d", &newProduct->price);

    newProduct->next = NULL;

    if (root == NULL) {
        root = newProduct;
        *ptr = root;
    } else {
        (*ptr)->next = newProduct;
        *ptr = (*ptr)->next;
    }
}

void listProducts() {
    Product *current = root;
    int counter = 1;

    while (current != NULL) {
        printf("%d. Product: Name: %s     Barcode: %d  Price: %d\n", counter++, current->name, current->barcode, current->price);
        current = current->next;
    }
}

void removeProduct() {
    // You can implement this function if you want
}
