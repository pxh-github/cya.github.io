#include <stdio.h>
typedef long long int llint;

// int add(llint x, llint y, llint k,llint a[])
// {
//     for (llint i = x - 1; i < y; i++)
//     {
//         a[i] += k;
//     }
// }
int main()
{
    llint n, m;
    scanf("%lld %lld", &n, &m);
    llint a[n], x[m], y[m], k[m], p[m], q[m];
    llint sum[m];
    for (llint i = 0; i < n; i++)
    {
        scanf("%lld", &a[i]);
    }
    for (llint i = 0; i < m; i++)
    {
        scanf("%lld %lld %lld", &x[i], &y[i], &k[i]);
        for (llint j = x[i] - 1; j < y[i]; j++)
        {
            a[j] += k[i];
        }
    }
    for (llint i = 0; i < m; i++)
    {
        scanf("%lld %lld", &p[i], &q[i]);
    }
    for (llint j = 0; j < m; j++)
    {
        llint sum = 0;
        for (llint i = p[j] - 1; i < q[j]; i++)
        {
            sum += a[i];
        }
        printf("%lld\n", sum);
    }
    return 0;
}