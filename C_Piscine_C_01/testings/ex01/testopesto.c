int main(void)
{
    int v;
    v = 6;
    int * p1 = &v;
    int ** p2 = &p1;
    int *** p3 = &p2;
    int **** p4 = &p3;
    int ***** p5 = &p4;
    int ****** p6 = &p5;
    int ******* p7 = &p6;
    int ******** p8 = &p7;
    int ********* p9 = &p8;

    ft_ultimate_ft(p9);
    printf("%d", v);
    return(0);
}