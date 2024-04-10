//
// Created by YUAN on 2024/4/10.
//

class Solution {
public:
    string maximumBinaryString(string binary) {
        int n = count(binary.begin(), binary.end(), '0');
        if(n == 1 || n == 0)
            return binary;
        int a = -1;
        for(int i = 0; i < binary.size(); i++){
            if(binary[i] == '0' && a == -1)
                a = i + n - 1;
            binary[i] = '1';
        }
        binary[a] = '0';
        return binary;
    }
};