//https://practice.geeksforgeeks.org/problems/ugly-numbers2254/1/
	/* Function to get the nth ugly number*/
	ull getNthUglyNo(int n) {
	    // code here
	    
	    long arr[n];
	   long num2=2;
	   long num3=3;
	   long num5=5;
	   long i2,i3,i5;
	    i2=0;
	    i3=0;
	    i5=0;
	    long nextugly=1;
	    arr[0]= nextugly;
	    for(int i=1;i<n;i++)
	    {
	        nextugly=min(num2,min(num3,num5));
	        arr[i]=nextugly;
	        if(nextugly==num2)
	        {
	           i2=i2+1;
	           num2=arr[i2]*2;
	        }
	         if(nextugly==num3)
	        {
	           i3=i3+1;
	           num3=arr[i3]*3;
	        }
	         if(nextugly==num5)
	        {
	           i5=i5+1;
	           num5=arr[i5]*5;
	        }
	    }
	    return nextugly;
	}
