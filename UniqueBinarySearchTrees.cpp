class Solution {
	public:
		int c(int n, vector<int> &memo) {
			if(n <= 1) {
				return 1;
			}
			if(memo[n] > 0) {
				return memo[n];
			}
			int a = 0;
			for(int i = 0; i < n; i++) {
				a += c(i, memo) * c(n - i - 1, memo);
			}
			memo[n] = a;
			return a;
		}
		
	int numTrees(int n) {
		vector<int> memo(n + 1, -1);
		int answer = c(n, memo);
		return answer;
	}
};
