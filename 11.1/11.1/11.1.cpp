//��������ģ����ϰ ˼·���ù�ϣɢ�б�������е����ֽ��д��棬�������б���û����ͬ����ʱ���б����ţ�������ͬԪ�س���֮��ɢ�½�ɢ�б���ʼֵ��ǰһ��ɢ�б��ĩβԪ��
class Solution{
pubilc:
	int lengthOfLongestSubstring(string s)
	{
		if (size() = 0)
			return 0;
		unordered_set<char> lookup;//������������������ÿ�λ�ȡ��Ԫ��
		int maxStr = 0;//�ַ���Ԫ�ظ���
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

