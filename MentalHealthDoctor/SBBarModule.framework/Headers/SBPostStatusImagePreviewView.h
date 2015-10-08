//
//  SBPostStatusImagePreviewView.h
//  StockBar
//
//  Created by 缪和光 on 14-6-11.
//  Copyright (c) 2014年 Thomas. All rights reserved.
//

#import <UIKit/UIKit.h>

extern const CGFloat kSBPostStatusImagePreviewViewHeight;

@class SBPostStatusImagePreviewView;
@protocol SBPostStatusImagePreviewViewDelegate <NSObject>

- (void)sbPostStatusImagePreviewView:(SBPostStatusImagePreviewView *)view didSelectImageAtIndex:(NSInteger)idx;

- (void)sbPostStatusImagePreviewView:(SBPostStatusImagePreviewView *)view didSelectAddImageButton:(UIButton *)button;

//idx 选择删除的图片index，infoArray删除后剩余图片info  add by:cyz,2015-02-27
- (void)sbPostStatusImagePreviewView:(SBPostStatusImagePreviewView *)view didSelectDeleteImageAtIndex:(NSInteger)idx imageInfoArray:(NSMutableArray *)infoArray;

@end

@interface SBPostStatusImagePreviewView : UIView

@property (nonatomic, strong) NSMutableArray *imageInfoArray;
@property (nonatomic, weak) id<SBPostStatusImagePreviewViewDelegate> delegate;

- (void)update;

@end
