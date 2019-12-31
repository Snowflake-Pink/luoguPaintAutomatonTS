// Anthor: TraceBack
// Fixed: Snowflake_Pink

#include <iostream>
#include <cstdio>
#include <cmath>
#include <algorithm>

using namespace std;

const char ref[] = "0123456789abcdefghijklmnopqrstuv";
int width, height, type;

const int form[32][3] = {
    { 0, 0, 0 },
    { 255, 255, 255 },
    { 170, 170, 170 },
    { 85, 85, 85 },
    { 254, 211, 199 },
    { 255, 196, 206 },
    { 250, 172, 142 },
    { 255, 139, 131 },
    { 244, 67, 54 },
    { 233, 30, 99 },
    { 226, 102, 158 },
    { 156, 39, 176 },
    { 103, 58, 183 },
    { 63, 81, 181 },
    { 0, 70, 112 },
    { 5, 113, 151 },
    { 33, 150, 243 },
    { 0, 188, 212 },
    { 59, 229, 219 },
    { 151, 253, 220 },
    { 22, 115, 0 },
    { 55, 169, 60 },
    { 137, 230, 66 },
    { 215, 255, 7 },
    { 255, 246, 209 },
    { 248, 203, 140 },
    { 255, 235, 59 },
    { 255, 193, 7 },
    { 255, 152, 0 },
    { 255, 87, 34 },
    { 184, 63, 39 },
    { 121, 85, 72 }
};

inline double getDis(int r, int g, int b, int type) {
    return sqrt((r - form[type][0]) * (r - form[type][0]) +
                (g - form[type][1]) * (g - form[type][1]) +
                (b - form[type][2]) * (b - form[type][2]));
}

int main() {
    freopen ("task.ppm", "r", stdin);
    freopen ("task.32", "w", stdout);

    char c, s[15];
    cin.getline(s, 15);
    type = s[1] - '0';
    //while (!isdigit(s[0])) cin.getline(s, 15);
    scanf("%d%d", &width, &height);
    int temp;
    cin >> temp;
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            int r, g, b, pos = 0;
            cin >> r >> g >> b;
			
            double min_dis = getDis(r, g, b, 0), temp;

            for (int k = 1; k < 32; ++k)
                if ((temp = getDis(r, g, b, k)) < min_dis) {
                    min_dis = temp;
                    pos = k;
                }
            cout << ref[pos];
        }
        cout << endl;
    }
    
    fclose (stdin);
    fclose (stdout);
    return 0;
}
