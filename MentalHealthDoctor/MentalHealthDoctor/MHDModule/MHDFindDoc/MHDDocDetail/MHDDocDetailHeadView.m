//
//  MHDDocDetailHeadView.m
//  MentalHealthDoctor
//
//  Created by jfsld1989 on 15/10/10.
//  Copyright (c) 2015年 zbq. All rights reserved.
//

#import "MHDDocDetailHeadView.h"

@interface MHDDocDetailHeadView()

@property(nonatomic ,strong) UIImageView *headImageView;
@property(nonatomic ,strong) UILabel *nameLbl;
@property(nonatomic ,strong) UILabel *levelLbl;
@property(nonatomic ,strong) UIButton *hospitalbtn;

@property(nonatomic ,strong) UIView *buyView;
@property(nonatomic ,strong) UILabel *timeLbl;
@property(nonatomic ,strong) UIButton *plusBtn;
@property(nonatomic ,strong) UIButton *addBtn;
@property(nonatomic ,strong) UILabel *buyCountLbl;
@property(nonatomic ,strong) UIButton *buyBtn;

@end

@implementation MHDDocDetailHeadView

- (id)initWithFrame:(CGRect)frame{
    self = [super initWithFrame:frame];
    if(self){
        [self setBackgroundColor:[UIColor whiteColor]];
    }
    return self;
}

- (void)layoutSubviews{
    [super layoutSubviews];
    CGFloat width = CGRectGetWidth(self.bounds);
    
    [_headImageView setFrame:CGRectMake(20.0f, 20.0f, 80.0f, 80.0f)];
    [_headImageView.layer setCornerRadius:40.0f];
    [_headImageView.layer setBorderWidth:1.0f];
    [_headImageView.layer setBorderColor:[UIColor grayColor].CGColor];
    [_headImageView.layer setMasksToBounds:YES];
    
    [_nameLbl setFrame:CGRectMake(110.0f, 20.0f, width - 120.0f, 20.0f)];
    [_levelLbl setFrame:CGRectMake(110.0f, 0.0f, width - 120.0f, 40.0f)];
    [_levelLbl sb_bottomOfView:_nameLbl];
    [_hospitalbtn setFrame:CGRectMake(110.0f, 0.0f, width - 120.0f, 20.0f)];
    [_hospitalbtn sb_bottomOfView:_levelLbl];
    [_hospitalbtn.layer setShadowOffset:CGSizeMake(3, 3)];
    [_hospitalbtn.layer setShadowRadius:4];
    [_hospitalbtn.layer setShadowOpacity:0.5];
    [_hospitalbtn.layer setShadowColor:[UIColor blackColor].CGColor];
    
    [_buyView setFrame:CGRectMake(0.0f, 0.0f, width, 30.0f)];
    [_buyView sb_bottomOfView:_headImageView withMargin:10.0f];
    
    [_plusBtn setFrame:CGRectMake(20.0f, 0.0f, 30.0f, 30.0f)];
    [_plusBtn.layer setBorderColor:[UIColor grayColor].CGColor];
    [_plusBtn.layer setBorderWidth:1.0f];
    
    [_buyCountLbl setFrame:CGRectMake(0.0f, 0.0f, 30.0f, 30.0f)];
    [_buyCountLbl sb_rightOfView:_plusBtn withMargin:5.0f];
    [_buyCountLbl.layer setBorderColor:[UIColor grayColor].CGColor];
    [_buyCountLbl.layer setBorderWidth:1.0f];
    
    [_addBtn setFrame:CGRectMake(0.0f, 0.0f, 30.0f, 30.0f)];
    [_addBtn sb_rightOfView:_buyCountLbl withMargin:5.0f];
    [_addBtn.layer setBorderColor:[UIColor grayColor].CGColor];
    [_addBtn.layer setBorderWidth:1.0f];
    
    [_timeLbl setFrame:CGRectMake(0.0f, 0.0f, 40.0f, 30.0f)];
    [_timeLbl sb_rightOfView:_addBtn withMargin:5.0f];
    
    [_buyBtn setFrame:CGRectMake(width - 120.0f, 0.0f, 80.0f, 30.0f)];
    UIImage *defaultImage = [UIImage createRoundedRectImage:[UIImage createImageWithColor:[UIColor colorWithHex:0xE54546]] size:CGSizeMake(80.0f, 30.0f) radius:15.0f];
    UIImage *highLightImage = [UIImage createRoundedRectImage:[UIImage createImageWithColor:[UIColor orangeColor]] size:CGSizeMake(80.0f, 30.0f) radius:15.0f];
    [_buyBtn setBackgroundImage:defaultImage forState:UIControlStateNormal];
    [_buyBtn setBackgroundImage:highLightImage forState:UIControlStateHighlighted];
    [_buyBtn setBackgroundImage:highLightImage forState:UIControlStateSelected];
    
    [_buyBtn.layer setShadowOffset:CGSizeMake(3, 3)];
    [_buyBtn.layer setShadowRadius:4];
    [_buyBtn.layer setShadowOpacity:0.5];
    [_buyBtn.layer setShadowColor:[UIColor blackColor].CGColor];
}

