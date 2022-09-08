// T.C. : o(n*log(log n))
#include<iostream>
#include<vector>
using namespace std;


        int countPrime(int n)
        {
            int cnt=0;
            vector<bool> prime(n+1,true);

            prime[0]=prime[1]=false;

            for(int i=1; i<n; i++)
            {
                if(prime[i])
                {
                    cnt++;
                    for(int j=i*2;j<n;j=j+i)
                    {
                        prime[j]=0;
                    }
                }

            }
            return cnt;
        }

        int main()

        {
            int n;
            cout<<"Enter the number till count prime Number"<< endl;
            cin >> n;
            cout<< "The total prime number are"<< countPrime(n);
            return 0;


            
        }