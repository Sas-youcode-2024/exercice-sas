#include <stdio.h>

int main() {
    // Write C code here
    int age, tel;
    char nom [100], prenom[100],sexe[100];

    printf("entrer les infos\n");
    scanf("%d",&age);
    scanf("%d",&tel);
    scanf("%s",&nom);
    scanf("%s",&prenom);
    scanf("%s",&sexe);

        printf("age= %d \n,tel=%d\n,nom=%s\n, prenom=%s\n,sex=%s\n",age,tel,nom,prenom,sexe);



    return 0;
}
