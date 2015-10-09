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
        
        
        
    }
    return self;
}

- (void)layoutSubviews {
    [super layoutSubviews];
    
    //单元格宽
    CGFloat cellWidth  = CGRectGetWidth(self.frame);
    CGFloat padding = 5.0f;
    
}

- (void)bindCellData {
    [super bindCellData];
    
}


@end
