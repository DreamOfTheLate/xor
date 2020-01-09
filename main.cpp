//
//  main.cpp
//  test1
//
//  Created by datai on 2020/1/7.
//  Copyright © 2020 datai. All rights reserved.
//

#include <iostream>
#include<iomanip>
#include "bpnet.h"
using namespace std;


#define BPM_ITER    2000//迭代次数

int main() {
    CBPNet bp;

    for (int i=0;i<BPM_ITER;i++) {
        bp.Train(0,0,0);
        bp.Train(0,1,1);
        bp.Train(1,0,1);
        bp.Train(1,1,0);
    }

    cout<<setprecision(5)<<showpoint;
    cout << "0,0 = " << bp.Run(0,0) << endl;
	cout << "0,1 = " << bp.Run(0,1) << endl;
	cout << "1,0 = " << bp.Run(1,0) << endl;
	cout << "1,1 = " << bp.Run(1,1) << endl;
}
