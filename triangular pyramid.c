/*The code calculates the surface area and volume of the equilateral triangular pyramid */

#include<stdio.h>
#include<math.h>

int main(){
	
	float length;
	float area;
	float perimeter;
	float u;
	float volume;
	float height;

	printf("Please enter the side length of the base equilateral triangle:");
	scanf("%f",&length);
	
	area=(length*length)*sqrt(3);
	volume=((length*length*length)*sqrt(2))/12;

	printf("The volume of this pyramid is %.3f\n",volume);
	printf("The area of this pyramid is %.3f ",area);
		
	return 0;
	}

	
