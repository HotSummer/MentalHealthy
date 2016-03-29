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
@property (weak, nonatomic) IBOutlet UILabel *lblLeft;
@property (weak, nonatomic) IBOutlet UIView *viewLeft;
@property (weak, nonatomic) IBOutlet UILabel *lblRight;
@property (weak, nonatomic) IBOutlet UIView *viewRight;
@property (strong, nonatomic) IBOutlet NSLayoutConstraint *layoutConstraintLeftEquipRight;
@property (weak, nonatomic) IBOutlet UITextField *txtfieldLeft;
@property (weak, nonatomic) IBOutlet UITextField *txtfieldRight;

- (IBAction)didPressedBtnSearchPerson:(id)sender;
- (IBAction)didPressedBtnAboutMe:(id)sender;

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

- (void)sz_setInit{
    [_txtfieldLeft setValue:[UIColor colorWithRed:204.0/255.0 green:204.0/255.0 blue:204.0/255.0 alpha:1.0] forKeyPath:@"_placeholderLabel.textColor"];
    [_txtfieldRight setValue:[UIColor colorWithRed:204.0/255.0 green:204.0/255.0 blue:204.0/255.0 alpha:1.0] forKeyPath:@"_placeholderLabel.textColor"];
    
    UITapGestureRecognizer *tapGestureLeft = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(didPressedLeft:)];
    [_viewLeft addGestureRecognizer:tapGestureLeft];
    
    UITapGestureRecognizer *tapGestureRight = [[UITapGestureRecognizer alloc] initWithTarget:self action:@selector(didPressedRight:)];
    [_viewRight addGestureRecognizer:tapGestureRight];
}

- (void)didPressedLeft:(UIGestureRecognizer *)gesture{
    [_txtfieldLeft resignFirstResponder];
}

- (void)didPressedRight:(UIGestureRecognizer *)gesture{
    [_txtfieldRight resignFirstResponder];
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
        _txtfieldLeft.hidden = NO;
        _lblLeft.hidden = YES;
        [_txtfieldLeft becomeFirstResponder];
    }];
}

- (IBAction)didPressedBtnAboutMe:(id)sender {
    _txtfieldRight.hidden = NO;
    _lblRight.hidden = YES;
    [_txtfieldRight becomeFirstResponder];
    [self removeConstraint:_layoutConstraintLeftEquipRight];
    [_viewLeft mas_remakeConstraints:^(MASConstraintMaker *make) {
        make.top.equalTo(_lblTitle.mas_bottom);
        make.left.equalTo(@0);
        make.width.equalTo(@0);
        make.bottom.equalTo(@0);
    }];
    
    [_viewRight mas_remakeConstraints:^(MASConstraintMaker *make) {
        make.top.equalTo(_lblTitle.mas_bottom);
        make.bottom.equalTo(@0);
        make.left.equalTo(@0);
        make.width.equalTo(self.mas_width);
    }];
    
    [UIView animateWithDuration:0.3f animations:^{
        _viewLeft.alpha = 0;
        [self layoutIfNeeded];
    }];
}

- (void)recoverInitView{
    _txtfieldLeft.hidden = YES;
    _lblLeft.hidden = NO;
    _txtfieldRight.hidden = YES;
    _lblRight.hidden = NO;
    [_txtfieldLeft resignFirstResponder];
    [_txtfieldRight resignFirstResponder];
    if (![self.constraints containsObject:_layoutConstraintLeftEquipRight]) {
        [_viewLeft mas_remakeConstraints:^(MASConstraintMaker *make) {
            make.top.equalTo(_lblTitle.mas_bottom);
            make.left.equalTo(@0);
            make.bottom.equalTo(@0);
        }];
        
        [_viewRight mas_remakeConstraints:^(MASConstraintMaker *make) {
            make.top.equalTo(_lblTitle.mas_bottom);
            make.bottom.equalTo(@0);
            make.right.equalTo(@0);
            make.left.equalTo(_viewLeft.mas_right);
        }];
        [self addConstraint:_layoutConstraintLeftEquipRight];
        _viewLeft.alpha = 1;
        _viewRight.alpha = 1;
    }
}

#pragma mark - UITextFieldDelegate
- (BOOL)textFieldShouldReturn:(UITextField *)textField{
    return YES;
}

@end
