//
//  AWHBPBEnterTipsView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2023/5/23.
//

#import <UIKit/UIKit.h>

typedef NS_ENUM(NSUInteger, AWHBPBEnterTipsType) {
    AWHBPBEnterTipsTypeSuccess          = 0, //录入成功
    AWHBPBEnterTipsTypeFail             = 1, //录入失败
    AWHBPBEnterTipsTypeNone             = 2, //不确定
};

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBEnterTipsView : UIView
/**
 * 标题 默认 温馨提示
 */
@property (nonatomic, strong) NSString *title;
/**
 * 内容 默认  已提交，上传成功！已提交，上传失败！
 */
@property (nonatomic, strong) NSString *content;

@property (nonatomic, assign) AWHBPBEnterTipsType type;

@property (nonatomic, strong) UIButton *leftBut;

@property (nonatomic, strong) UIButton *rightBut;

@property (nonatomic, copy) void (^leftBlock)(void);

@property (nonatomic, copy) void (^rightBlock)(void);

- (void)close;

@end

NS_ASSUME_NONNULL_END
