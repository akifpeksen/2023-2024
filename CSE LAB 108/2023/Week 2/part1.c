#include <stdio.h>
#define PI 3.14159

int main(){

float cube_edge, prism_length, prism_width, prism_height, sphere_radius, cone_radius, cone_height, cone_slant_height;

printf("Enter the edge length for cube: ");
scanf("%f",&cube_edge);
printf("Surface Area = %.2f, Volume = %.2f\n",(6*cube_edge*cube_edge), (cube_edge*cube_edge*cube_edge));

printf("Enter side length for rectangular prism: ");
scanf("%f",&prism_length);
printf("Enter side width: ");
scanf("%f",&prism_width);
printf("Enter side height: ");
scanf("%f",&prism_height);
printf("Surface Area = %.2f, Volume = %.2f\n",(2*(prism_length*prism_width+prism_height*prism_length+prism_width*prism_height)),
(prism_length*prism_width*prism_height));

printf("Enter the radius for sphere: ");
scanf("%f",&sphere_radius);
printf("Surface Area = %.2f, Volume = %.2f\n",(4*PI*sphere_radius*sphere_radius), (4*PI*sphere_radius*sphere_radius*sphere_radius/3));

printf("Enter the radius for cone: ");
scanf("%f",&cone_radius);
printf("Enter the height: ");
scanf("%f",&cone_height);
printf("Enter the slant height: ");
scanf("%f",&cone_slant_height);
printf("Surface Area = %.2f, Volume = %.2f\n",(PI*cone_radius*(cone_slant_height+cone_radius)), (PI*cone_radius*cone_radius*cone_height/3));



return 0;

}
