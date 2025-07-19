//
//  AWHBPBAddPhotoViewCell.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2023/3/2.
//

#import <UIKit/UIKit.h>
#import <Photos/Photos.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBAddPhotoViewCell : UICollectionViewCell

@property(strong,nonatomic)UIImage *image;
@property(strong,nonatomic)NSString *imageUrl;
@property(strong,nonatomic)PHAsset *asset;
//是否不能编辑
@property (nonatomic, assign) BOOL isNoEnabled;
@property(nonatomic,copy) void (^delectPhotoClick)(UIImage *image,NSString *imageUrl,PHAsset *asset);
- (UIImage *)getLocationImage;

@end

NS_ASSUME_NONNULL_END
