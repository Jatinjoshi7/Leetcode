class Solution {
public:
	
	int lengthOfLongestSubstring(string s) {
		if(s.size()==1){return 1;}
		int ans=0, i=0, j=0, j1=s.size();
		unordered_map<char, int>m;
		while(j<j1){
			if(m.find(s[j])==m.end()){
				//cout<<s[j]<<endl;
				m[s[j]]++;
				if(j==j1-1){break;}
				j++;
			}
			else{
				if(m.size()>ans){ans=m.size();}
				//cout<<ans<<endl;
				while(m[s[j]]){
					//cout<<s[i]<<" "<<s[j]<<" "<<m[s[j]]<<endl;
					m[s[i]]--;
					if(m[s[i]]==0){m.erase(s[i]);}
					i++;
				}
				m[s[j]]++;
				//cout<<m.size()<<" "<<m[s[j]]<<" "<<s[i]<<endl;
				j++;
			}
		}
		if(m.size()>ans){ans=m.size();}
		//cout<<ans<<endl;
		return ans;
	}
};
