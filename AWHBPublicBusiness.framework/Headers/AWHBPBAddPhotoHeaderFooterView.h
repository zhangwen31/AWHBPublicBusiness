//
//  AWHBPBAddPhotoHeaderFooterView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2024/8/3.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBAddPhotoHeaderFooterView : UITableViewHeaderFooterView

@property (nonatomic, strong) NSMutableArray *selectImages;
@property(nonatomic,copy) void (^delectPhotoClick)(UIImage *image,NSString *imageUrl);
@property(nonatomic,copy) void (^addPhotosClick)(NSMutableArray *images);
@property (nonatomic, assign) BOOL isChange;

/**
 * 展示添加图片
 * @param number 添加图片数量
 * @param eachRowNumber  每行展示数量
 */
- (void)showAddPhoto:(NSInteger)number eachRowNumber:(NSInteger)eachRowNumber;

@end

NS_ASSUME_NONNULL_END
