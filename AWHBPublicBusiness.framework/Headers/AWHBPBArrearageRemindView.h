//
//  AWHBPBArrearageRemindView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2023/8/12.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^AWHBPBRemindBlock)();

@interface AWHBPBArrearageRemindView : UIView

@property(nonatomic,copy)AWHBPBRemindBlock RemindBlock;

@property (nonatomic, strong, readonly) UILabel *titleLabel;

@property (nonatomic, strong, readonly) UILabel *subTitleLabel;

@property (nonatomic, strong, readonly) UILabel *functionLab;

@property (nonatomic, strong, readonly) UITextView *contentTextView;

@property (nonatomic, strong, readonly) UIButton *closeBut;

@property (nonatomic, strong, readonly) UIButton *sureBut;

@property (nonatomic, copy) void (^closeClick)(void);

- (void)setupTitle:(NSString *)title changeTitle:(NSString *)changeTitle;

- (void)closeButAction;

@end

NS_ASSUME_NONNULL_END
