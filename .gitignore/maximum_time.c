#include <stdio.h>
#include<stdlib.h>
int main ()
{
  int i, a[12];
  int month=-1, date=-1, hour=-1, minu=-1;
  int j;
  int mmm;
    for (i = 0; i < 12; i++)
      scanf ("%d,", &a[i]);
      //month format//
    for(j=1;j>=0;j--)
    {
        for (i = 0; i < 12; i++)
        {
            if (a[i] == j)
            {
                month = a[i]*10;
	            a[i] = -1;
	            i=13;j=-1;
	        }
        }
    }
    if (month==10)
    {
        for (j=2;j>=0;j--)
	    {
	        for (i=0;i<12;i++)
	        {
	        if (a[i] == j)
		    {
		        month += a[i];
		        a[i] = -1;
		        j=-1;
		        i=12;
		    }
	        }
	    }
    }
    else if(month>=0)
    {
        for (j=9;j>=0;j--)
	    {
	        for (i=0;i<12;i++)
	        {
	        if (a[i] == j)
		    {
		        month += a[i];
		        a[i] = -1;
		        j=-1;
		        i=12;
		    }
	        }
	    }   
    }
    if(month<0)
    {
        printf("0");
        exit(0);
    }
    else if(month>0 && month<10)
    {   
        printf("0");
        printf("%d/",month);
    }
    else
        printf ("%d/", month);
  //Date format//
  for (j=3;j>=0;j--)
	    {
	        for (i=0;i<12;i++)
	        {
	        if (a[i] == j)
		    {
		        date= a[i] *10;
		        a[i] = -1;
		        j=-1;
		        i=12;
		    }
	        }
	    }   
    if (date==10 || date==20 || date==0)
    {
        for (j=9;j>=0;j--)
	    {
	        for (i=0;i<12;i++)
	        {
	        if (a[i] == j)
		    {
		        date += a[i];
		        a[i] = -1;
		        j=-1;
		        i=12;
		    }
	        }
	    }
    }
    else if(date<0)
    {
        printf("0");
        exit(0);
    }
    else
    {
        for (j=1;j>=0;j--)
	    {
	        for (i=0;i<12;i++)
	        {
	        if (a[i] == j)
		    {
		        date+= a[i];
		        a[i] = -1;
		        j=-1;
		        i=12;
		    }
	        }
	    }   
    }
	if(date==0)
    {
        printf("0");
        exit(0);
    }
    else if(date>0 && date<10)
    {   printf("0"); 
        printf("%d ",date);
    }
    else
         printf ("%d ", date);
         //Time format//
         for (j=2;j>=0;j--)
	    {
	        for (i=0;i<12;i++)
	        {
	        if (a[i] == j)
		    {
		        hour= a[i] *10;
		        a[i] = -1;
		        j=-1;
		        i=12;
		    }
	        }
	    }   
    if (hour==10 || date==0)
    {
        for (j=9;j>=0;j--)
	    {
	        for (i=0;i<12;i++)
	        {
	        if (a[i] == j)
		    {
		        hour += a[i];
		        a[i] = -1;
		        j=-1;
		        i=12;
		    }
	        }
	    }
    }
    else if(hour<0)
    {
        printf("0");
        exit(0);
    }
    else
    {
        for (j=3;j>=0;j--)
	    {
	        for (i=0;i<12;i++)
	        {
	        if (a[i] == j)
		    {
		        hour+= a[i];
		        a[i] = -1;
		        j=-1;
		        i=12;
		    }
	        }
	    }   
    }
	if(hour==0)
    {
        printf("0");
        exit(0);
    }
     else if(hour>0 && hour<10)
     {
         printf("0");
         printf(" %d:",date);
     }
    else
         printf (" %d:",hour);
    //Minute format//
         for (j=5;j>=0;j--)
	    {
	        for (i=0;i<12;i++)
	        {
	        if (a[i] == j)
		    {
		        minu= a[i] *10;
		        a[i] = -1;
		        j=-1;
		        i=12;
		    }
	        }
	    }   
    if (minu>=0)
    {
        for (j=9;j>=0;j--)
	    {
	        for (i=0;i<12;i++)
	        {
	        if (a[i] == j)
		    {
		        minu += a[i];
		        a[i] = -1;
		        j=-1;
		        i=12;
		    }
	        }
	    }
    }
     if(minu>=0 && minu<10)
    {   printf("0"); 
        printf("%d",minu);
    }
    else if(minu<0)
    {
        printf("0");
        exit(0);
    }
    else
    {
        printf("%d",minu);
    }
        
  return 0;
}
