class Solution {
public:
    int romanToInt(string s) {
        string::iterator it = s.begin();
        int result=0;
        while (it != s.end()) {
            string::iterator next = it + 1;
            switch (*it) {
                case 'I': 
                    if (*next == 'V') { result = result + 4; it = it + 2; continue;}
                    else if (*next == 'X') { result = result + 9; it = it + 2; continue;}
                    else { ++result; ++it; continue; }
                case 'V':
                    result = result + 5; ++it; continue;
                case 'X':
                    if (*next == 'L') { result = result + 40; it = it + 2; continue;}
                    else if (*next == 'C') { result = result + 90; it = it + 2; continue;}
                    else { result = result + 10; ++it; continue; }
                case 'L':
                    result = result + 50; ++it; continue;
                case 'C':
                    if (*next == 'D') { result = result + 400; it = it + 2; continue;}
                    else if (*next == 'M') { result = result + 900; it = it + 2; continue;}
                    else { result = result + 100; ++it; continue; }
                case 'D':
                    result = result + 500; ++it; continue;
                case 'M':
                    result = result + 1000; ++it; continue;
            }
        }
        return result;
    }
};