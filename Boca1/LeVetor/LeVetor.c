/*#include <stdio.h>

//Do not forget you can compress it all into a single function to have your main function cleaner (*_*) 

//Be careful with global variables
int n;

void array_Reader(int n, int vec[]);
void array_Printer(int n, int vec[]);

int main(void) {
  //We're calling "n" the array length
  printf("Type n\n");
  scanf("%d",&n);
  //Declaring the array
  int ar1[n];
  array_Reader(n,ar1);
  array_Printer(n,ar1);
  return 0;
}

//Reading the array
void array_Reader(int n, int vec[]){
  for(int i = 0; i<n; i++){
    printf("There are %d empty spaces remaining\n",n-i);
    scanf("%d\n",&vec[i]);
  }
}

//Printing the array
void array_Printer(int n, int vec[]){
  printf("The array stored is\n{");
  for(int i = 0; i<n-1; i++){
    printf("%d,",vec[i]);
  }
  printf("%d}\n",vec[n-1]);
}*/

//Below, there is an example of a compressed function I mentioned in the beginning

#include <stdio.h>

void array_Reader(int n, int vec[]);
void array_Printer(int n, int vec[]);
void Read_n_Print(int n, int vec[]);

int main()
{
    int n;
    printf("Type n\n");
    scanf("%d", &n);
    int *array1 = (int *)malloc(sizeof(int) * n);
    Read_n_Print(n, array1);
    return 0;
}

void array_Reader(int n, int vec[])
{
    for (int i = 0; i < n; i++)
    {
        scanf("%d\n", &vec[i]);
    }
}

void array_Printer(int n, int vec[])
{
    for (int i = 0; i < n - 1; i++)
    {
        printf("%d,", vec[i]);
    }
    printf("%d}\n", vec[n - 1]);
}

void Read_n_Print(int n, int* vec)
{
    *vec = (int) malloc(sizeof(int) * n);
    array_Reader(n, vec);
    array_Printer(n, vec);
}