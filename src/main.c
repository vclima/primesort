/* Contador de palavras
 *
 * Este programa recebera uma serie de caracteres representando palavras em sua
 * entrada. Ao receber um caractere fim de linha ('\n'), deve imprimir na tela o
 * numero de palavras separadas que recebeu e, apos, encerrar.
 */

#include <stdio.h>
#include <math.h>
#define MAXIMO 50000

int primo(int testar){
  int i,lim;
  lim=sqrt(testar);
  if(testar%2==0){
    return testar;
  }
  for(i=3;i<=lim;i=i+2){
    if(testar%i==0){
      return testar;
    }
  }
  return -1;
}

int main() {

  int entrada[MAXIMO];
  int np[MAXIMO];
  int i,tamanho,j,aux;
  FILE *out;
  for(i=0;i<MAXIMO;i++){
    scanf("%d",&entrada[i]);
    if(entrada[i]<0){
        break;
    }
  }
  tamanho=i;
  j=0;
  for(i=0;i<tamanho;i++){
    aux=primo(entrada[i]);
    if(aux>0){
      printf("%d",aux);
      np[j]=aux;
      j++;
    }
  }
  for(i=0;i<j;i++){
    printf("%d\n",np[i]);
  }
  out=popen("sort -n","w");
  if(out!=NULL){
    for(i=0;i<j;i++){
      fprintf(out,"%d\n",np[i]);
    }
    pclose(out);
  }
  return 0;
}
