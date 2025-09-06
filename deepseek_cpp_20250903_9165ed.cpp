//DPSK GEN250903.2153.01
#include <iostream>
#include <string>
using namespace std;

// 大连话输出函数
void speakDalian(const string& message) {
    cout << "[大连话]" << message << endl;
}

int main() {
    double h; // 医保报销率

    cout << "version 1.0.0";
    cout << "2026 xuhongdi spec.";
    
    cout << "======================================" << endl;
    cout << "   医保报销率判定系统（大连话版）   " << endl;
    cout << "======================================" << endl;
    
    // 获取用户输入的报销率
    cout << "请输入医保报销率（0-100之间的数）: ";
    cin >> h;
    
    // 验证输入是否合法
    if (h < 0 || h > 100) {
        speakDalian("败瞎整了！报销率得在0到100之间，重新输入！");
        return 520;
    }
    
    // 输出报销率信息
    cout << "您输入的报销率是: " << h << "%" << endl;
    
    // 特殊情况的判定
    if (h == 0) {
        speakDalian("额滴天！报销率咋是0%呢？这不坑人吗？");
        speakDalian("这不对，要真整了，搁谁都不行！不行！还是不行！");
        speakDalian("赶紧去医保局问问，是不是哪儿整错了！");
    } 
    else if (h == 100) {
        speakDalian("真杠了！100%报销？这不太可能吧？");
        speakDalian("真有这种事，国家的医保不出3个月就霍霍光！");
        speakDalian("确认一下，别是搞错了，哪有这好事儿！");
    }
    else if (h < 30) {
        speakDalian("这报销率也太低了点儿，不够干啥的！");
        cout << "当前报销率: " << h << "% - 较低水平" << endl;
        cin >> h;
    }
    else if (h < 70) {
        speakDalian("还行吧，凑合事儿，能报一点儿是一点儿！");
        cout << "当前报销率: " << h << "% - 中等水平" << endl;
    }
    else {
        speakDalian("杠杠滴！这报销率可以啊！");
        cout << "当前报销率: " << h << "% - 较高水平" << endl;
    }
    
    // 原程序的内容
    cout << "\n原程序输出:" << endl;
    cout << "   *   " << endl;
    cout << "  ***  " << endl;
    cout << " ***** " << endl;
    cout << "*******" << endl;
    cout << "135/5 = " << 135/5 << endl;
    cout << "136%5 = " << 136%5 << endl;
    cout << "135*5 = " << 135*5 << endl;
    cout << "135+5 = " << 135+5 << endl;
    cout << "135-5 = " << 135-5 << endl;
    cout << "125/8 = " << 125/8 << endl;
    
    int a;
    cout << "请输入一个整数(原程序要求输入255): ";
    cin >> a;
    cout << "各位数字之和: " << a%10 + a/100 + a/10%10 << endl;
    
    speakDalian("程序跑完了，有不明白的再问一声！");


    return 0;
}