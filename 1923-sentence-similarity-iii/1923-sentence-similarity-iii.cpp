class Solution {
public:
    bool areSentencesSimilar(string s1, string s2) {
       if(s1.size()<s2.size())
       {
        swap(s1,s2);
       }
        stringstream ss1(s1);
        deque<string>ans1;
        string temp;
        while(ss1 >> temp)
        {
            ans1.push_back(temp);
        }

        stringstream ss2(s2);
        deque<string>ans2;
        while(ss2 >> temp)
        {
            ans2.push_back(temp);
        }

      /*  int i=0,    j = ans1.size()-1;
        int k=0,    l = ans2.size()-1;

        while( k<=l &&  i<=j && ans2[k]==ans1[i])
        {
            i++;
            k++;
        }

        while(l>=k && ans2[l]==ans1[j])
        {
            j--;
            l--;
        }
           

        if(l<k)
        {
            return true;
        }
        return false;
        */

        while(!ans1.empty() && !ans2.empty() && ans1.front()==ans2.front())
        {
            ans1.pop_front();
            ans2.pop_front();
        }

         while(!ans1.empty() && !ans2.empty() && ans1.back()==ans2.back())
        {
            ans1.pop_back();
            ans2.pop_back();
        }

        return ans2.empty();
    }
};