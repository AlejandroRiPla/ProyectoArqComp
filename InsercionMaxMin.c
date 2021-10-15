#include<stdio.h>
void Insercion(int m[],int n_elementos);
int m[]={25,32,250,98,3,12,60,8,75,25};
int main()
{
  int minimo,maximo;
  minimo = calcularMinimo(m,10);
  maximo = calcularMaximo(m,10);
  printf("\n%d - %d",minimo,maximo);
  
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

