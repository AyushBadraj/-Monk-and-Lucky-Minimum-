#include <stdio.h>

int main()
{
    int num,i,j,k; 
    
    scanf("%d",&num);
    int n[num],a[num][100000];
   // int min[num];
    int x=0;
    int temp,counter[num],min;
    while(x<num){
        scanf("%d",&n[x]);
    for(i=0;i<n[x];i++){
        scanf("%d",&a[x][i]);
    }
    for(i=0;i<n[x];i++){
        for(j=i;j<n[x];j++){
            if(a[x][i]>a[x][j]){
                temp = a[x][i];
                a[x][i] = a[x][j];
                a[x][j] = temp;
            }
        }
    }
   /* for(i=0;i<n[x];i++){
        printf("%d",a[x][i]);
    }
    printf("\n");
    min = a[x][0];*/
    k=0;
    counter[x]=0;
    while(a[x][0]==a[x][k]){
        counter[x]++;
        k++;
    }
    x++;
    }
    for(i=0;i<num;i++){
        if(counter[i] % 2 == 0){printf("Unlucky \n");}
        else {printf("Lucky\n");}
    }
    return 0;
}
