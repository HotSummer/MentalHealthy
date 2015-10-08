//
//  MHDBasicController.m
//  MentalHealthDoctor
//
//  Created by jfsld1989 on 15/10/8.
//  Copyright (c) 2015年 zbq. All rights reserved.
//

#import "MHDBasicController.h"
#import <Common/CommonDefine.h>
#import <Common/UIImage+TPCategory.h>
#import <Common/UIColor+TPCategory.h>

@interface MHDBasicController ()

@end

@implementation MHDBasicController

/** 初始化UI界面 */
- (void)customView {
    //视图背景色
    self.view.backgroundColor = [UIColor whiteColor];
    
    //添加手势返回 IOS7及以上系统才能使用
//    if(isAfterIOS7){
//        self.navigationController.interactivePopGestureRecognizer.delegate = (id<UIGestureRecognizerDelegate>)self;
//    }
}

/** 视图加载完成 */
- (void)viewDidLoad {
    [super viewDidLoad];
    
    [[UIApplication sharedApplication] setStatusBarStyle:UIStatusBarStyleLightContent];
    [self.navigationController setNavigationBarHidden:NO];

    //设置navigationbar 背景颜色
    [self.navigationController.navigationBar setBackgroundImage:[UIImage createImageWithColor:[UIColor colorWithHex:0x000000]] forBarMetrics:UIBarMetricsDefault];
    
    //设置 navigationbar标题颜色大小
    [self.navigationController.navigationBar setTintColor:[UIColor whiteColor]];
    if (isAfterIOS7) {
        self.navigationController.navigationBar.translucent = NO;
        self.navigationController.navigationBar.barTintColor = [UIColor whiteColor];
    }
    if (isAfterIOS6) {
        [self.navigationController.navigationBar setTitleTextAttributes:@{NSFontAttributeName: [UIFont boldSystemFontOfSize:20.0f],
                                       NSForegroundColorAttributeName:[UIColor whiteColor]}];
    }
    
    //返回按钮
    UIButton *backBtn = [[UIButton alloc] init];
    backBtn.frame = CGRectMake(0, 0, 50, 30);
    [backBtn setBackgroundImage:[UIImage imageNamed:@"sb_nav_back"] forState:UIControlStateNormal];
    [backBtn setBackgroundImage:[UIImage imageNamed:@"sb_nav_back_blue"] forState:UIControlStateSelected];
    backBtn.imageEdgeInsets = UIEdgeInsetsMake(4, 4, 4, 0);
    [backBtn addTarget:self action:@selector(mhd_colseCtrl) forControlEvents:UIControlEventTouchUpInside];
    self.navigationItem.leftBarButtonItem = [[UIBarButtonItem alloc] initWithCustomView:backBtn];
    
    //代码加载控件或数据
    [self customView];
}

- (void)mhd_colseCtrl{
    [self.navigationController popViewControllerAnimated:YES];
}


@end
