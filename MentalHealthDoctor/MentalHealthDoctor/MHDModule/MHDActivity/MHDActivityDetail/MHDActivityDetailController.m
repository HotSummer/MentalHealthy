//
//  MHDActivityDetailController.m
//  MentalHealthDoctor
//
//  Created by jfsld1989 on 15/10/8.
//  Copyright (c) 2015年 zbq. All rights reserved.
//

#import "MHDActivityDetailController.h"
#import "MHDActivityDetailHeadView.h"
#import "MHDActivityDetailBottomView.h"

@interface MHDActivityDetailController ()

@property(nonatomic ,strong) MHDActivityDetailHeadView *headView;
@property(nonatomic ,strong) MHDActivityDetailBottomView *bottomView;

@end

@implementation MHDActivityDetailController

- (void)customView{
    [super customView];
    
    self.title = @"活动详情";
    
    _headView = [[MHDActivityDetailHeadView alloc] init];
    [_headView setBackgroundColor:[UIColor clearColor]];
    [self.view addSubview:_headView];
    
    _bottomView = [[MHDActivityDetailBottomView alloc] init];
    [_bottomView setBackgroundColor:[UIColor blackColor]];
    [self.view addSubview:_bottomView];
}

- (void)viewDidLayoutSubviews{
    [super viewDidLayoutSubviews];
    
    [_headView setFrame:CGRectMake(0.0f, 0.0f, CGRectGetWidth(self.view.bounds), 160.0f)];
    [_bottomView setFrame:CGRectMake(2.0f, CGRectGetHeight(self.view.bounds) - 52.0f, CGRectGetWidth(self.view.bounds)-4.0f, 50.f)];
}

@end
