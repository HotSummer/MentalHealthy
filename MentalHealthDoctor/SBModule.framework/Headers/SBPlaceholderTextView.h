//
//  SBPlaceholderTextView.h
//  StockBar
//
//  Created by 缪和光 on 30/05/2014.
//  Copyright (c) 2014 Thomas. All rights reserved.
//

#import <UIKit/UIKit.h>

/**
 这个代码是从MPTextView抄下来的
 详见 https://github.com/cbowns/MPTextView
 */
@interface SBPlaceholderTextView : UITextView

// Named .placeholderText, in case UITextView gains
// a .placeholder property (like UITextField) in future iOS versions.
@property (nonatomic, copy) NSString *placeholderText;

/**
 用于闪烁提示（比如字数不够等）
 */
- (void)warningFlash;

@end

