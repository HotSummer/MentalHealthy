//
//  MHDSearchConsultantView.m
//  MentalHealthDoctor
//
//  Created by Summer on 16/2/24.
//  Copyright © 2016年 zbq. All rights reserved.
//

#import "MHDSearchConsultantView.h"

@interface MHDSearchConsultantView ()
@property (weak, nonatomic) IBOutlet UILabel *lblTitle;
@property (weak, nonatomic) IBOutlet UIView *viewSep;
@property (weak, nonatomic) IBOutlet UIView *viewLeft;
@property (weak, nonatomic) IBOutlet UIView *viewRight;
@property (weak, nonatomic) IBOutlet NSLayoutConstraint *layoutConstraintLeftEquipRight;

- (IBAction)didPressedBtnSearchPerson:(id)sender;

@end

@implementation MHDSearchConsultantView

/*
// Only override drawRect: if you perform custom drawing.
// An empty implementation adversely affects performance during animation.
- (void)drawRect:(CGRect)rect {
    // Drawing code
}
*/

+ (instancetype)initializeUI{
    MHDSearchConsultantView *searchView = [[[NSBundle mainBundle] loadNibNamed:@"MHDSearchConsultantView" owner:self options:nil] lastObject];
    return searchView;
}

- (IBAction)didPressedBtnSearchPerson:(id)sender {
    [self removeConstraint:_layoutConstraintLeftEquipRight];
    [_viewLeft mas_remakeConstraints:^(MASConstraintMaker *make) {
        make.top.equalTo(_lblTitle.mas_bottom);
        make.left.equalTo(@0);
        make.width.equalTo(self.mas_width);
        make.bottom.equalTo(@0);
    }];
    
    [_viewRight mas_remakeConstraints:^(MASConstraintMaker *make) {
        make.top.equalTo(_lblTitle.mas_bottom);
        make.bottom.equalTo(@0);
        make.right.equalTo(self.mas_right);
        make.width.equalTo(@0);
    }];
    
    [UIView animateWithDuration:0.3f animations:^{
        _viewRight.alpha = 0;
        [self layoutIfNeeded];
    }];
}
@end