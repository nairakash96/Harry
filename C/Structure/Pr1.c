//Vector addition
#include <stdio.h>
#include <conio.h>
struct vector
{
    int x;
    int y;
    int z;
};
struct vector sumV(struct vector v0 ,struct vector v1){
struct vector result;
result.x=v0.x+v1.x;
result.y=v0.y+v1.y;
result.z=v0.z+v1.z;
return result;
}
int main()
{
    struct vector v[10],sum;
    int n,i;
    printf("\nEnter no of vector ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("Enter X dimension for vector %d ",i+1);
        scanf("%d", &v[i].x);
        printf("Enter Y dimension for vector %d ",i+1);
        scanf("%d", &v[i].y);
        printf("Enter Z dimension for vector %d ",i+1);
        scanf("%d", &v[i].z);
    }
    for (int i = 0; i < n; i++){
        printf("\n%dx + %dy = %d", v[i].x, v[i].y,v[i].z);
       // printf("\nX dim is %d and Y dim is %d", v[i].x, v[i].y);
    }
     sum=sumV(v[i],v[i+1]);
             printf("\n\nResult X=%d\tY=%d\tZ=%d",sum.x,sum.y,sum.z);
    return 0;
}