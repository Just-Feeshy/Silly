#include <bits/stdc++.h>

#include <iostream>
#include <cmath>
#include <vector>

int main() {
    std::vector<int> silly;

    silly.push_back(0);
    silly.push_back(1);
    silly.push_back(2);
    silly.push_back(6);
    silly.push_back(3);
    silly.push_back(4);

    sort(silly.begin(), silly.end());

    for(int i=0; i<silly.size(); i++) {
        printf("%d", silly[i]);
    }
}