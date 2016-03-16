//
//  ViewController.m
//  MentalHealthDoctor
//
//  Created by zbq on 15-8-19.
//  Copyright (c) 2015年 zbq. All rights reserved.
//

#import "MHDTransitionController.h"
#import "MHDActivityController.h"

@interface MHDTransitionController ()

@end

@implementation MHDTransitionController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    UILabel *loadingView = [[UILabel alloc] initWithFrame:CGRectMake(0.0f, CGRectGetHeight(self.view.bounds)/2, CGRectGetWidth(self.view.bounds), 20.0f)];
    [loadingView setBackgroundColor:[UIColor clearColor]];
    [loadingView setTextAlignment:NSTextAlignmentCenter];
    [loadingView setText:@"过渡页面~~~"];
    [self.view addSubview:loadingView];
    
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(1.0f * NSEC_PER_SEC)), dispatch_get_main_queue(), ^{
        MHDActivityController *activityCtrl = [[MHDActivityController alloc] init];
        [self.navigationController pushViewController:activityCtrl animated:NO];
    });
}


@end
