//
//  UIView+FontStandard.h
//  NewSDKInterface
//
//  Created by summer.zhu on 13/4/15.
//  Copyright (c) 2015年 summer. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef enum {
    T1 = 0,//18号字体
    T2,//15号字体
    T3,//13号字体
    T4//11号字体
}WMTextFontSizeStandard;

typedef enum {
    CA = 0,
    CB,
    CC,//0x808080
    CD,
    CE,//0x7a2b99
    CF,
    CG,
    CH,
    CI,
    CJ
}MHDTextColorStandard;


@interface UIView (FontStandard)

- (void)setMHDColor:(MHDTextColorStandard)mhd_color;
//
///**
// *  统一设置字体字号和颜色
// *
// *  @param text     text
// *  @param fontSize 字体大小
// *  @param color    字体颜色
// */
//- (void)setText:(NSString *)text size:(WMTextFontSizeStandard)size color:(WMTextColorStandard)color;
//
///**
// *  统一设置字体字号和颜色
// *
// *  @param text     text
// *  @param fontSize 字体大小
// *  @param color    字体颜色
// */
//- (void)setText:(NSString *)text fontSize:(NSInteger)fontSize fontColor:(UIColor *)color;
//
///**
// *  统一设置字体字号和颜色
// *
// *  @param fontSize 字体大小
// *  @param color    字体颜色
// */
//- (void)setFont:(WMTextFontSizeStandard)fontSize fontColor:(WMTextColorStandard)color;

@end
