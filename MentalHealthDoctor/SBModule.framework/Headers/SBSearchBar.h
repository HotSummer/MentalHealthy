//
//  SBSearchBar.h
//  StockBar
//
//  Created by 缪和光 on 14-7-16.
//  Copyright (c) 2014年 Thomas. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SBSearchBar;
@protocol SBSearchBarDelegate <NSObject>

@optional

- (BOOL)searchBarShouldBeginEditing:(SBSearchBar *)searchBar;                      // return NO to not become first responder
- (void)searchBarTextDidBeginEditing:(SBSearchBar *)searchBar;                     // called when text starts editing
- (BOOL)searchBarShouldEndEditing:(SBSearchBar *)searchBar;                        // return NO to not resign first responder
- (void)searchBarTextDidEndEditing:(SBSearchBar *)searchBar;                       // called when text ends editing
- (void)searchBar:(SBSearchBar *)searchBar textDidChange:(NSString *)searchText;   // called when text changes (including clear)
- (void)searchBarSearchButtonClicked:(SBSearchBar *)searchBar;                     // called when keyboard search button pressed
- (void)searchBarCancelButtonClicked:(SBSearchBar *) searchBar;                    // called when cancel button pressed

@end


@interface SBSearchBar : UIView

@property (nonatomic, strong) UITextField *textField;
@property (nonatomic, strong) UIButton *buttonCancel;

@property (nonatomic, unsafe_unretained) BOOL showsCancelButton;
@property (nonatomic, copy) NSString *placeholder;
@property (nonatomic, copy) NSString *text;

@property (nonatomic, assign) UIEdgeInsets padding;

@property (nonatomic, weak) id<SBSearchBarDelegate> delegate;

@end
