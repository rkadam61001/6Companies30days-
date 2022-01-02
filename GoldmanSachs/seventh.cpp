//https://practice.geeksforgeeks.org/problems/find-the-position-of-m-th-item1723/1
//Brute force
class Solution {
  public:
    int findPosition(int N , int M , int K) {
        // code here
        while(M>1)
        {
            M--;
            K++;
            if(K>N)
            {
                K=1;
            }
        }
        return K;
    }
};

//constant space and time
 int findPosition(int N , int M , int K) {
        if(M<=N-K+1)
        {
            return M+K-1;
        }
        M=M-(N-K+1);
        cout<<M<<endl;
        return M%N==0?N:M%N;
 }
