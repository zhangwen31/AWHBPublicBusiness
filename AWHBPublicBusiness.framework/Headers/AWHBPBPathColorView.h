//
//  AWHBPBPathColorView.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/4/4.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^ReturnColorBlock)(UIColor *color);
@interface AWHBPBPathColorView : UIView
@property(nonatomic,copy)ReturnColorBlock ReturnColorBlock;
@end

NS_ASSUME_NONNULL_END
