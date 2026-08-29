//
//  AWHBPBConfirmationPromptBoxView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2026/5/10.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBConfirmationPromptBoxView : AWHBBBFontChangeView

@property (nonatomic, strong, readonly) UILabel *titleLabel;

@property (nonatomic, strong, readonly) UITextView *contentTextView;

@property (nonatomic, strong, readonly) UIButton *closeBut;

@property (nonatomic, strong, readonly) UIButton *sureBut;

@property (nonatomic, copy) void (^closeClick)(void);

@property (nonatomic, copy) void (^sureClick)(void);

- (void)setupTitle:(NSString *)title changeTitle:(NSString *)changeTitle;

- (void)closeButAction;

@end

NS_ASSUME_NONNULL_END
