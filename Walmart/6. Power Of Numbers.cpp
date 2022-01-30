long long power(int n,int R)
   {
       
     long long res=1,N=n;
      if(N==0)
      return 0;
      if(R==0)
         return 1;
      while(R>0){
          if(R&1)
          res=(res*N)%mod;
          R=R>>1;
          N=(N*N)%mod;
      }
      return res%mod;
       
   }
