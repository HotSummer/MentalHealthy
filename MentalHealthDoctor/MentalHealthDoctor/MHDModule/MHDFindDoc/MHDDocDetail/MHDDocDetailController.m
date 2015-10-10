//
//  MHDDocDetailController.m
//  MentalHealthDoctor
//
//  Created by jfsld1989 on 15/10/10.
//  Copyright (c) 2015年 zbq. All rights reserved.
//

#import "MHDDocDetailController.h"
#import "MHDDocDetailHeadView.h"
#import "MHDDocDetailTableView.h"

@interface MHDDocDetailController ()

@property(nonatomic ,strong) MHDDocDetailHeadView *tableHeadView;
@property(nonatomic ,strong) MHDDocDetailTableView *docDtailTableView;

@end

@implementation MHDDocDetailController

- (void)customView{
    [super customView];
    
    self.title = @"咨询师主页";

    [self loadDocDetailTableView];
}

- (void)viewDidLayoutSubviews{
    [super viewDidLayoutSubviews];
    
    [_docDtailTableView setFrame:CGRectMake(0.0f, 0.0f, CGRectGetWidth(self.view.bounds), CGRectGetHeight(self.view.bounds))];
}

- (void)loadDocDetailTableView{
    _docDtailTableView = [[MHDDocDetailTableView alloc] initWithStyle:NO];
    _docDtailTableView.ctrl = self;
    [self.view addSubview:_docDtailTableView];
    
    _tableHeadView = [[MHDDocDetailHeadView alloc] initWithFrame:CGRectMake(0.0f, 0.0f, CGRectGetWidth(self.view.bounds), 150.0f)];
    [_docDtailTableView setTableHeaderView:_tableHeadView];
}

@end
