//
//  MentalAdModel.m
//  MentalHealthDoctor
//
//  Created by Summer.zhu on 16/2/15.
//  Copyright © 2016年 zbq. All rights reserved.
//

#import "MentalAdModel.h"

@implementation MentalAdModel

- (NSString *)adType{
    switch (self.goType) {
        case AdType_Activity:
            return @"活动";
        case AdType_Knowledge:
            return @"知识";
        case AdType_Test:
            return @"测试";
            
        default:
            break;
    }
    return @"";
}

@end
