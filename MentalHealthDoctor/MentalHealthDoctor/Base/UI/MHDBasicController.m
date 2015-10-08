//
//  MHDBasicController.m
//  MentalHealthDoctor
//
//  Created by jfsld1989 on 15/10/8.
//  Copyright (c) 2015年 zbq. All rights reserved.
//

#import "MHDBasicController.h"
#import <Common/CommonDefine.h>

@interface MHDBasicController ()

@end

@implementation MHDBasicController

/** 初始化UI界面 */
- (void)customView {
    //视图背景色
    self.view.backgroundColor = [UIColor blackColor];
    
    //添加手势返回 IOS7及以上系统才能使用
    if(isAfterIOS7){
        self.navigationController.interactivePopGestureRecognizer.delegate = (id<UIGestureRecognizerDelegate>)self;
    }
}

/** 视图加载完成 */
- (void)viewDidLoad {
    [super viewDidLoad];
        
    //返回按钮
    UIButton *backBtn = [[UIButton alloc] init];
    backBtn.frame = CGRectMake(0, 0, 47, 30);
    backBtn.imageEdgeInsets = UIEdgeInsetsMake(4, 4, 4, 0);
    backBtn.accessibilityLabel = @"返回";
    [backBtn addTarget:self action:@selector(mhd_colseCtrl) forControlEvents:UIControlEventTouchUpInside];
    self.navigationItem.leftBarButtonItem = [[UIBarButtonItem alloc] initWithCustomView:backBtn];
    
    //代码加载控件或数据
    [self customView];
}

- (void)mhd_colseCtrl{
    [self.navigationController popViewControllerAnimated:YES];
}


@end
