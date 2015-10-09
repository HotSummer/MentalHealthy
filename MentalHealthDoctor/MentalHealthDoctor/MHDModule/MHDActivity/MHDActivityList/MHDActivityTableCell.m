//
//  MHDActivityTableCell.m
//  MentalHealthDoctor
//
//  Created by jfsld1989 on 15/10/8.
//  Copyright (c) 2015年 zbq. All rights reserved.
//

#import "MHDActivityTableCell.h"

@implementation MHDActivityTableCell

- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier {
    self               = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        [self setBackgroundColor:[UIColor clearColor]];
        [self.contentView setBackgroundColor:[UIColor clearColor]];
        [self setAccessoryType:UITableViewCellAccessoryNone];
        
        //宣传照片
        self.activityPosterImageView = [[UIImageView alloc] init];
        [self.activityPosterImageView setBackgroundColor:[UIColor clearColor]];
        [self.contentView addSubview:self.activityPosterImageView];
        
        //活动介绍View,下面的文字，地址之类的
        self.activityIntroduceView = [[UIView alloc] init];
        [self.activityIntroduceView setBackgroundColor:[UIColor whiteColor]];
        [self.contentView addSubview:self.activityIntroduceView];
        
        //活动性质
        self.activityTypeLbl = [[UILabel alloc] init];
        [self.activityTypeLbl setBackgroundColor:[UIColor clearColor]];
        [self.activityTypeLbl setFont:[UIFont systemFontOfSize:13.0f]];
        [self.activityTypeLbl setTextColor:[UIColor blackColor]];
        [self.activityIntroduceView addSubview:self.activityTypeLbl];
        
        //活动期限提醒
        self.activityReimdLbl = [[UILabel alloc] init];
        [self.activityReimdLbl setBackgroundColor:[UIColor orangeColor]];
        [self.activityReimdLbl setFont:[UIFont systemFontOfSize:12.0f]];
        [self.activityReimdLbl setTextColor:[UIColor blackColor]];
        [self.activityReimdLbl setTextAlignment:NSTextAlignmentCenter];
        [self.activityIntroduceView addSubview:self.activityReimdLbl];

        //活动名称
        self.activityTitleLbl = [[UILabel alloc] init];
        [self.activityTitleLbl setBackgroundColor:[UIColor clearColor]];
        [self.activityTitleLbl setFont:[UIFont systemFontOfSize:16.0f]];
        [self.activityTitleLbl setTextColor:[UIColor blackColor]];
        [self.activityIntroduceView addSubview:self.activityTitleLbl];

        //活动时间
        self.activityTimeImageView = [[UIImageView alloc] init];
        [self.activityTimeImageView setBackgroundColor:[UIColor clearColor]];
        [self.activityIntroduceView addSubview:self.activityTimeImageView];
        
        self.activityTimeLbl = [[UILabel alloc] init];
        [self.activityTimeLbl setBackgroundColor:[UIColor clearColor]];
        [self.activityTimeLbl setFont:[UIFont systemFontOfSize:13.0f]];
        [self.activityTimeLbl setTextColor:[UIColor blackColor]];
        [self.activityIntroduceView addSubview:self.activityTimeLbl];

        //活动地址
        self.activityAddressImageView = [[UIImageView alloc] init];
        [self.activityAddressImageView setBackgroundColor:[UIColor clearColor]];
        [self.activityIntroduceView addSubview:self.activityAddressImageView];
        
        self.activityAddressLbl = [[UILabel alloc] init];
        [self.activityAddressLbl setBackgroundColor:[UIColor clearColor]];
        [self.activityAddressLbl setFont:[UIFont systemFontOfSize:13.0f]];
        [self.activityAddressLbl setTextColor:[UIColor blackColor]];
        [self.activityIntroduceView addSubview:self.activityAddressLbl];
    }
    return self;
}

- (void)layoutSubviews {
    [super layoutSubviews];

    //单元格宽
    CGFloat cellWidth  = CGRectGetWidth(self.frame);
    CGFloat padding = 5.0f;
    
    [self.activityPosterImageView setFrame:CGRectMake(0.0f, 0.0f, cellWidth, cellWidth)];
    [self.activityIntroduceView setFrame:CGRectMake(0.0f, 0.0f, cellWidth, 110.0f)];
    [self.activityIntroduceView sb_bottomOfView:self.activityPosterImageView];
    
    [self.activityTypeLbl setFrame:CGRectMake(20.0f, 0.0f, 150.0f, 20.0f)];
    [self.activityReimdLbl setFrame:CGRectMake(cellWidth - 140.0f, 5.0f, 130.0f, 30.0f)];
    [self.activityReimdLbl.layer setCornerRadius:5.0f];
    
    [self.activityTitleLbl setFrame:CGRectMake(10.0f, 0.0f, cellWidth - 140.0f, 20.0f)];
    [self.activityTitleLbl sb_bottomOfView:self.activityTypeLbl withMargin:padding];
    
    [self.activityTimeLbl setFrame:CGRectMake(10.0f, 0.0f, cellWidth - 10.0*2, 20.0f)];
    [self.activityTimeLbl sb_bottomOfView:self.activityTitleLbl withMargin:padding*2];
    
    [self.activityAddressLbl setFrame:CGRectMake(10.0f, 0.0f, cellWidth - 10.0*2, 20.0f)];
    [self.activityAddressLbl sb_bottomOfView:self.activityTimeLbl withMargin:padding];
}

- (void)bindCellData {
    [super bindCellData];
    
    [self.activityPosterImageView setImage:[UIImage imageNamed:@"activityPoster.png"]];
    
    [self.activityTypeLbl setText:@"沙龙"];
    
    [self.activityTitleLbl setText:@"体验催眠大师集体催眠"];
    
    [self.activityReimdLbl setText:@"距离活动开始还有3天"];

    [self.activityTimeLbl setText:@"2015-10-16 19:30-21:30"];

    [self.activityAddressLbl setText:@"上海市静安区南京西路1266号38层 唯品会"];
}


@end
