//
//  AWHBPBEnterOnlyTipsView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2025/3/8.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBEnterOnlyTipsView : UIView

/**
 * 标题 默认 温馨提示
 */
@property (nonatomic, strong) NSString *title;
/**
 * 内容 默认  已提交，上传成功！已提交，上传失败！
 */
@property (nonatomic, strong) NSString *content;

@property (nonatomic, strong) UIButton *sureBut;

@property (nonatomic, copy) void (^sureBlock)(void);

- (void)close;

@end

NS_ASSUME_NONNULL_END
