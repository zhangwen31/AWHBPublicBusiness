//
//  AWHBPBAddCameraPhotoView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2023/8/12.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBAddCameraPhotoView : UIView

@property (nonatomic, assign) CGFloat viewWidth;
//可以选择照片数量
@property (nonatomic, assign) NSInteger photoNumber;
//每行展示数量
@property (nonatomic, assign) NSInteger eachRowNumber;

@property (nonatomic, strong, readonly) NSMutableArray *selectImages;

@property (nonatomic, copy) void (^changeDataImage)(void);

/**
 * 删除已经选择的照片
 */
- (void)removeSelectImages;

@end

NS_ASSUME_NONNULL_END
