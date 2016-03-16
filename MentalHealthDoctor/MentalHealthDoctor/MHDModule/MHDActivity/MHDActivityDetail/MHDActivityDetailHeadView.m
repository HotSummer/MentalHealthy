//
//  MHDActivityDetailHeadView.m
//  MentalHealthDoctor
//
//  Created by jfsld1989 on 15/10/10.
//  Copyright (c) 2015年 zbq. All rights reserved.
//

#import "MHDActivityDetailHeadView.h"

@interface MHDActivityDetailHeadView()

@property(nonatomic ,strong) UILabel *activityTitleLbl;
@property(nonatomic ,strong) UIImageView *activityImageView;

@property(nonatomic ,strong) UILabel *activityTimeLbl;
@property(nonatomic ,strong) UILabel *activityAddressLbl;
@property(nonatomic ,strong) UILabel *activitySponsorLbl;
@property(nonatomic ,strong) UILabel *activityTypeLbl;
@property(nonatomic ,strong) UILabel *activityPeopleCountLbl;


@end

@implementation MHDActivityDetailHeadView

- (void)drawRect:(CGRect)rect{
    [super drawRect:rect];
    
    self.activityTitleLbl = [[UILabel alloc] init];
    [self.activityTitleLbl setFont:[UIFont systemFontOfSize:18.0f]];
    [self.activityTitleLbl setBackgroundColor:[UIColor clearColor]];
    [self addSubview:self.activityTitleLbl];
    
    self.activityImageView = [[UIImageView alloc] init];
    [self.activityImageView setBackgroundColor:[UIColor clearColor]];
    [self addSubview:self.activityImageView];
    
    self.activityTimeLbl = [[UILabel alloc] init];
    [self.activityTimeLbl setFont:[UIFont systemFontOfSize:12.0f]];
    [self.activityTimeLbl setBackgroundColor:[UIColor clearColor]];
    [self addSubview:self.activityTimeLbl];
    
    self.activityAddressLbl = [[UILabel alloc] init];
    [self.activityAddressLbl setFont:[UIFont systemFontOfSize:12.0f]];
    [self.activityAddressLbl setBackgroundColor:[UIColor clearColor]];
    [self addSubview:self.activityAddressLbl];
    
    self.activitySponsorLbl = [[UILabel alloc] init];
    [self.activitySponsorLbl setFont:[UIFont systemFontOfSize:12.0f]];
    [self.activitySponsorLbl setBackgroundColor:[UIColor clearColor]];
    [self addSubview:self.activitySponsorLbl];
    
    self.activityTypeLbl = [[UILabel alloc] init];
    [self.activityTypeLbl setFont:[UIFont systemFontOfSize:12.0f]];
    [self.activityTypeLbl setBackgroundColor:[UIColor clearColor]];
    [self addSubview:self.activityTypeLbl];
    
    self.activityPeopleCountLbl = [[UILabel alloc] init];
    [self.activityPeopleCountLbl setFont:[UIFont systemFontOfSize:12.0f]];
    [self.activityPeopleCountLbl setBackgroundColor:[UIColor clearColor]];
    [self addSubview:self.activityPeopleCountLbl];
    
    [self.activityTitleLbl setText:@"体验催眠大师群体沙龙"];
    [self.activityImageView setImage:[UIImage imageNamed:@"cuimian"]];
    [self.activityTimeLbl setText:@"2015-10-16 19:30-21:00"];
    [self.activityAddressLbl setText:@"上海市静安区南京西路1266号38层 唯品会"];
    [self.activitySponsorLbl setText:@"唯品会"];
    [self.activityTypeLbl setText:@"100元/人"];
    [self.activityPeopleCountLbl setText:@"1000人"];
    
}

- (void)layoutSubviews{
    [super layoutSubviews];
    
    CGFloat width = CGRectGetWidth(self.bounds);
    CGFloat imageWidth = 100.0f;
    [self.activityTitleLbl setFrame:CGRectMake(10.0f, 0.0f, width - 20.0f, 50.0f)];
    
    [self.activityImageView setFrame:CGRectMake(10.0f, 0.0f, imageWidth, imageWidth)];
    [self.activityImageView sb_bottomOfView:self.activityTitleLbl];
    
    [self.activityTimeLbl setFrame:CGRectMake(20.0f+imageWidth , 0.0f, width - 30.0f - imageWidth,20.0f)];
    [self.activityTimeLbl sb_bottomOfView:self.activityTitleLbl];
    
    [self.activityAddressLbl setFrame:CGRectMake(20.0f+imageWidth , 0.0f, width - 30.0f - imageWidth,20.0f)];
    [self.activityAddressLbl sb_bottomOfView:self.activityTimeLbl];

    [self.activitySponsorLbl setFrame:CGRectMake(20.0f+imageWidth , 0.0f, width - 30.0f - imageWidth,20.0f)];
    [self.activitySponsorLbl sb_bottomOfView:self.activityAddressLbl];
    
    [self.activityTypeLbl setFrame:CGRectMake(20.0f+imageWidth , 0.0f, width - 30.0f - imageWidth,20.0f)];
    [self.activityTypeLbl sb_bottomOfView:self.activitySponsorLbl];

    [self.activityPeopleCountLbl setFrame:CGRectMake(20.0f+imageWidth , 0.0f, width - 30.0f - imageWidth,20.0f)];
    [self.activityPeopleCountLbl sb_bottomOfView:self.activityTypeLbl];
}

@end
