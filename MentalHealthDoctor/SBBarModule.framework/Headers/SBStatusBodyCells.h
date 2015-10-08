//
//  SBStatusBodyCells.h
//  StockBar
//
//  Created by 缪和光 on 14-8-22.
//  Copyright (c) 2014年 Thomas. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SBReplyCell.h"
#import "SBSourceStatusCell.h"

/**
 *  回复帖子单元格
 */
@interface SBStatusBodyReplyCell : SBReplyCell

@end

/**
 *  转发正文帖子单元格
 */
@interface SBStatusBodyRepostCell : SBSourceStatusCell

@end