////
//// Created by Tony on 7/13/2021.
////
//
//#include <bits/stdc++.h>
//
//using namespace std;
//
//typedef long long ll;
//
//#include <iostream>
//using namespace std;
//
//int LSB(int i) {return i & -i;}
//
//int getSum(int fw[], int i)
//{
//    int sum = 0;
//    i++;
//
//    while(i > 0)
//    {
//        sum += fw[i];
//        i -= LSB(i);
//    }
//    return sum;
//}
//
//void updateFW(int fw[], int n, int i, int newVal)
//{
//    i++;
//    while (i <= n)
//    {
//        fw[i] += newVal;
//        i += LSB(i);
//    }
//}
//
//int *constructFenwick(int a[], int n)
//{
//    int *fw = new int [n+1];
//    for (int i = 0; i <= n; i++)
//        fw[i] = 0;
//
//    for (int i=0; i<n; i++)
//        updateFW(fw, n, i, a[i]);
//
//    return fw;
//}
//
//int main() {
//    ios_base::sync_with_stdio(0);
//    cin.tie(0);
//    int a[] = {0,0,1,1,0,1,0,1};
//    int n = sizeof(a)/sizeof(a[0]);
//    int *fw = constructFenwick(a, n);
//    cout << getSum(fw,5) - getSum(fw,3);
//}