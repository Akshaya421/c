//SET - 3
// 7.Write a program to compute mean, variance, Standard Deviation of n elements in single dimension array. 
#include <stdio.h>
#include <math.h>

// Function to calculate mean
double calculate_mean(int arr[], int n) {
    double sum = 0.0;
    int i;
    for ( i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum / n;
}

// Function to calculate variance
double calculate_variance(int arr[], int n, double mean) {
    double sum = 0.0;
    int i;
    for ( i = 0; i < n; i++) {
        sum += pow(arr[i] - mean, 2);
    }
    return sum / n;
}

// Function to calculate standard deviation
double calculate_std_dev(double variance) {
    return sqrt(variance);
}

int main() {
    int n;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    double mean = calculate_mean(arr, n);
    double variance = calculate_variance(arr, n, mean);
    double std_dev = calculate_std_dev(variance);
printf("Mean: %.2f\n", mean);
    printf("Variance: %.2f\n", variance);
    printf("Standard Deviation: %.2f\n", std_dev);

    return 0;
}
//Example Output
//Enter the number of elements: 5
//Enter 5 elements:
//1 2 3 4 5
//Mean: 3.00  Variance: 2.00  Standard Deviation: 1.41


