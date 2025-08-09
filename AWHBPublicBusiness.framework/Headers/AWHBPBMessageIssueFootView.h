//
//  AWHBPBMessageIssueFootView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2024/3/17.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^AWHBPBMIReturnTextViewText)(NSString *string);
@interface AWHBPBMessageIssueFootView : UIView

@property(nonatomic,strong)UITextView *suggestText;
@property(nonatomic,copy)AWHBPBMIReturnTextViewText ReturnTextViewText;

@end

NS_ASSUME_NONNULL_END
