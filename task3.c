#include <stdio.h>

int main() {
    int numOfCities ,numPopulation, minPopulation,maxPopulation;
    int sum=0;
    
    
    printf("Enter the number of cities:");
    scanf("%d" ,&numOfCities);
    
    for(int i =1 ; i<=numOfCities ;i++){
        
    printf("Enter the population of city %d:" ,i);
    scanf("%d" ,&numPopulation);
    sum += numPopulation;
    
    if (i == 1) {
                minPopulation = numPopulation; 
                maxPopulation = numPopulation;
            } else {
                if (numPopulation > maxPopulation) {
                    maxPopulation = numPopulation;
                }

                if (numPopulation < minPopulation) {
                    minPopulation = numPopulation;
                }
            }
    }
    
    
    double meanPopulation = (double)sum / numOfCities;

    printf("Mean population: %.2f\n", meanPopulation);
    printf("Maximum population: %d\n", maxPopulation);
    printf("Minimum population: %d\n", minPopulation);

    return 0;
        
        
   
}
