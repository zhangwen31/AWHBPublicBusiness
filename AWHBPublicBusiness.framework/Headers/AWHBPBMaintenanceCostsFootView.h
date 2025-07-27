//
//  AWHBPBMaintenanceCostsFootView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2023/8/12.
//

#import <UIKit/UIKit.h>
#import <AWHBoneRuntime/AWHBRTextView.h>

NS_ASSUME_NONNULL_BEGIN

typedef void(^AWHBPBConfirmCBtnBlock)(NSString *textViewText);
@interface AWHBPBMaintenanceCostsFootView : UIView

@property (nonatomic, strong) AWHBRTextView *noteTextView;
@property (nonatomic, copy) AWHBPBConfirmCBtnBlock ConfirmCBtnBlock;
@property (nonatomic, strong, readonly) NSMutableArray *selectImages;
@property (nonatomic, assign) BOOL isChange;
/**
 * 展示添加图片
 * @param number 添加图片数量
 * @param title 标题内容
 * @param promptTitle 提示内容
 */
- (void)showAddPhoto:(NSInteger)number title:(NSString *)title promptTitle:(NSString *)promptTitle;
/**
 * 删除已经选择的照片
 */
- (void)removeSelectImages;

@end

NS_ASSUME_NONNULL_END
