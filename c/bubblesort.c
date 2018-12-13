#include <stdio.h>

void BubbleSort(int numbers[], int array_size)
{
  int i, j, temp;
  for( i=0 ; i<(array_size-1) ; i++){
    for( j = ( array_size - 1 ) ; j > i ; j--){
      if(numbers[j-1] > numbers[j]){
        temp = numbers[j-1];
        numbers[j-1] = numbers[j];
        numbers[j] = temp; 
      }
    }
  }
}

int main(void){
  //int figure[10]={1,2,3,4,5,6,7,8,9,10};
  int figure[10]={1,219,726,5375,52,7,63,24,69,32};
  BubbleSort(figure, 10);
  for(int i=0;i<10;i++){
    printf("%d\n",figure[i]);
  }
  return 0;
}
