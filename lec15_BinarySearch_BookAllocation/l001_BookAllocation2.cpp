/*
Ayush is studying for ninjatest which will be help after N days, And to score good marks
he has to study M chapters and the i th chapter require TIME[I]seconds to study. The day
in Ayush world has 100^100 seconds. There are some rules that are followed by ayush while studying .

1. He reads in a sequential order, ie he studies i + 1th chapter after he studies ith
chapter

2. If he starts some chapter on a particular day he complete it that day itself

3. He want to distribute his workload over N days , so he want to minimize the maximum
amount of time he studies in a day

Your task is to find out the minimal value of the maximum amount of time for which ayush
studies in a day. in order to cmplte all the M chapter in no more than N days

for eg:



*/

#include <bits/stdc++.h>
bool isPossible(int n, int m, vector<int> time, long long int mid)
{
    long long int chapterCount = 1;
    long long int timeToCompEachChap = 0;

    // m is no of chapter
    for (int i = 0; i < m; i++)
    {
        if (timeToCompEachChap + time[i] <= mid)
        {
            timeToCompEachChap += time[i];
        }
        else
        {
            chapterCount++;
            if (chapterCount > n || time[i] > mid)
                return false;

            timeToCompEachChap = 0;
            timeToCompEachChap += time[i];
        }
    }
    return true;
}


long long ayushGivesNinjatest(int n, int m, vector<int> time)
{
    long long int s = 0;
    long long int sum = 0;
    // m - are no of books, n no of days
    for (int i = 0; i < m; i++)
    {
        sum += time[i];
    }
    long long int e = sum;
    long long int ans = -1;
    while (s <= e)
    {
        long long int mid = s + (e - s) / 2;

        if (isPossible(n, m, time, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}