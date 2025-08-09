//
//  AWHBPBAddCameraPhotoViewCell.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2023/8/12.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBAddCameraPhotoViewCell : UICollectionViewCell

@property(strong,nonatomic)UIImage *image;
@property(nonatomic,copy) void (^delectPhotoClick)(UIImage *image);

@end

NS_ASSUME_NONNULL_END
