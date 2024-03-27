int maxFrequencyElements(int* nums, int numsSize)
{
    int a[101]= {}; // 参璸瞷Ω计
    int best =0; //瞷程
    for (int i=0; i<numsSize; i++)
    {
        int now = nums[i]; //参璸计now
        a[now]++; //瞷+1Ω
        if(a[now]>best)
            best = a[now];
    }
    int ans=0;
    for (int i=1; i<=100; i++)
    {
        if(a[i]==best)
            ans+=a[i]; //程氮
    }
    return ans;
}
