#include<stdio.h>
#include<stdlib.h>

int main(){
int conteo = 12;
int alumnos = 4;
int *grades;

grades = &conteo;

*(grades+sizeof(int)) = 38;
*(grades+2*sizeof(int)) = 96;
*(grades+3*sizeof(int)) = 68;

int *resultado = malloc(alumnos * sizeof(int));

for(int i = 0; i < alumnos; i++){
      if(*(grades+i*sizeof(int)) > 37){
          if((5-(*(grades+i*sizeof(int))%5)) < 3){
              *(resultado+i*sizeof(int)) = *(grades+i*sizeof(int)) + 5 - (*(grades+i*sizeof(int))%5);
          }
          else if((5-(*(grades+i*sizeof(int))%5)) >= 3){
              *(resultado+i*sizeof(int)) = *(grades+i*sizeof(int));
          }
      }
      else{
          *(resultado+i*sizeof(int)) = *(grades+i*sizeof(int));
      }
  }
  
  for(int i = 0; i < alumnos; i++){
    printf("%d ",*(resultado+i*sizeof(int)));
  }
return 0;
}
