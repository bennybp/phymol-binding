#include <stdio.h>

// Forward declarations
// in fortran library
extern "C" {
    double average_3(double, double, double);
    double average(double *, int);
}

int main(void)
{
    double avg = average_3(1.0, 2.0, 3.0);
    printf("Average of three numbers: %f\n", avg);

    double v[3] = {4.0, 4.0, 5.0};
    avg = average(v, 3);
    printf("Average of the array: %f\n", avg);
    return 0;
}
