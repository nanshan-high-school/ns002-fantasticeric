#include <iostream>
#include<stack>
using namespace std;
int main() 
{
    int num = 0, count = 0, money = 0;
    stack <char> s;
    char brackets;
    cin >> num;
    s.push('a');
    for(int i = 0; i < num; i++)
    {
        cin >> brackets;
        if((int)s.top() == '(' && (int)brackets == ')')
        {
            s.pop();
            count++;            
        }
        else 
        {
            s.push((char)brackets);
        }        
    }
    money = count * 5000 - (s.size() - 1) * 3500;
    cout << count << " " << s.size()-1 << "\n";
    if(money > 0)
    {
        cout << "賺 " << money;
    }
    if(money < 0)
    {
        cout << "賠 " << -money;
    }
    if(money == 0)
    {
        cout << "不賺不賠";
    }
}
