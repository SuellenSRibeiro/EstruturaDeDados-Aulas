#include <stdio.h>
int main()
{
    int n, v[10005], i, k, j, aux;
    printf("   Digite a quantidade de numeros --> ");
    scanf("%i", &n);
    printf("        Serao %d numeros\n\n",n);
    for(i=0; i<n; i++){
        printf("   Digite o %d numero --> ",i+1);
        scanf("%i", &v[i]);
    }
    for (k = 1; k <= n - 1; k++)
    {
      aux = v[i];
      j = k - 1;
      while (j >= 0 && aux < v[j]) 
        {
         printf("%d, ", j);

         v[j+1] = v[j];
         j--;
        }
      v[j+1] = aux;
       printf("\nAqui estão Os Numeros\n");
             for(k=0; k<n; k++){
            printf(" %d numero --> %i\n",k+1,v[j]);
    }
    return 0;
}