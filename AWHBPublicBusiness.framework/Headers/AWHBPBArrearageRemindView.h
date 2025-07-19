//
//  AWHBPBArrearageRemindView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2023/8/12.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^AWHBPBRemindBlock)(NSString *string);

@interface AWHBPBArrearageRemindView : UIView

/** */
@property(nonatomic,strong)UILabel *headLab;
@property(nonatomic,strong)UITextView *titleLab;
@property(nonatomic,strong)UIButton *cancleBtn;
@property(nonatomic,strong)UIButton *sureBtn;
@property(nonatomic,copy)AWHBPBRemindBlock RemindBlock;

@end

NS_ASSUME_NONNULL_END
