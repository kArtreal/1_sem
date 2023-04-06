/*4. ƒан двумерный массив, размером (n на m). Ќайти минимальный элемент в каждой строке матрицы.
«атем все отрицательные элементы каждой строки заменить на соответствующий найденный
минимальный элемент, в случае отсутстви€ в строке отрицательных элементов данную строку
заменить строкой, содержащую максимальный элемент из найденных минимальных*/

#include<iostream>
#include <stdio.h>
int main()
{
    setlocale(LC_ALL,"Russian");
    int n,m;
    int a[10][10];
    printf("¬ведите размерность матрицы: ");
    scanf("%d %d",&n,&m);
    printf("«аполните матрицу значени€ми: \n");
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int arr_of_min[n];
    for (int i=0;i<n;i++){
        int temp_min=1000;
        for (int j=0;j<m;j++){
            if (a[i][j]<temp_min)
                temp_min=a[i][j];
        }
        arr_of_min[i]=temp_min;
    }
    int max_of_array=-1000;
    int index_of_max=-1;
    for (int i=0;i<n;i++){
        if(arr_of_min[i]>max_of_array){
            max_of_array=arr_of_min[i];
            index_of_max=i;
        }
    }
    printf("%d",index_of_max);

    for (int i=0;i<n;i++){
        int flag=0; //в строке нет отрицательных чисел
        for (int j=0;j<m;j++){
            if (a[i][j]<0)
                flag=1;
        }
        for (int j=0;j<m;j++){
            if (flag ==1){
                if (a[i][j]<0)
                    a[i][j]=arr_of_min[i];
            }
            if (flag==0)
                a[i][j]=a[index_of_max][j];
        }
    }
    printf("\n\n\n");
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
