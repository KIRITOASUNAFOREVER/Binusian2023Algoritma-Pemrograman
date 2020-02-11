#include <stdio.h>
#include<stdlib.h>
#define ll long long int

ll subarraySum(long* nums, ll n, ll k){
    ll temps=0;
    ll i=0;
    ll cnt =0;
    ll maxcnt=0;
    for(i=0;i<n;i++){
        if(temps+nums[i]<=k){// If adding current element doesn't cross limit add it to current window
            temps+=nums[i];
            cnt++;
        }
        else if(temps!=0){
            temps=temps- nums[i - cnt] + nums[i]; // Else, remove first element of current window and add the current element
        }
        if(cnt>maxcnt)
            maxcnt=cnt;
    }
        return maxcnt;
}
int main() {
   int t;
   scanf("%d", &t);
   int t1=t;
   while(t--){
        ll n,k;
        scanf("%lld", &n);
        scanf("%lld", &k);
        long* arr;
        arr=(long*)malloc(n*sizeof(long));
        for(int i=0;i<n;i++)
            scanf("%ld", &arr[i] );
        ll ans=subarraySum(arr,n, k);
        int cas=t1-t;
        printf("Case #%d: %lld\n", cas, ans);
        free(arr);
   }
   return 0;
}
