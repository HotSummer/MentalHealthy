//
//  MHDDocDetailTableViewCell.m
//  MentalHealthDoctor
//
//  Created by jfsld1989 on 15/10/10.
//  Copyright (c) 2015年 zbq. All rights reserved.
//

#import "MHDDocDetailTableViewCell.h"


@implementation MHDDocDetailPriceCell

- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier {
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        [self setBackgroundColor:[UIColor clearColor]];
        [self.contentView setBackgroundColor:[UIColor clearColor]];
        [self setAccessoryType:UITableViewCellAccessoryNone];
        
        self.contentLbl = [[UILabel alloc] init];
        [self.contentLbl setTextColor:[UIColor blackColor]];
        [self.contentLbl setFont:[UIFont systemFontOfSize:docDetialTableCellFontSize]];
        [self.contentLbl setNumberOfLines:1000.0f];
        [self.contentView addSubview:self.contentLbl];
    }
    return self;
}

- (void)layoutSubviews {
    [super layoutSubviews];
    
    //单元格宽
    CGFloat cellWidth  = CGRectGetWidth(self.bounds);
    CGFloat cellHeight = CGRectGetHeight(self.bounds);
    [self.contentLbl setFrame:CGRectMake(10.0f, 0.0f, cellWidth - 20.0f, cellHeight)];
}

- (void)bindCellData {
    [super bindCellData];
    
    NSString *contentStr = [self.cellDetail getString:__KEY_CELL_TITLE];
    [self.contentLbl setText:contentStr];
}

@end

@implementation MHDDocDetailFavourableCell

- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier {
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        [self.contentLbl setTextColor:[UIColor grayColor]];
    }
    return self;
}

- (void)layoutSubviews {
    [super layoutSubviews];
}

- (void)bindCellData {
    [super bindCellData];
    
}

@end

@implementation MHDDocDetailSchoolCell

- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier {
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        self.leftView = [[UIView alloc] init];
        [self.leftView setBackgroundColor:[UIColor blackColor]];
        [self.contentView addSubview:self.leftView];
    }
    return self;
}

- (void)layoutSubviews {
    [super layoutSubviews];
    
    CGFloat cellWidth  = CGRectGetWidth(self.bounds);
    CGFloat cellHeight = CGRectGetHeight(self.bounds);
    
    [self.leftView setFrame:CGRectMake(10.0f, (cellHeight - 6.0f)/2, 6.0f, 6.0f)];
    [self.leftView.layer setCornerRadius:3.0f];
    [self.contentLbl setFrame:CGRectMake(20.0f, 0.0f, cellWidth - 30.0f, cellHeight)];
}

- (void)bindCellData {
    [super bindCellData];
    
}

@end

@implementation MHDDocDetailOtherCell

- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier {
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
    }
    return self;
}

- (void)layoutSubviews {
    [super layoutSubviews];
}

- (void)bindCellData {
    [super bindCellData];
    
}

@end

@implementation MHDDocDetailSectionView

- (id)initWithFrame:(CGRect)frame title:(NSString *)title{
    self = [super initWithFrame:frame];
    if(self){
        self.sectionTitleLbl = [[UILabel alloc] initWithFrame:CGRectMake(10.0f, 0.0f, 1.0f, 30.0f)];
        [self.sectionTitleLbl setBackgroundColor:[UIColor grayColor]];
        [self.sectionTitleLbl setTextAlignment:NSTextAlignmentCenter];
        [self.sectionTitleLbl setTextColor:[UIColor whiteColor]];
        [self.sectionTitleLbl setFont:[UIFont systemFontOfSize:18.0f]];
        [self.sectionTitleLbl setText:[title stringByAppendingString:@"  "]];
        [self.sectionTitleLbl sizeToFit];
        [self addSubview:self.sectionTitleLbl];
    }
    return self;
}

@end
