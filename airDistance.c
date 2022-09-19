/**
 * Author: Su Poe
 *         supoe03@huskers.unl.edu
 * Date: 2022/08/23
 *
 * Write a program that interactively prompts the user to enter the latitude and longitude of two locations and then computes the distance
 *
 */
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main(int argc, char **argv) {
   const int EARTHRADIUS = 6371;
   double latitudeA;
   double longitudeA;
   double latitudeB;
   double longitudeB;
   double AirDistance;

printf("\nInput first latitude location:");
scanf("%lf", &latitudeA);
printf("\nInput first longitude location:");
scanf("%lf", &longitudeA);
printf("\nInput second latitude location:");
scanf("%lf", &latitudeB);
printf("\nInput second longitude location:");
scanf("%lf", &longitudeB);

    double radlatitudeA = (latitudeA / 180) * M_PI;
    double radlatitudeB = (latitudeB / 180) * M_PI;
    double radlongitudeA = (longitudeA / 180) * M_PI;
    double radlongitudeB = (longitudeB / 180) * M_PI;
    AirDistance = acos(sin(radlatitudeA) * sin(radlatitudeB) + cos(radlatitudeA) * cos(radlatitudeB) * cos(radlongitudeA - radlongitudeB)) * EARTHRADIUS;

printf("Origin: (%lf,%lf)\n", latitudeA,longitudeA);
printf("Destination: (%lf,%lf)\n", latitudeB,longitudeB);
printf("Air distance: %lf kms\n", AirDistance);
}