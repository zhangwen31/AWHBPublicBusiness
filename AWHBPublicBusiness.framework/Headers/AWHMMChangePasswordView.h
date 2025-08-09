//
//  AWHMMChangePasswordView.h
//  AWHMonitoringModule
//
//  Created by 王恒 on 2022/10/9.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^AWHMMSubmitPassword)(void);

@interface AWHMMChangePasswordView : UIView

@property(nonatomic,strong)UITextField *oldPassword;
@property(nonatomic,strong)UITextField *nPassword;
@property(nonatomic,strong)UITextField *repetPassword;
@property(nonatomic,copy)AWHMMSubmitPassword submitPassword;

@end

NS_ASSUME_NONNULL_END
