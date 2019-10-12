#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> people, int limit) {
    int answer = 0;

    sort(people.begin(), people.end());

    int f = 0;
    int t = people.size()-1;

    while(true)
    {
        if(f>t)
        {
            break;
        }
        else if(f==t)
        {
            // 블라블라
            answer +=1;
            break;
        }

        if(people[f] + people[t]<=limit)
        {
            answer +=1;
            f+=1;
            t-=1;
        }
        else
        {
            answer +=1;
            t-=1;
        }
    }

    return answer;
}
