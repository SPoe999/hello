/**
 * Author: Su Poe
 *         supoe03@huskers.unl.edu
 * Date: 2022/08/23
 *
 *  write an application for the company to help customers track their mobile data usage.
 *
 */
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv){
   double plnSize = atof(argv[1]);
   double curtDay = atof(argv[2]);
   double Gb_Used = atof(argv[3]);

   double avgDailyUsed = Gb_Used / curtDay;
   double SugDailyUsed = plnSize / 30;
   double daysLeft = 30 - curtDay;
   double datasLeft = plnSize - Gb_Used;

   printf("\n%.0lf days used, %.0lf days remaining\n", curtDay, daysLeft);
   printf("Average daily use: %.2lf GB / day\n\n", avgDailyUsed);

   if (Gb_Used >= plnSize){
   printf("You have used all of your data available.\n");
    return 0;
}  else {}

if (avgDailyUsed > SugDailyUsed) {
    printf("You are EXCEEDING your average daily use (%.2lf GB/day).\n", SugDailyUsed);
    printf("Continuing this high usage, you'll exceed your data plan by \n%.2lf GB.\n\n", avgDailyUsed * daysLeft - datasLeft);
    printf("To stay below your data plan, use no more than %.2lf GB/day.",datasLeft / daysLeft);
} else if (avgDailyUsed <= SugDailyUsed){
    printf("You are under using your average daily use(%.2lf GB/day).\n",SugDailyUsed);
   // printf("Continuing this low usage, you'll lose your data plan by %.21f GB.\n\n", avgDailyUsed * daysLeft - datasLeft);
    printf("To stay above your data plan , use %.2lf GB/day.", datasLeft / daysLeft);
}
return 0;

}