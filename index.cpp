#include <bits/stdc++.h> 
class NStack
{
        int *arr;
        int *top;
        int *next;
        int freeSpace;
        int n, s;
public:
    // Initialize your data structure.
    NStack(int N, int S)
    {
        n = N;
        s = S;
        arr = new int[S];
        top = new int[N];
        next = new int[S];
        for(int i = 0 ; i<s ; i++){
            arr[i] = i;
        }
        for(int i = 0 ; i<n ; i++){
            top[i] = -1;
        }
        for(int i = 0 ; i<s ; i++){
            next[i] = i+1;
        }
        next[s-1] = -1;
        freeSpace = 0;
        
        
    }

    // Pushes 'X' into the Mth stack. Returns true if it gets pushed into the stack, and false otherwise.
    bool push(int x, int m)
    {
        int index = freeSpace;
        freeSpace = next[index];
        arr[index] = x;
        next[index] = top[m-1];
        top[m-1] = index;
        
        return true;
                
    }

    // Pops top element from Mth Stack. Returns -1 if the stack is empty, otherwise returns the popped element.
    int pop(int m)
    {
        if(top[m-1] == -1){
            return -1;
        }
        int index = top[m-1];
        top[m-1] = next[index];
        next[index] = freeSpace;
        freeSpace = index;
        return arr[index];
    }
};