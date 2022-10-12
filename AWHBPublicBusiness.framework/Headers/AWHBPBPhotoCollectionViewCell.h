//
//  AWHBPBPhotoCollectionViewCell.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/3/19.
//

#import <UIKit/UIKit.h>
#import "AWHBPBPhotoQueryModel.h"
NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBPhotoCollectionViewCell : UICollectionViewCell
@property(strong,nonatomic)AWHBPBPhotoQueryModel *model;
@property(strong,nonatomic)UILabel *indexLabel;
@end

NS_ASSUME_NONNULL_END
