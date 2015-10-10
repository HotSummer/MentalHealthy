//
//  MHDActivityDetailBottomView.m
//  MentalHealthDoctor
//
//  Created by jfsld1989 on 15/10/10.
//  Copyright (c) 2015年 zbq. All rights reserved.
//

#import "MHDActivityDetailBottomView.h"

@interface MHDActivityDetailBottomView ()

@property(nonatomic,strong) UIButton *attentionBtn;
@property(nonatomic,strong) UIButton *joinBtn;
@property(nonatomic,strong) UIView *paddingView;


@end

@implementation MHDActivityDetailBottomView

- (void)drawRect:(CGRect)rect{
    [super drawRect:rect];
    
    self.attentionBtn = [[UIButton alloc] init];
    [self.attentionBtn setBackgroundColor:[UIColor clearColor]];
    [self.attentionBtn setTitle:@"关注活动" forState:UIControlStateNormal];
    [self.attentionBtn.titleLabel setFont:[UIFont boldSystemFontOfSize:18.0f]];
    [self.attentionBtn setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
    [self addSubview:self.attentionBtn];
 
    self.joinBtn = [[UIButton alloc] init];
    [self.joinBtn setBackgroundColor:[UIColor clearColor]];
    [self.joinBtn setTitle:@"报名参加" forState:UIControlStateNormal];
    [self.joinBtn.titleLabel setFont:[UIFont boldSystemFontOfSize:18.0f]];
    [self.joinBtn setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
    [self addSubview:self.joinBtn];
    
    self.paddingView = [[UIView alloc] init];
    [self.paddingView setBackgroundColor:[UIColor whiteColor]];
    [self addSubview:self.paddingView];
}

- (void)layoutSubviews{
    [super layoutSubviews];
    
    float width = CGRectGetWidth(self.bounds);
    float height = CGRectGetHeight(self.bounds);
    float paddingWidth = 3.0f;
    
    [self.attentionBtn setFrame:CGRectMake(0.0f, 0.0f, (width - paddingWidth)/2, height)];
    [self.paddingView setFrame:CGRectMake(0.0f, 5.0f, paddingWidth, height-10.0f)];
    [self.paddingView sb_rightOfView:self.attentionBtn];
    [self.joinBtn setFrame:CGRectMake(0.0f, 0.0f, (width - paddingWidth)/2, height)];
    [self.joinBtn sb_rightOfView:self.paddingView];
    
}


@end