- (void)drawRect:(CGRect)rect{
    [super drawRect:rect];
    
    _headImageView = [[UIImageView alloc] init];
    [_headImageView setBackgroundColor:[UIColor clearColor]];
    [_headImageView setImage:[UIImage imageNamed:@"docHead.jpg"]];
    [self addSubview:_headImageView];
    
    _nameLbl = [[UILabel alloc] init];
    [_nameLbl setBackgroundColor:[UIColor clearColor]];
    [_nameLbl setTextColor:[UIColor blackColor]];
    [_nameLbl setFont:[UIFont systemFontOfSize:13.0f]];
    [_nameLbl setText:@"朱帮乾"];
    [self addSubview:_nameLbl];
    
    _levelLbl = [[UILabel alloc] init];
    [_levelLbl setBackgroundColor:[UIColor clearColor]];
    [_levelLbl setTextColor:[UIColor blackColor]];
    [_levelLbl setFont:[UIFont systemFontOfSize:13.0f]];
    [_levelLbl setNumberOfLines:2];
    [_levelLbl setText:@"国家一级催眠师，国际一级心理咨询师"];
    [self addSubview:_levelLbl];
    
    _hospitalbtn = [[UIButton alloc] init];
    [_hospitalbtn setBackgroundColor:[UIColor clearColor]];
    [_hospitalbtn setTitleColor:[UIColor blackColor] forState:UIControlStateNormal];
    [_hospitalbtn.titleLabel setFont:[UIFont systemFontOfSize:13.0f]];
    [_hospitalbtn setTitle:@"上海宏康医院 》" forState:UIControlStateNormal];
    [_hospitalbtn addTarget:self action:@selector(hosipitalBtnClicked) forControlEvents:UIControlEventTouchUpInside];
    [_hospitalbtn setContentHorizontalAlignment:UIControlContentHorizontalAlignmentLeft];
    [self addSubview:_hospitalbtn];
    
    //买view
    _buyView = [[UIView alloc] init];
    [_buyView setBackgroundColor:[UIColor clearColor]];
    [self addSubview:_buyView];
    
    _plusBtn = [[UIButton alloc] init];
    [_plusBtn setBackgroundColor:[UIColor clearColor]];
    [_plusBtn setTitle:@"-" forState:UIControlStateNormal];
    [_plusBtn setTitleColor:[UIColor blackColor] forState:UIControlStateNormal];
    [_plusBtn.titleLabel setFont:[UIFont boldSystemFontOfSize:18.0f]];
    [_plusBtn addTarget:self action:@selector(plusBtnClicked) forControlEvents:UIControlEventTouchUpInside];
    [_buyView addSubview:_plusBtn];
    
    _addBtn = [[UIButton alloc] init];
    [_addBtn setBackgroundColor:[UIColor clearColor]];
    [_addBtn setTitle:@"+" forState:UIControlStateNormal];
    [_addBtn setTitleColor:[UIColor blackColor] forState:UIControlStateNormal];
    [_addBtn.titleLabel setFont:[UIFont boldSystemFontOfSize:18.0f]];
    [_addBtn addTarget:self action:@selector(addBtnClicked) forControlEvents:UIControlEventTouchUpInside];
    [_buyView addSubview:_addBtn];
    
    _buyCountLbl = [[UILabel alloc] init];
    [_buyCountLbl setBackgroundColor:[UIColor clearColor]];
    [_buyCountLbl setTextColor:[UIColor blackColor]];
    [_buyCountLbl setText:@"1"];
    [_buyCountLbl setTextAlignment:NSTextAlignmentCenter];
    [_buyCountLbl setFont:[UIFont systemFontOfSize:15.0f]];
    [_buyView addSubview:_buyCountLbl];
    
    _timeLbl = [[UILabel alloc] init];
    [_timeLbl setBackgroundColor:[UIColor clearColor]];
    [_timeLbl setTextColor:[UIColor blackColor]];
    [_timeLbl setFont:[UIFont systemFontOfSize:15.0f]];
    [_timeLbl setText:@"小时"];
    [_buyView addSubview:_timeLbl];
    
    _buyBtn = [[UIButton alloc] init];
    [_buyBtn setBackgroundColor:[UIColor clearColor]];
    [_buyBtn setTitle:@"购买" forState:UIControlStateNormal];
    [_buyBtn setTitleColor:[UIColor whiteColor] forState:UIControlStateNormal];
    [_buyView addSubview:_buyBtn];
}

- (void)plusBtnClicked{
    NSInteger countSize = [_buyCountLbl.text integerValue];
    if(countSize == 0){
        return;
    }
    countSize = countSize - 1;
    [_buyCountLbl setText:[NSString stringWithFormat:@"%ld",countSize]];
}

- (void)addBtnClicked{
    NSInteger countSize = [_buyCountLbl.text integerValue];
    countSize = countSize + 1;
    [_buyCountLbl setText:[NSString stringWithFormat:@"%ld",countSize]];
}

#pragma mark 机构点击事件
- (void)hosipitalBtnClicked{
    UIAlertView *alert = [[UIAlertView alloc] initWithTitle:@"上海宏康医院" message:@"简介~~~~" delegate:nil cancelButtonTitle:@"确定" otherButtonTitles:nil, nil];
    [alert show];
}

@end
