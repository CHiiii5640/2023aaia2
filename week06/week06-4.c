int maxFrequencyElements(int* nums, int numsSize)
{
    int a[101]= {}; // �έp�X�{����
    int best =0; //�X�{�̦h��
    for (int i=0; i<numsSize; i++)
    {
        int now = nums[i]; //�έp�Ʀrnow
        a[now]++; //�X�{+1��
        if(a[now]>best)
            best = a[now];
    }
    int ans=0;
    for (int i=1; i<=100; i++)
    {
        if(a[i]==best)
            ans+=a[i]; //�̦n����
    }
    return ans;
}
