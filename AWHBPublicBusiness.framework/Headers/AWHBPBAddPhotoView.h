//
//  AWHBPBAddPhotoView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2023/3/2.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBAddPhotoView : UIView

@property (nonatomic, assign) CGFloat viewWidth;
//可以选择照片数量
@property (nonatomic, assign) NSInteger photoNumber;
//每行展示数量
@property (nonatomic, assign) NSInteger eachRowNumber;

@property (nonatomic, strong) NSMutableArray *selectImages;
//是否不能编辑
@property (nonatomic, assign) BOOL isNoEnabled;

@property (nonatomic, copy) void (^changeDataImage)(void);
@property(nonatomic,copy) void (^delectPhotoClick)(UIImage *image,NSString *imageUrl);
@property(nonatomic,copy) void (^addPhotosClick)(NSMutableArray *images);
/**
 * 删除已经选择的照片
 */
- (void)removeSelectImages;
@end

NS_ASSUME_NONNULL_END
