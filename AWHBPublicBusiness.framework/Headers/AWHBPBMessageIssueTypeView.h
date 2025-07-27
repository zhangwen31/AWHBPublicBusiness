//
//  AWHBPBMessageIssueTypeView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2024/3/17.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^AWHBPBMIReturnBtnSelectState)(NSString *selectState);
@interface AWHBPBMessageIssueTypeView : UIView

@property(nonatomic,assign) BOOL isNoEnabled;

@property(nonatomic,copy)AWHBPBMIReturnBtnSelectState ReturnBtnSelectState;

@end

NS_ASSUME_NONNULL_END
