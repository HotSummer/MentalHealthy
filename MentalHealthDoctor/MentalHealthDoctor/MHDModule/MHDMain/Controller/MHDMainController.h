//
//  MHDMainController.h
//  MentalHealthDoctor
//
//  Created by Summer.zhu on 16/2/15.
//  Copyright © 2016年 zbq. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Common/CommonDefine.h>
#import <Common/SZController.h>

@interface MHDMainController : SZController

@property(nonatomic, strong) NSArray *mentalAds;

DECLARE_AS_SINGLETON(MHDMainController);

- (void)loadMentalAds:(ResponseBlock)complete;

@end
