//
//  MentalAdModel.h
//  MentalHealthDoctor
//
//  Created by Summer.zhu on 16/2/15.
//  Copyright © 2016年 zbq. All rights reserved.
//

#import "MHDModel.h"

typedef enum {
    AdType_Activity = 0,
    AdType_Knowledge,
    AdType_Test
}AdType;

@interface MentalAdModel : MHDModel

@property(nonatomic, assign) AdType goType;
@property(nonatomic, strong) NSString *bgImageUrl;
@property(nonatomic, strong) NSString *indicatorImageUrl;
@property(nonatomic, strong) NSString *title;
@property(nonatomic, strong) NSString *subTitle;
@property(nonatomic, strong) NSString *date;
@property(nonatomic, strong) NSString *location;

- (NSString *)adType;

@end
