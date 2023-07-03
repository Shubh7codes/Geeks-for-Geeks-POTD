int maxIndexDiff(int arr[], int n) {
      vector < int > min_arr(n), max_arr(n);
      int mini=INT_MAX,maxi=INT_MIN;
      for (int i = 0; i < n; i++) {
        mini=min(mini,arr[i]);
        min_arr[i] = mini; 
      }
      for (int i = n-1; i >= 0; i--) {
        maxi=max(maxi,arr[i]);
        max_arr[i] = maxi; 
      }
      int ans = 0;
      int i = 0,j = 0;
      while (i < n && j < n) {
        if (min_arr[i] <= max_arr[j]) {
          ans = max(ans, j - i);
          j++;
        } else i++;
      }
      return ans;

    }
