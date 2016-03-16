//
//  UIView+FontStandard.m
//  NewSDKInterface
//
//  Created by summer.zhu on 13/4/15.
//  Copyright (c) 2015年 summer. All rights reserved.
//

#import "UIView+FontStandard.h"

@implementation UIView (FontStandard)

- (void)setMHDColor:(MHDTextColorStandard)mhd_color{
    UIColor *color = [self getRGBColor:mhd_color];
    if ([self isKindOfClass:[UILabel class]]) {
        UILabel *lbl = (UILabel *)self;
        lbl.textColor = color;
    }else if ([self isKindOfClass:[UITextField class]]){
        UITextField *txt = (UITextField *)self;
        txt.textColor = color;
    }else if ([self isKindOfClass:[UITextView class]]){
        UITextView *txtView = (UITextView *)self;
        txtView.textColor = color;
    }else if ([self isKindOfClass:[UIButton class]]){
        UIButton *btn = (UIButton *)self;
        [btn setTitleColor:color forState:UIControlStateNormal];
    }
}

- (UIColor *)getRGBColor:(MHDTextColorStandard)mhd_color{
    switch (mhd_color) {
        case CA:
            return [UIColor colorWithRed:0 green:0 blue:0 alpha:1.0];
        case CB:
            return [UIColor colorWithRed:51.0/255.0 green:51.0/255.0 blue:51.0/255.0 alpha:1.0];
        case CC:
            return [UIColor colorWithRed:128.0/255.0 green:128.0/255.0 blue:128.0/255.0 alpha:1.0];
        case CD:
            return [UIColor colorWithRed:204.0/255.0 green:204.0/255.0 blue:204.0/255.0 alpha:1.0];
        case CE:
            return [UIColor colorWithRed:244.0/255.0 green:244.0/255.0 blue:244.0/255.0 alpha:1.0];
        case CF:
            return [UIColor colorWithRed:255.0/255.0 green:255.0/255.0 blue:255.0/255.0 alpha:1.0];
        case CG:
            return [UIColor colorWithRed:132.0/255.0 green:194.0/255.0 blue:76.0/255.0 alpha:1.0];
        case CH:
            return [UIColor colorWithRed:9.0/255.0 green:246.0/255.0 blue:204.0/255.0 alpha:1.0];
        case CI:
            return [UIColor colorWithRed:0.0/255.0 green:105.0/255.0 blue:181.0/255.0 alpha:1.0];
        case CJ:
            return [UIColor colorWithRed:254.0/255.0 green:211.0/255.0 blue:54.0/255.0 alpha:1.0];
            
        default:
            break;
    }
}

//- (void)setText:(NSString *)text size:(WMTextFontSizeStandard)size color:(WMTextColorStandard)color{
//    NSInteger fontSize = 0;
//    switch (size) {
//        case T1:
//            fontSize = kFont_T1;
//            break;
//        case T2:
//            fontSize = kFont_T2;
//            break;
//        case T3:
//            fontSize = kFont_T3;
//            break;
//        case T4:
//            fontSize = kFont_T4;
//            break;
//            
//        default:
//            break;
//    }
//    
//    UIColor *textColor = nil;
//    switch (color) {
//        case C1:
//            textColor = kColor_C1;
//            break;
//        case C2:
//            textColor = kColor_C2;
//            break;
//        case C3:
//            textColor = kColor_C3;
//            break;
//        case C4:
//            textColor = kColor_C4;
//            break;
//        case C5:
//            textColor = kColor_C5;
//            break;
//        case C6:
//            textColor = kColor_C6;
//            break;
//        case C7:
//            textColor = kColor_C7;
//            break;
//        case C8:
//            textColor = kColor_C8;
//            break;
//        case C9:
//            textColor = kColor_C9;
//            break;
//            
//        default:
//            break;
//    }
//    [self setText:text fontSize:fontSize fontColor:textColor];
//}
//
//- (void)setText:(NSString *)text fontSize:(NSInteger)fontSize fontColor:(UIColor *)color{
//    if ([self isKindOfClass:[UILabel class]]) {
//        UILabel *lbl = (UILabel *)self;
//        lbl.text = text;
//        lbl.font = [UIFont systemFontOfSize:fontSize];
//        lbl.textColor = color;
//    }else if ([self isKindOfClass:[UITextField class]]){
//        UITextField *txt = (UITextField *)self;
//        txt.text = text;
//        txt.font = [UIFont systemFontOfSize:fontSize];
//        txt.textColor = color;
//    }else if ([self isKindOfClass:[UITextView class]]){
//        UITextView *txtView = (UITextView *)self;
//        txtView.text = text;
//        txtView.font = [UIFont systemFontOfSize:fontSize];
//        txtView.textColor = color;
//    }else if ([self isKindOfClass:[UIButton class]]){
//        UIButton *btn = (UIButton *)self;
//        [btn setTitle:text forState:UIControlStateNormal];
//        btn.titleLabel.font = [UIFont systemFontOfSize:fontSize];
//        [btn setTitleColor:color forState:UIControlStateNormal];
//    }
//}
//
//- (void)setFont:(WMTextFontSizeStandard)fontSize fontColor:(WMTextColorStandard)color{
//    [self setText:@"" size:fontSize color:color];
//}

@end
