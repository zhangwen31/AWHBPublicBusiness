//
//  AWHBPBAreaListCell.h
//  Test
//
//  Created by 王恒 on 2023/4/28.
//

#import <UIKit/UIKit.h>
#import <AWHBPublicBusiness/AWHBPBCustomDataModel.h>

NS_ASSUME_NONNULL_BEGIN

@interface AWHBPBAreaListCell : UICollectionViewCell

@property (nonatomic, strong) AWHBPBCustomDataModel *model;

@property (nonatomic, copy) void (^DeleteContentBlock)(AWHBPBCustomDataModel *model);

@end

NS_ASSUME_NONNULL_END
