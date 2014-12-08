/* @ Author: Adnan Mahmud 
   @ Institut: FH Technikum Wien
   @ Personalkennzeichen: ic12b087
   @ Gruppe: 1B1 */


#include <stdio.h>
#include <math.h>

typedef struct Vektor
{
	double x;
	double y;
	double z;
} v3d;

v3d add(v3d a, v3d b);
v3d sub(v3d a, v3d b);
double length(v3d c);
double dot(v3d a, v3d b);

int main(int argc, char* argv[])
{
	v3d a={7,8,9};
	v3d b={5,4,3};
	v3d c={0,0,0};

	printf("a.x=%2.2f a.y=%2.2f a.z=%2.2f\n",a.x,a.y,a.z);
	printf("b.x=%2.2f b.y=%2.2f b.z=%2.2f\n",b.x,b.y,b.z);
	printf("c.x=%2.2f c.y=%2.2f c.z=%2.2f\n",c.x,c.y,c.z);
	
	
	printf("Addition von a+b=c:\n");
	c=add(a,b);
	printf("c.x=%2.2f c.y=%2.2f c.z=%2.2f\n",c.x,c.y,c.z);

	printf("Subtraktion von a-b=c:\n");
	c=sub(a,b);
	printf("c.x=%2.2f c.y=%2.2f c.z=%2.2f\n",c.x,c.y,c.z);

	printf("Laenge von C: %2.2f \n",length(c));
	printf("Skalarprodukt von A und B=%2.2f\n",dot(a,b));
	return 0;
}

v3d add(v3d a, v3d b)
{
	v3d c={0,0,0};
	c.x=a.x+b.x;
	c.y=a.y+b.y;
	c.z=a.z+b.z;
	return c;
}

v3d sub(v3d a, v3d b)
{
	v3d c={0,0,0};
	c.x=a.x-b.x;
	c.y=a.y-b.y;
	c.z=a.z-b.z;
	return c;
}

double length(v3d c)
{
	return(sqrt((c.x*c.x+c.y*c.y+c.z*c.z)));
}

double dot(v3d a, v3d b)
{
	return(a.x*b.x+a.y*b.y+a.z*b.z);
}