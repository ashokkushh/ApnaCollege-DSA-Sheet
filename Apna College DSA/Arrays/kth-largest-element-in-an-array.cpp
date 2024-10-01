class Solution {
public:
    int findKthLargest(vector<int>& a, int k) {
    ios_base::sync_with_stdio(false), cin.tie(0), cout.tie(0);    
    int c = 1e4 + 2;
	k--;
	vector<int> neg(c);
	vector<int> pos(c);
	for(int i = 0;i<(int)a.size();i++)
	{
		if(a[i] < 0)
		neg[a[i] + c]++;
		else
		pos[a[i]]++;
	}
    for(int i = c -1;i >= 0;i--)
	{
		if(pos[i] != 0)
		k -= pos[i];
		if(k < 0)
		{
		return i;
        }
	}
	for(int i = c -1;i >= 0;i--)
	{
		if(neg[i] != 0)
		k -= neg[i];
		if(k < 0)
		{
		return i - c;
		}
	}
	return 0;
    }
};