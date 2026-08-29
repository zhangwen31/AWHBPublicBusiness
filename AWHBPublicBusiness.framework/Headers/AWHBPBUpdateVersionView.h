//
//  AWHBPBUpdateVersionView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2023/3/1.
//

#import <UIKit/UIKit.h>

typedef void(^AWHBPBUpdateVersionBlock)(void);

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBUpdateVersionView : UIView

@property (nonatomic, strong) NSString *contentText;
@property (nonatomic, copy) AWHBPBUpdateVersionBlock UpdateVersionBlock;

@property (nonatomic, strong, readonly) UILabel *versionLab;

@property (nonatomic, strong, readonly) UILabel *titleLabel;

@property (nonatomic, strong, readonly) UITextView *contentTextView;

@property (nonatomic, strong, readonly) UIButton *closeBut;

@property (nonatomic, strong, readonly) UIButton *sureBut;

@property (nonatomic, copy) void (^closeClick)(void);

- (void)setupTitle:(NSString *)title changeTitle:(NSString *)changeTitle;

- (void)closeButAction;
@end

NS_ASSUME_NONNULL_END
