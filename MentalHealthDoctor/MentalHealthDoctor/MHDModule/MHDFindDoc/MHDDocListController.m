//
//  MHDDocListController.m
//  MentalHealthDoctor
//
//  Created by jfsld1989 on 15/10/9.
//  Copyright (c) 2015年 zbq. All rights reserved.
//

#import "MHDDocListController.h"
#import "MHDDocTableView.h"

@interface MHDDocListController ()

@property(nonatomic ,strong) MHDDocTableView *docTableView;
@property(nonatomic ,strong) UIButton *changeBtn;

@end

@implementation MHDDocListController

- (void)customView{
    [super customView];
    
    self.title = @"符合条件的医生列表";
    
    [self loadDocTableView];
    
    [self loadChangeBtn];
}

- (void)viewDidLayoutSubviews{
    [super viewDidLayoutSubviews];
    
    CGFloat width = CGRectGetWidth(self.view.bounds);
    
    CGFloat btnWidht = 200.0f;
    
    [_docTableView setFrame:CGRectMake(0.0f, 0.0f, CGRectGetWidth(self.view.bounds), CGRectGetHeight(self.view.bounds) - 50.0f)];
    
    [_changeBtn setFrame:CGRectMake((width - btnWidht)/2, CGRectGetHeight(self.view.bounds) - 45.0f, btnWidht, 40.0f)];
    UIImage *defaultImage = [UIImage createRoundedRectImage:[UIImage createImageWithColor:[UIColor colorWithHex:0xE54546]] size:CGSizeMake(btnWidht, 40.0f) radius:20.0f];
    UIImage *highLightImage = [UIImage createRoundedRectImage:[UIImage createImageWithColor:[UIColor orangeColor]] size:CGSizeMake(btnWidht, 40.0f) radius:20.0f];
    [_changeBtn setBackgroundImage:defaultImage forState:UIControlStateNormal];
    [_changeBtn setBackgroundImage:highLightImage forState:UIControlStateHighlighted];
    [_changeBtn setBackgroundImage:highLightImage forState:UIControlStateSelected];
    
    [_changeBtn.layer setShadowOffset:CGSizeMake(3, 3)];
    [_changeBtn.layer setShadowRadius:4];
    [_changeBtn.layer setShadowOpacity:0.5];
    [_changeBtn.layer setShadowColor:[UIColor blackColor].CGColor];
}

#pragma mark 活动列表
- (void)loadDocTableView{
    _docTableView = [[MHDDocTableView alloc] initWithStyle:NO];
    _docTableView.ctrl = self;
    [self.view addSubview:_docTableView];
}

- (void)loadChangeBtn{
    _changeBtn = [[UIButton alloc] init];
    [_changeBtn setBackgroundColor:[UIColor clearColor]];
    [_changeBtn setTitle:@"不满意，换一批" forState:UIControlStateNormal];
    [self.view addSubview:_changeBtn];
}

@end
