/*
 #####################################################################
 # File    : SBAboutAndHelpController.h
 # Project : StockBar
 # Created : 14-6-24
 # DevTeam : Thomas
 # Author  : Thomas
 # Notes   : 
 #####################################################################
 ### Change Logs   ###################################################
 #####################################################################
 ---------------------------------------------------------------------
 # Date  :
 # Author:
 # Notes :
 #
 #####################################################################
 */

#import <MessageUI/MFMailComposeViewController.h>       //邮件


/**
 *  帮助单元格
 */
@interface SBAboutAndHelpCell : SBDataTableCell {
    UILabel *_titleLbl;
}
@end

@interface SBAboutAndHelpController : SBBasicController <MFMailComposeViewControllerDelegate>

@end
