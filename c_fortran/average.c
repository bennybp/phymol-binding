
double average_3(double x, double y, double z)
{
    return (x+y+z)/3.0;
}

double average(const double * v, int count)
{
    double a = 0.0;
    for(int i = 0; i < count; i++)
        a += v[i];
    
    return a / count;
}
