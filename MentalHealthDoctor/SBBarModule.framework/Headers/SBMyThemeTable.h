//
//  SBMyThemeTable.h
//  SBBarModule
//
//  Created by Chenyz on 15/3/13.
//  Copyright (c) 2015年 thomas. All rights reserved.
//

#import "SBStatusTableView.h"
#import "SBUserOptionalCell.h"

//主题吧单元格
@interface SBMyThemeCell:SBUserOptionalCell
@end

//主题吧空单元格
@interface SBMyThemeEmptyCell:SBFullEmptyCell
@end

@interface SBMyThemeTable : SBStatusTableView

@property (nonatomic, copy) NSString *userId;      //用户id

@end
