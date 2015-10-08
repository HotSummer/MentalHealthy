//
//  SBStatusBodySectionHeaderProtocol.h
//  StockBar
//
//  Created by 缪和光 on 14-8-20.
//  Copyright (c) 2014年 Thomas. All rights reserved.
//

#import <SBModule/DataItemResult.h>
#import "SBJSONNODEV3.h"

typedef NS_ENUM(NSInteger, SBStatusBodyType) {
    SBStatusBodyTypeComments,
    SBStatusBodyTypeReposts,
    SBStatusBodyTypeAuthorOnly, //只看楼主
    SBStatusBodyTypeInterviewQuestons,
    SBStatusBodyTypeInterviewAnswers
};

@class SBStatusBodyTableView;

@protocol SBStatusBodySectionHeaderProtocol <NSObject>

@required
- (void)setTableView:(SBStatusBodyTableView *)tableView;
- (void)tableView:(SBStatusBodyTableView *)tableView startLoadingForBodyType:(SBStatusBodyType)type;

@optional
- (void)updateUIWithContentResult:(DataItemResult *)contentResult;
- (void)updateUIWithTableResult:(DataItemResult *)tableResult;

@end
