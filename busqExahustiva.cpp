#include <iostream>
#include <string.h>
#include <ctime>
#include <stdio.h>
#define max 5000
using namespace std;

void fuerza(char a[max], char b[max], int n, int m);


int main() {
  int i, j, P, n, m;
  //float t,ini,fin;
  char a[max], b[max];
  cout<<"\t\t Algoritmo de Busqueda Exahustiva"<<endl;
  cout<<"Ingrese la cadena: "<<endl;
  gets(a);
  cout<<"Ingrese subcadena a buscar: "<<endl;
  cin>>b;
  n=strlen(a);
  m=strlen(b);

  fuerza(a,b,n,m);
  return 0;
}


void fuerza(char a[max], char b[max], int n, int m){
  int k,i,j,band=0;
  for(i=0;i<=n;i++){
    k=i;
    j=0;
    while(a[k]==b[j]&& j<=m){
      k++;
      j++;
      if(j>m-1){
        cout<<"se encuentra en la posicion "<<i+1<<endl;
        band=1;
        
      }
      else band=0;
	  
	  if (band=0){
        cout<<"no se encuentra "<<endl;
      }
    }

  }
}
