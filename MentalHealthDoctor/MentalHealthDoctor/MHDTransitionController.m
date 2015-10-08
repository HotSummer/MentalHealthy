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
    
    [self.navigationController setNavigationBarHidden:YES];

    MHDActivityController *activityCtrl = [[MHDActivityController alloc] init];
    [self.navigationController pushViewController:activityCtrl animated:NO];
    
}


@end
