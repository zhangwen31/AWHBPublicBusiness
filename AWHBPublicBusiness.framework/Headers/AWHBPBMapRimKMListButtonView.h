//
//  AWHBPBMapRimKMListButtonView.h
//  AWHBPublicBusiness
//
//  Created by 王恒 on 2024/3/9.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN
typedef void(^AWHBPBMaButtonBlock)(NSString *str);
@interface AWHBPBMapRimKMListButtonView : UIView
@property(nonatomic,copy)AWHBPBMaButtonBlock ButtonBlock;
@end

NS_ASSUME_NONNULL_END
