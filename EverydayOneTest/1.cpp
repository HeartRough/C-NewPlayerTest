//问题
// 给出 R 行 C 列的矩阵，其中的单元格的整数坐标为 (r, c)，满足 0 <= r < R 且 0 <= c < C。
// 另外，我们在该矩阵中给出了一个坐标为 (r0, c0) 的单元格。
// 返回矩阵中的所有单元格的坐标，并按到 (r0, c0) 的距离从最小到最大的顺序排，其中，两单元格(r1, c1) 和 (r2, c2) 之间的距离是曼哈顿距离，|r1 - r2| + |c1 - c2|。（你可以按任何满足此条件的顺序返回答案。）

//我的回答
#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<vector<int>> allCellsDistOrder(int R, int C, int r0, int c0) {
        int num[10000][3],numr=0;
        for(int i=0;i<R;i++){
            for(int j=0;j<C;j++){
                num[numr][0]=i;
                num[numr][1]=j;
                num[numr][2]=(abs(i-r0)+abs(j-c0));
                numr++;
            }
        }
        int ch1,ch2,ch3;
        for(int i=0;i<numr;i++){
            for(int j=i+1;j<numr;j++){
                if(num[i][2]>num[j][2]){
                    ch1=num[i][0];
                    ch2=num[i][1];
                    ch3=num[i][2];
                    num[i][0]=num[j][0];
                    num[i][1]=num[j][1];
                    num[i][2]=num[j][2];
                    num[j][0]=ch1;
                    num[j][1]=ch2;
                    num[j][2]=ch3;
                }
            }
        }
        vector<vector<int>> ret;
        for(int i=0;i<numr;i++){
            ret.push_back({num[i][0],num[i][1]});
        }
        return ret;
    }  
};



//官方回答 直接排序
// class Solution {
// public:
//     vector<vector<int>> allCellsDistOrder(int R, int C, int r0, int c0) {
//         vector<vector<int>> ret;
//         for (int i = 0; i < R; i++) {
//             for (int j = 0; j < C; j++) {
//                 ret.push_back({i, j});
//             }
//         }
//         sort(ret.begin(), ret.end(), [=](vector<int>& a, vector<int>& b) {
//             return abs(a[0] - r0) + abs(a[1] - c0) < abs(b[0] - r0) + abs(b[1] - c0);
//         });
//         return ret;
//     }
// };

