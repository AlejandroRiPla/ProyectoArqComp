#include<stdio.h>
#define ELEMENTOS 10

void Insercion(int [],int);
int calcularMinimo(int [],int);
int calcularMaximo(int[],int);

int m[ELEMENTOS]={25,32,250,98,3,12,60,8,75,25};

int main()
{
  int minimo,maximo;
  minimo = calcularMinimo(m,ELEMENTOS);
  maximo = calcularMaximo(m,ELEMENTOS);

  return(0);
}
int calcularMinimo(int m[],int n_elementos){
  int min;
  Insercion(m,n_elementos);
  min=m[0];
  return min;
}
int calcularMaximo(int m[],int n_elementos){
  int max;
  Insercion(m,n_elementos);
  max=m[n_elementos-1];
  return max;
}

void Insercion(int m[],int n_elementos)
{
  int i,k,x;

  //Desde el segundo elemento
  for(i=1;i<n_elementos;i++)
    {
      x=m[i];
      k=i-1;
      while(k>=0 && x<m[k])
	{
	  m[k+1]=m[k];//Hacer espacio para insertar
	  k--;
	}
      m[k+1]=x;
    }

}


