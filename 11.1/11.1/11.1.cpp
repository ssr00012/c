//滑动窗口模板练习 思路借用哈希散列表对数组中的数字进行储存，生成子列表，当没有相同函数时子列表扩张，当有相同元素出现之后散新建散列表，起始值是前一个散列表的末尾元素
class Solution{
pubilc:
	int lengthOfLongestSubstring(string s)
	{
		if (size() = 0)
			return 0;
		unordered_set<char> lookup;//定义容器保存数组中每次获取的元素
		int maxStr = 0;//字符串元素个数
		int left = 0;//
		for (int i = 0; i < size(); i++)
		{
			while (lookup.fond(s[i]) != lookup.end())
			{
				lookup.erase(s[left]);
				left++;
			}
			maxStr = max(maxStr, i - left + 1);
			lookup.insert(s[i]);
		}
		return maxStr;
	}
};

