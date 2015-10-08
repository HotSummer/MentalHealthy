//
//  AssetCell.h
//
//  Created by ELC on 2/15/11.
//  Copyright 2011 ELC Technologies. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ELCAsset.h"

typedef void (^ImageSelectedBlock)(ELCAsset *asset);

@interface ELCAssetCell : UITableViewCell

@property (nonatomic, copy) ImageSelectedBlock imageSelectBlock;

- (void)setAssets:(NSArray *)assets;

@end
