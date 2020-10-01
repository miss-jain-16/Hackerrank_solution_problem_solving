/*
==========>>>>>>>>>>BEAUTIFUL PAIRS<<<<<<<<<<<<===========================


#!/bin/python

import math
import os
import random
import re
import sys

# Complete the beautifulPairs function below.
def beautifulPairs(A, B):
    n=0
    for i in A:
        if i in B:
            B.remove(i)
            n+=1
    if n<len(A):
        return n+1
    else:
        return n-1


===========>>>>>>>Priyanka and toys<<<<<<<<=======================
#include<iostream>
#include<algorithm>
using namespace std;

int w[100000];

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> w[i];
    sort(w, w + n);
    int ans = 1, prev = w[0];
    for (int i = 1; i < n; i++)
        if (w[i] - prev > 4)
            prev = w[i], ans++;
    cout << ans << endl;
    return 0;
}
    

