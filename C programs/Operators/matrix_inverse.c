#include<stdio.h>
#include<math.h>
int main()
{
    int m[2][2]={{1,2},{3,4}};
    int adj[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int det1,det2;
    det1=(m[0][0]*m[1][1])-(m[0][1]*m[1][0]);
    printf("Determinant of 2x2 matrix: %d\n",det1);
    
    det2= adj[0][0]*((adj[1][1]*adj[2][2]-adj[1][2]*adj[2][1]))-
         adj[0][1]*((adj[1][0]*adj[2][2])-(adj[1][2]*adj[2][0]))+
         adj[0][2]*((adj[1][0]*adj[2][1])-(adj[1][1]*adj[2][0]));
    printf("Determinant of 3x3 matrix: %d\n",det2);
    
    printf("\nInverse of 2x2 matrix:\n");
    float inv2[2][2] = {
        {m[1][1]/(float)det1, -m[0][1]/(float)det1},
        {-m[1][0]/(float)det1, m[0][0]/(float)det1}
    };
    
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            printf("%.2f ",inv2[i][j]);
        }
        printf("\n");
    }
    return 0;
}