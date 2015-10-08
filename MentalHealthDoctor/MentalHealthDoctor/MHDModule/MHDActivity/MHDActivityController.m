//
//  MHDActivityController.m
//  MentalHealthDoctor
//
//  Created by jfsld1989 on 15/10/8.
//  Copyright (c) 2015年 zbq. All rights reserved.
//

#import "MHDActivityController.h"
#import "MHDTabbarView.h"

@interface MHDActivityController ()

@property(nonatomic ,strong) MHDTabbarView *activityBottomMenuView;

@end

@implementation MHDActivityController

- (void)customView{
    [super customView];
    
    [[UIApplication sharedApplication] setStatusBarStyle:UIStatusBarStyleLightContent];

    [self loadBottonMenuView];
}

- (void)viewDidLayoutSubviews{
    [super viewDidLayoutSubviews];
    
    [_activityBottomMenuView setFrame:CGRectMake(0.0f, CGRectGetHeight(self.view.bounds)-80.0f, CGRectGetWidth(self.view.bounds), 80.0f)];
}

- (void)loadBottonMenuView{
    _activityBottomMenuView = [[MHDTabbarView alloc] initWithTabbars:@[@"测试",@"发现",@"找医生",@"我"]];
    [self.view addSubview:_activityBottomMenuView];
}

@end
