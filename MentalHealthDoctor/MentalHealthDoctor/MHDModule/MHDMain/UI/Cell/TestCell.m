//
//  TestCell.m
//  MentalHealthDoctor
//
//  Created by Summer on 16/6/1.
//  Copyright © 2016年 zbq. All rights reserved.
//

#import "TestCell.h"

@interface TestCell ()

@property (weak, nonatomic) IBOutlet UILabel *lblContent;


@end

@implementation TestCell

/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect {
    // Drawing code
}
*/

+ (CGFloat)sz_cellHeightWithModel:(id)model withSuperWidth:(CGFloat)t_superWidth{
    return 104;
}


- (void)sz_updateCellInfoWithModel:(id)model withSuperWidth:(CGFloat)t_superWidth indexPath:(NSIndexPath *)indexPath{
    NSString *strContent = (NSString *)model;
    
    _lblContent.text = strContent;
}

@end
