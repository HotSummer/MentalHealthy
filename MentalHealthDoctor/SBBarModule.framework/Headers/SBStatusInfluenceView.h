//
//  SBInfluenceView.h
//  StockBar
//
//  Created by 张松涛 on 14/11/6.
//  Copyright (c) 2014年 Thomas. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface SBStatusInfluenceView : UIView {
}

@property (nonatomic, strong) UILabel *influenceLbl;//影响力label
@property (nonatomic, assign) NSInteger userLevel;
@property (nonatomic, assign) NSInteger blackType;
@end

@interface SBUserPageInfluenceView : SBStatusInfluenceView
@end