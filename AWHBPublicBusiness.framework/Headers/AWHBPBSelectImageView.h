//
//  AWHBPBSelectImageView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2025/10/25.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^AWHBPBConfirmSelectBtnBlock)(void);

@interface AWHBPBSelectImageView : UIView

@property (nonatomic, copy) AWHBPBConfirmSelectBtnBlock ConfirmCBtnBlock;
@property (nonatomic, strong, readonly) NSMutableArray *selectImages;
@property (nonatomic, assign) BOOL isChange;
/**
 * 展示添加图片
 * @param number 添加图片数量
 * @param title 标题内容
 * @param promptTitle 提示内容
 * @param confirmButTitle 确定按钮文字
 */
- (void)showAddPhoto:(NSInteger)number title:(NSString *)title promptTitle:(NSString *)promptTitle confirmButTitle:(NSString *)confirmButTitle;
/**
 * 删除已经选择的照片
 */
- (void)removeSelectImages;

@end

NS_ASSUME_NONNULL_END
