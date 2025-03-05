#include <iostream>

void permuter (std::string &s, int n)
{
    if (n==1)
    {   
        std::cout << s << std::endl;
        return;
    }else{
        
        for(int i = 1; i<n-1; i++)
        {
            std::swap(s[i],s[n] );
            permuter(s,n-1);
            std::swap(s[i],s[n] );
        }
        permuter(s,n-1);
    }
}

int main()
{

    std::string s = "ABCDE";
    permuter(s,4);

    return 0;
}