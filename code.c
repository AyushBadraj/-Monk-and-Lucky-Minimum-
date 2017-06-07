#include <stdio.h>

int main() {
int i,j,t,n,ar[2],a;
scanf("%d",&t);

for(i=0;i<t;i++){
ar[0]=0;
ar[1]=0;
scanf("%d",&n);
scanf("%d",&a);
ar[0]=a;
ar[1]=1;

 for(j=1;j<n;j++){
 scanf("%d",&a);
 if(a<ar[0]) {
 ar[0]=a;
 ar[1]=0;
 }
 if(a==ar[0]){
ar[1]++;
}

}
if(ar[1]%2)
printf("Lucky\n");
else
printf("Unlucky\n");
}
}
