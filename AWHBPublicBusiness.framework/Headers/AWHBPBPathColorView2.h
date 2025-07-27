//
//  AWHBPBPathColorView2.h
//  AWHBPublicBusiness
//
//  Created by GeDaTing on 2022/3/19.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^ReturnColorStrBlock)(UIColor *color, NSString *colorStr);
@interface AWHBPBPathColorView2 : UIView
@property(nonatomic,strong)NSString *title;
@property(nonatomic,strong)NSString *colorStr;
@property(nonatomic,copy)ReturnColorStrBlock ReturnColorBlock;
@end

NS_ASSUME_NONNULL_END
