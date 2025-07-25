1. Legendre’s formula (Given p and n, find the largest x such that p^x divides n!)
    int largestPower(int n, int p)
    {t
        int x = 0;
     
        // Calculate x = n/p + n/(p^2) + n/(p^3) + ....
        while (n)
        {
            n /= p;
            x += n;
        }
        return x;
    }
    int main()
    {
        int n = 10, p = 3;
        cout << largestPower(n, p) << endl;
        return 0;
    }


2. Count trailing zeroes in factorial of a number
    long long tailZero(int n){
        long long res = 0;
        for(int i=5; n/i>=1; i*=5){
            res += n/i;
        }
        return res;
    }
    int main()
    {
        int n;
        cin >> n;
        long long res = tailZero(n);
        cout << res << endl;
        return 0;
    }


3. Find the Factorial of a large number
    #define MAX 500
    int multiply(int x, int res[], int res_size);
    
    void factorial(int n)
    {
        int res[MAX];
    
        res[0] = 1;
        int res_size = 1;
    
        for (int x = 2; x <= n; x++)
            res_size = multiply(x, res, res_size);
    
        cout << "Factorial of given number is \n";
        for (int i = res_size - 1; i >= 0; i--)
            cout << res[i];
    }
    
    int multiply(int x, int res[], int res_size)
    {
        int carry = 0; // Initialize carry
    
        // One by one multiply n with individual digits of res[]
        for (int i = 0; i < res_size; i++) {
            int prod = res[i] * x + carry;
    
            // Store last digit of 'prod' in res[]
            res[i] = prod % 10;
    
            // Put rest in carry
            carry = prod / 10;
        }
    
        // Put carry in res and increase result size
        while (carry) {
            res[res_size] = carry % 10;
            carry = carry / 10;
            res_size++;
        }
        return res_size;
    }
    
    int main()
    {
        factorial(100);
        return 0;
    }


4. Last non-zero digit of a factorial
    #include<bits/stdc++.h>
    using namespace std;
     
    // Initialize values of last non-zero digit of
    // numbers from 0 to 9
    int dig[] = {1, 1, 2, 6, 4, 2, 2, 4, 2, 8};
     
    int lastNon0Digit(int n)
    {
         if (n < 10)
            return dig[n];
     
        // Check whether tens (or second last) digit
        // is odd or even
        // If n = 375, So n/10 = 37 and (n/10)%10 = 7
        // Applying formula for even and odd cases.
        if (((n/10)%10)%2 == 0)
            return (6*lastNon0Digit(n/5)*dig[n%10]) % 10;
        else
            return (4*lastNon0Digit(n/5)*dig[n%10]) % 10;
    }
     
    // Driver code
    int main()
    {
        int n = 14;
        cout << lastNon0Digit(n);
        return 0;
    }



5. Count digits in a factorial using Logarithm
  log( n! ) = log(1*2*3……. * n) = log(1) + log(2) + …….. +log(n)
      int findDigits(int n)
      {
          if (n < 0)
              return 0;
      
          if (n <= 1)
              return 1;
              
          double digits = 0;
          for (int i = 2; i <= n; i++)
              digits += log10(i);
      
          return floor(digits) + 1;
      }
      
      int main()
      {
          cout << findDigits(10) << endl;
          cout << findDigits(120) << endl;
          return 0;
      }
