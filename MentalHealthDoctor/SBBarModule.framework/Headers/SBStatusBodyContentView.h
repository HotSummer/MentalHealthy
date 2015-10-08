//
//  SBStatusBodyTableHeaderView.h
//  StockBar
//
//  Created by 缪和光 on 14-6-11.
//  Copyright (c) 2014年 Thomas. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SBStatusBodyController.h"

extern NSString * const kSBStatusBodyContentViewErrorDomainName;
extern NSInteger kSBStatusBodyContentViewErrorCodeDownloadingError;

@class SBCacheImageView, SBTableView, SBStatusBodyContentView;

@protocol SBStatusBodyContentViewDelegate <NSObject>

- (void)contentStartLoading:(SBStatusBodyContentView *)contentView;
- (void)contentDidFinishLoading:(SBStatusBodyContentView *)contentView withResult:(DataItemResult *)result error:(NSError *)error;
@end

/**
 正文页的正文部分，包括发帖人信息、正文文章
 */
@interface SBStatusBodyContentView : UIView <UIWebViewDelegate>

@property (nonatomic, weak) id<SBStatusBodyContentViewDelegate> delegate;
@property (nonatomic, weak) UIViewController *parentController;

@property (nonatomic, strong) UIImageView *tableViewHeaderBackgroundView;

- (void)requestContentWithPostId:(NSString *)postId withBodyControllerType:(SBStatusBodyControllerType)type;

- (void)refresh;

@end
