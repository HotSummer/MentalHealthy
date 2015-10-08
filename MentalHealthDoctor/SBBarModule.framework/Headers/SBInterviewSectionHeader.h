//
//  SBInterviewSectionHeader.h
//  StockBar
//
//  Created by 缪和光 on 14-8-21.
//  Copyright (c) 2014年 Thomas. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SBStatusBodySectionHeaderBase.h"

/**
 访谈帖的section headers
 */
@interface SBInterviewSectionHeader : SBStatusBodySectionHeaderBase

@property (nonatomic, strong) UIButton *buttonQuestions;
@property (nonatomic, strong) UIButton *buttonAnswers;
@property (nonatomic, strong) UIButton *buttonReverseOrder;

@end
