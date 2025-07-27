//
//  AWHBPBMapRimListButtonView.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/3/26.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^ButtonBlock)(NSString *str);
@interface AWHBPBMapRimListButtonView : UIView
@property(nonatomic,copy)ButtonBlock ButtonBlock;
@end

NS_ASSUME_NONNULL_END
