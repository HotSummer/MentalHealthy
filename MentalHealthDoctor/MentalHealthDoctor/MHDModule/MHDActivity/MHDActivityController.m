//
//  MHDActivityController.m
//  MentalHealthDoctor
//
//  Created by jfsld1989 on 15/10/8.
//  Copyright (c) 2015年 zbq. All rights reserved.
//

#import "MHDActivityController.h"
#import "MHDTabbarView.h"
#import "MHDTestController.h"

@interface MHDActivityController ()

@property(nonatomic ,strong) MHDTabbarView *activityBottomMenuView;

@end

@implementation MHDActivityController

- (void)customView{
    [super customView];
    
    //城市按钮
    UIButton *cityBtn = [[UIButton alloc] initWithFrame:CGRectMake(0, 0, 50, 30) ];
    [cityBtn setBackgroundColor:[UIColor clearColor]];
    [cityBtn setTitle:@"上海" forState:UIControlStateNormal];
    [cityBtn.titleLabel setTextColor:[UIColor blueColor]];
    [cityBtn addTarget:self action:@selector(cityBtnClicked) forControlEvents:UIControlEventTouchUpInside];
    self.navigationItem.leftBarButtonItem = [[UIBarButtonItem alloc] initWithCustomView:cityBtn];
    
    self.view.backgroundColor = [UIColor blackColor];

    [self loadBottonMenuView];
}

- (void)viewDidLayoutSubviews{
    [super viewDidLayoutSubviews];
    
    [_activityBottomMenuView setFrame:CGRectMake(0.0f, CGRectGetHeight(self.view.bounds)-80.0f, CGRectGetWidth(self.view.bounds), 80.0f)];
}

- (void)loadBottonMenuView{
    __weak typeof(self) __weakSelf = self;
    
    _activityBottomMenuView = [[MHDTabbarView alloc] initWithTabbars:@[@"测试",@"发现",@"找医生",@"我"]];
    _activityBottomMenuView.didSelectedTab = ^(NSInteger selectedIndex){
        [__weakSelf gotoSelectedMenu:selectedIndex];
    };
    [self.view addSubview:_activityBottomMenuView];
}

#pragma mark 菜单点击事件
- (void)gotoSelectedMenu:(NSInteger)selectedIndex{
    switch (selectedIndex) {
        case 0:{
            //测试界面
            MHDTestController *testCtrl = [[MHDTestController alloc] init];
            [self.navigationController pushViewController:testCtrl animated:YES];
        }
            break;
        case 1:{
            //发现界面
        }
            break;
        case 2:{
            //找医生界面
        }
            break;
        case 3:{
            //我界面
        }
            break;
        default:
            break;
    }
}

#pragma mark 城市按钮点击事件
- (void)cityBtnClicked{
    
}

@end
