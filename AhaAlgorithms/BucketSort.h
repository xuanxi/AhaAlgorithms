//
//  BucketSort.h
//  AhaAlgorithms
//
//  Created by Steven Chen on 8/20/14.
//  Copyright (c) 2014 xuanxi. All rights reserved.
//

#ifndef AhaAlgorithms_BucketSort_h
#define AhaAlgorithms_BucketSort_h

/*
 * 桶的作用是标记每个数出现的次数
 * 有多少个呆排列数字就有多少个桶
 * 时间复杂度为 O(M+N)
 */

void bucket ()
{
    int book[1001], i, j, t, n;
    
    for (i=0; i<=1000; i++) {
        book[i]=0;
    }
    
    scanf("%d",&n);
    
    for (i=1; i<=n; i++) {
        scanf("%d",&t);
        book[t]++;
    }
    
    for (i=1000; i>0; i--) {
        for (j=1; j<=book[i]; j++) {
            printf("%d ",i);
        }
    }
    
    getchar();getchar();
}

#endif
