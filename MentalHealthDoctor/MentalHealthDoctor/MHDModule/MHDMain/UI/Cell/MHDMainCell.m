//
//  MHDMainCell.m
//  MentalHealthDoctor
//
//  Created by Summer.zhu on 16/2/15.
//  Copyright © 2016年 zbq. All rights reserved.
//

#import "MHDMainCell.h"
#import "MentalAdModel.h"

@interface MHDMainCell ()

@property (weak, nonatomic) IBOutlet UIImageView *imageviewBg;
@property (weak, nonatomic) IBOutlet UIImageView *imageviewType;
@property (weak, nonatomic) IBOutlet UIView *viewActive;
@property (weak, nonatomic) IBOutlet UIView *viewOther;
@property (weak, nonatomic) IBOutlet UILabel *lblType;
@property (weak, nonatomic) IBOutlet UILabel *lblMessageTitle;

@end

@implementation MHDMainCell

/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect {
    // Drawing code
}
*/

- (void)sz_updateCellInfoWithModel:(id)model withSuperWidth:(CGFloat)t_superWidth indexPath:(NSIndexPath*)indexPath del:(id)delegate{
    if ([model isKindOfClass:[MentalAdModel class]]) {
        MentalAdModel *mentalAdModel = (MentalAdModel *)model;
        _lblType.text = [mentalAdModel adType];
        _imageviewBg.image = [UIImage imageNamed:mentalAdModel.bgImageUrl];
        _imageviewType.image = [UIImage imageNamed:mentalAdModel.indicatorImageUrl];
        if (mentalAdModel.goType == AdType_Activity) {
            _viewActive.hidden = NO;
            _viewOther.hidden = YES;
        }else{
            _viewActive.hidden = YES;
            _viewOther.hidden = NO;
            _lblMessageTitle.text = mentalAdModel.title;
        }
    }
}

+ (CGFloat)sz_cellHeightWithModel:(id)model withSuperWidth:(CGFloat)t_superWidth{
    return 230;
}

@end
