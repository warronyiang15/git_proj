void sort(long long int n ,long long int data1[])
{
    int i , j,tmp,localc;
    for (i = 0 ; i < n ; i ++)
    {
        localc=0;
        for (j = n - 2 ; j>=i ; j-- )
        {   
            if (data1[j]>data1[j+1])  
            {  
            tmp = data1[j];  
            data1[j] = data1[j+1];  
            data1[j+1] = tmp;
            localc++;               
            }
        }
        if (localc == 0)  
        break ;   
    }
}
