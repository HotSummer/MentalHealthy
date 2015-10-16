//
//  MHDDocTableViewCell.m
//  MentalHealthDoctor
//
//  Created by jfsld1989 on 15/10/9.
//  Copyright (c) 2015年 zbq. All rights reserved.
//

#import "MHDDocTableViewCell.h"

@implementation MHDDocTableViewCell


- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier {
    self               = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        [self setBackgroundColor:[UIColor clearColor]];
        [self.contentView setBackgroundColor:[UIColor clearColor]];
        [self setAccessoryType:UITableViewCellAccessoryNone];
        
        self.headImageView = [[UIImageView alloc] init];
        [self.headImageView setBackgroundColor:[UIColor clearColor]];
        [self.contentView addSubview:self.headImageView];
        
        self.detaiView = [[UIView alloc] init];
        [self.detaiView setBackgroundColor:[UIColor whiteColor]];
        [self.contentView addSubview:self.detaiView];
        
        self.docNameLbl = [[UILabel alloc] init];
        [self.docNameLbl setBackgroundColor:[UIColor clearColor]];
        [self.docNameLbl setTextColor:[UIColor blackColor]];
        [self.docNameLbl setFont:[UIFont systemFontOfSize:12.0f]];
        [self.detaiView addSubview:self.docNameLbl];
        
        self.docLevelLbl = [[UILabel alloc] init];
        [self.docLevelLbl setBackgroundColor:[UIColor clearColor]];
        [self.docLevelLbl setTextColor:[UIColor blackColor]];
        [self.docLevelLbl setFont:[UIFont systemFontOfSize:12.0f]];
        [self.detaiView addSubview:self.docLevelLbl];
        
        self.docSummaryLbl = [[UILabel alloc] init];
        [self.docSummaryLbl setBackgroundColor:[UIColor clearColor]];
        [self.docSummaryLbl setTextColor:[UIColor blackColor]];
        [self.docSummaryLbl setFont:[UIFont systemFontOfSize:12.0f]];
        [self.docSummaryLbl setNumberOfLines:2];
        [self.detaiView addSubview:self.docSummaryLbl];
        
        self.star1ImageView = [[UIImageView alloc] init];
        [self.star1ImageView setBackgroundColor:[UIColor clearColor]];
        [self.detaiView addSubview:self.star1ImageView];
        
        self.star2ImageView = [[UIImageView alloc] init];
        [self.star2ImageView setBackgroundColor:[UIColor clearColor]];
        [self.detaiView addSubview:self.star2ImageView];
        
        self.star3ImageView = [[UIImageView alloc] init];
        [self.star3ImageView setBackgroundColor:[UIColor clearColor]];
        [self.detaiView addSubview:self.star3ImageView];
        
        self.star4ImageView = [[UIImageView alloc] init];
        [self.star4ImageView setBackgroundColor:[UIColor clearColor]];
        [self.detaiView addSubview:self.star4ImageView];
        
        self.star5ImageView = [[UIImageView alloc] init];
        [self.star5ImageView setBackgroundColor:[UIColor clearColor]];
        [self.detaiView addSubview:self.star5ImageView];
        
    }
    return self;
}

- (void)layoutSubviews {
    [super layoutSubviews];
    
    //单元格宽
    CGFloat cellWidth  = CGRectGetWidth(self.frame);
    CGFloat padding = 5.0f;
    
    [self.headImageView setFrame:CGRectMake(20.0f, padding, 80.0f, 80.0f)];
    [self.headImageView.layer setShadowOffset:CGSizeMake(3, 3)];
    [self.headImageView.layer setShadowRadius:4];
    [self.headImageView.layer setShadowOpacity:0.5];
    [self.headImageView.layer setShadowColor:[UIColor grayColor].CGColor];
    
    [self.detaiView setFrame:CGRectMake(90.0f, 15.0f, cellWidth - 100.0f, 80.0f)];
    [self.detaiView.layer setShadowOffset:CGSizeMake(3, 3)];
    [self.detaiView.layer setShadowRadius:4];
    [self.detaiView.layer setShadowOpacity:0.5];
    [self.detaiView.layer setShadowColor:[UIColor grayColor].CGColor];
    
    [self.docNameLbl setFrame:CGRectMake(10.0f, padding, 80.0f, 16.0f)];
    
    [self.star1ImageView setFrame:CGRectMake(0.0f, padding, 15.0f, 15.0f)];
    [self.star1ImageView sb_rightOfView:self.docNameLbl withMargin:padding];
    [self.star2ImageView setFrame:CGRectMake(0.0f, padding, 15.0f, 15.0f)];
    [self.star2ImageView sb_rightOfView:self.star1ImageView withMargin:padding/2];
    [self.star3ImageView setFrame:CGRectMake(0.0f, padding, 15.0f, 15.0f)];
    [self.star3ImageView sb_rightOfView:self.star2ImageView withMargin:padding/2];
    [self.star4ImageView setFrame:CGRectMake(0.0f, padding, 15.0f, 15.0f)];
    [self.star4ImageView sb_rightOfView:self.star3ImageView withMargin:padding/2];
    [self.star5ImageView setFrame:CGRectMake(0.0f, padding, 15.0f, 15.0f)];
    [self.star5ImageView sb_rightOfView:self.star4ImageView withMargin:padding/2];
    
    
    [self.docLevelLbl setFrame:CGRectMake(10.0f, 5.0f, CGRectGetWidth(self.detaiView.bounds) - 20.0f, 16.0f)];
    [self.docLevelLbl sb_bottomOfView:self.docNameLbl withMargin:padding];
    
    [self.docSummaryLbl setFrame:CGRectMake(10.0f, 0.0f, CGRectGetWidth(self.detaiView.bounds) - 20.0f, 32.0f)];
    [self.docSummaryLbl sb_bottomOfView:self.docLevelLbl withMargin:padding];
    
    for (UIView *subview in self.contentView.superview.subviews) {
        if ([NSStringFromClass(subview.class) hasSuffix:@"SeparatorView"]) {
            subview.hidden = YES;
        }
    }
}

- (void)bindCellData {
    [super bindCellData];
    
    [self.headImageView setImage:[UIImage imageNamed:@"docHead.jpg"]];
    
    [self.star1ImageView setImage:[UIImage imageNamed:@"star"]];
    [self.star2ImageView setImage:[UIImage imageNamed:@"star"]];
    [self.star3ImageView setImage:[UIImage imageNamed:@"star"]];
    [self.star4ImageView setImage:[UIImage imageNamed:@"star"]];
    [self.star5ImageView setImage:[UIImage imageNamed:@"star"]];
    
    NSInteger showStars = self.indexPath.row;
    [self.star1ImageView setHidden:showStars<1];
    [self.star2ImageView setHidden:showStars<2];
    [self.star3ImageView setHidden:showStars<3];
    [self.star4ImageView setHidden:showStars<4];
    [self.star5ImageView setHidden:showStars<5];
    
    [self.docNameLbl setText:@"朱帮乾"];
    [self.docLevelLbl setText:@"国家一级催眠师，国际一级心理咨询师"];
    [self.docSummaryLbl setText:@"简介：中国心理卫生协会心理咨询与治疗分会精神分析组组长。国际艾滋病研究小组组长"];
}


@end
