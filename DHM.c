#include<stdio.h> 
#include<math.h> 
  
// Power function to return value of x ^ y mod P 
long long int power(long long int x, long long int y, 
                                     long long int P) 
{  
    if (y == 1) 
        return x; 
  
    else
        return (((long long int)pow(x, y)) % P); 
} 
  
//Driver program 
int main() 
{ 
     int P, G, XA, x, y,z, XB, K1, K2,YA,YB;  
      
    // Both the persons will be agreed upon the  
        // public keys G and P  
     // A prime number P is taken 
    printf("Enter the value of P:");
	scanf("%d",&P);  
  
    // A primitve root for P, G is taken 
   printf("Enter the value of G:");
	scanf("%d",&G);  
  
    
     printf("Enter the value of x,y,z:");
     scanf("%d%d%d",&x,&y,&z); 
     
	 XA =x*y*z; 
	  XB =x+y+z; 
	
	 printf("XA = %d\n",XA);//private key of A
	 	 
	 printf("XB = %d\n",XB);// private key of B
	 
	 
	 
	 YA=power(G,XA, P);//public key of A
	 YB=power(G,XB, P);//Public key of B
	
	printf("XA = %d\n",YA);
	 
	 printf("XB = %d\n",YB);
	 
	 K1=power(YB,XA,P); //secret key of A
	 K1=power(YA,XB,P);//secret key of B
	 
	 printf("K1 = %d\n",K1);
	 
	 printf("K1 = %d\n",K1);
	    
	return 0;
  
     
}
