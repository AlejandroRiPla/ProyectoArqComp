//Método de Inserción
#include<stdio.h>
void Insercion(int m[],int n_elementos);
int m[]={25,2,7,3,67,43,1,15,9,32};
int main()
{
  Insercion(m,10);
  return(0);
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
