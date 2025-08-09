//
//  AWHBPBSingleCarLandMoreView.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/3/26.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^RetuenTableTitleBlock)(NSString *string);
@interface AWHBPBSingleCarLandMoreView : UIView
@property(nonatomic,copy)RetuenTableTitleBlock RetuenTableTitleBlock;
@end

NS_ASSUME_NONNULL_END
