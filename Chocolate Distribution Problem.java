class Solution{
    public long findMinDiff (ArrayList<Integer> a, int n, int m)
    {
        Collections.sort(a);
		
		int start = 0,end =0;
		int mind = Integer.MAX_VALUE;
		for(int i=0; i+m-1<n; i++)
		{
			int diff = a.get(i+m-1) - a.get(i);
			if(mind>diff)
			{
				mind = diff;
				start = i;
				end = i+m-1;
			}
		}
		return a.get(end)-a.get(start);
    }
}
